/***
* ==++==
*
* Copyright (c) Microsoft Corporation. All rights reserved.
*
* ==++==
* =+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+
*
* winrtawaitadapter.h
*
* =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
****/

#pragma once

#include <exception>
#include <winerror.h>
#include <intrin.h>
#include <experimental\coroutine>
#include <winrt\winrt.h>

namespace winrt_await_adapters
{
	using namespace winrt;
	using namespace Windows::Foundation;
	//
    // Base class for the promise returned for asynchronous actions and operations.
    //
	class _AsyncInfoPromiseBase abstract : public IAsyncInfo
	{
	public:

		// IAsyncInfo interface method: Cancels the asynchronous action/operation.
		virtual void Cancel()
		{
			m_status = AsyncStatus::Canceled;
		}

		// IAsyncInfo interface method: Closes the asynchronous action/operation.
		virtual void Close()
		{
		}

		// IAsyncInfo : Error condition of the asynchronous action/operation.
		virtual HRESULT ErrorCode()
		{
			return m_errorcode; 
		}

		// IAsyncInfo : Handle of the asynchronous action/operation.
		virtual unsigned int Id()
		{
			return m_id;
		}

		virtual void Id(unsigned int id)
		{
			m_id = id;
		}

		// IAsyncInfo : value that indicates the status of the asynchronous action/operation.
		virtual Windows::Foundation::AsyncStatus Status()
		{
			return m_status;
		}

		virtual void Status(Windows::Foundation::AsyncStatus status)
		{
			m_status = status;
		}

        void _SetError(winrt::hresult_error ex)
        {
            Status(AsyncStatus::Error);
            m_errorcode = ex.code();
        }

        HRESULT m_errorcode;
        AsyncStatus m_status = AsyncStatus::Started;
        unsigned int m_id = 1;
    };

    template <typename _Attributes>
    class _AsyncActionPromise : public _AsyncInfoPromiseBase, public _Attributes::_AsyncBaseType
    {
        using _CompletionDelegateType = typename _Attributes::_CompletionDelegateType;
    public:
        virtual void GetResults()
        {
        }

        // Get/set the method that handles the action completed notification.
        virtual _CompletionDelegateType Completed()
        {
			return m_completedHandler;
        }

        virtual void Completed(_CompletionDelegateType* _CompletedHandler)
        {
            m_completedHandler = _CompletedHandler;
		}
        
        void Cancel() override
        {
            _AsyncInfoPromiseBase::Cancel();
        }

        void Close() override
        {
            _AsyncInfoPromiseBase::Close();
        }

        HRESULT ErrorCode() override
        {
           return _AsyncInfoPromiseBase::ErrorCode(); 
        }

        unsigned int Id() override
        {
		 return _AsyncInfoPromiseBase::Id;
        }

        void Id(unsigned int id) override
        {
            _AsyncInfoPromiseBase::Id = id;
        }

        AsyncStatus Status() override
        {
            return _AsyncInfoPromiseBase::Status();
        }

        void Status(Windows::Foundation::AsyncStatus status) override
        {
            _AsyncInfoPromiseBase::Status(status);
		}

    internal:
        // Called by promise_type::return_void for AsyncActionPromise coroutine_traits
        void _InvokeCompletion()
        {
            // If Status is already set to Canceled/Error, retain the state.
            if (_AsyncInfoPromiseBase::Status() == Windows::Foundation::AsyncStatus::Started)
				_AsyncInfoPromiseBase::Status(Windows::Foundation::AsyncStatus::Completed);

            if (m_completedHandler)
            {
                m_completedHandler->Invoke(this, Status());
            }
        }

        // Called by coroutine_traits::promise_type::set_exception to propagate the error.
        // There is no way to propagate the Exception message.
        void _SetError(Exception* ex)
        {
            _AsyncInfoPromiseBase::_SetError(ex);
            _InvokeCompletion();
        }

        _CompletionDelegateType*  m_completedHandler;
    };

    template <typename _Attributes>
    class _AsyncActionWithProgressPromise : public _AsyncInfoPromiseBase, public _Attributes::_AsyncBaseType
    {
        using _CompletionDelegateType = typename _Attributes::_CompletionDelegateType;
        using _ProgressDelegateType = typename _Attributes::_ProgressDelegateType;

    public:
        void Close() override
        {
            _AsyncInfoPromiseBase::Close();
        }

        void Cancel() override
        {
            _AsyncInfoPromiseBase::Cancel();
        }

        virtual HRESULT ErrorCode() override
        {
           
                return _AsyncInfoPromiseBase::ErrorCode;
            
        }

        virtual unsigned int Id() override
        {
			return _AsyncInfoPromiseBase::Id;  
        }

		virtual void Id(unsigned int id) override
		{
			_AsyncInfoPromiseBase::Id = id;
		}

        virtual Windows::Foundation::AsyncStatus Status()
        {
			return _AsyncInfoPromiseBase::Status; 
        }

		virtual void Status(Windows::Foundation::AsyncStatus status) override
		{
			_AsyncInfoPromiseBase::Status = status;
		}

        virtual void GetResults()
        {
        }

        virtual _ProgressDelegateType Progress()
        {
			return m_progressHandler;
        }

        virtual void Progress(_ProgressDelegateType* progressHandler)
        {
			m_progressHandler = progressHandler;
        }
        

        // Get/set the method that handles the action/operation completed notification.
        virtual _CompletionDelegateType Completed()
        {
              return m_completedHandler;  
        }

		virtual void SetCompletionTypeDelegate(_CompletionDelegateType* _CompletedHandler)
		{
			m_completedHandler = _CompletedHandler;
		}

    internal:
        void _InvokeProgressHandler(typename _Attributes::_ProgressType progress)
        {
            if (m_progressHandler)
            {
                m_progressHandler->Invoke(this, progress);
            }
        }

        // Called by promise_type::return_void for AsyncAction/AsyncActionWithProgress coroutine_traits
        void _InvokeCompletion()
        {
            // If m_status is already set to Canceled/Error, retain the state.
            if (Status == Windows::Foundation::AsyncStatus::Started)
                Status = Windows::Foundation::AsyncStatus::Completed;

            if (m_completedHandler)
            {
                m_completedHandler->Invoke(this, Status);
            }
        }

        // Called by coroutine_traits::promise_type::set_exception to propagate the error.
        // There is no way to propagate the Exception message.
        void _SetError(Platform::Exception* ex)
        {
            _AsyncInfoPromiseBase::_SetError(ex);
            _InvokeCompletion();
        }

        _ProgressDelegateType* m_progressHandler;
        _CompletionDelegateType* m_completedHandler;
    };

    template <typename _Attributes>
    class _AsyncOperationPromise :public _AsyncInfoPromiseBase, public _Attributes::_AsyncBaseType
    {
        using _CompletionDelegateType = typename _Attributes::_CompletionDelegateType;
        using _ReturnType = typename _Attributes::_ReturnType;

    public:
        void Close() override
        {
            _AsyncInfoPromiseBase::Close();
        }

        void Cancel() override
        {
            _AsyncInfoPromiseBase::Cancel();
        }

        virtual HRESULT ErrorCode() override
        {
            
                return _AsyncInfoPromiseBase::ErrorCode;
            
        }

        virtual unsigned int Id() override
        {
              return _AsyncInfoPromiseBase::Id;
        }

        virtual void Id(unsigned int id) override
        {
            _AsyncInfoPromiseBase::Id = id;
        }
        

        virtual Windows::Foundation::AsyncStatus Status() override
		{

				return _AsyncInfoPromiseBase::Status;
		}

        virtual void Status(Windows::Foundation::AsyncStatus status) override
        {
            _AsyncInfoPromiseBase::Status = status;
        }
        

        virtual _ReturnType GetResults()
        {
            return m_results;
        }

        // Get/set the method that handles the action/operation completed notification.
        virtual  _CompletionDelegateType Completed()
        {
           
                return m_completedHandler;
        }

        virtual void Completed(_CompletionDelegateType* _CompletedHandler)
        {
            m_completedHandler = _CompletedHandler;
        }
        

    internal:
        // Called by promise_type::return_value for AsyncOperation/AsyncOperationWithProgress coroutine_traits
        void _InvokeCompletion(_ReturnType result)
        {
            // If Status is already set to Canceled/Error, retain the state.
            if (Status == Windows::Foundation::AsyncStatus::Started)
                Status = Windows::Foundation::AsyncStatus::Completed;

            if (m_completedHandler)
            {
                m_results = result;
                m_completedHandler.Invoke(this, Status);
            }
        }

        // Called by coroutine_traits::promise_type::set_exception to propagate the error.
        // There is no way to propagate the Exception message.
        void _SetError(Platform::Exception* ex)
        {
            _AsyncInfoPromiseBase::_SetError(ex);
            _InvokeCompletion(nullptr);
        }

        _ReturnType m_results;
        _CompletionDelegateType* m_completedHandler;
    };

    template <typename _Attributes>
    class _AsyncOperationWithProgressPromise :public _AsyncInfoPromiseBase, public _Attributes::_AsyncBaseType
    {
        using _CompletionDelegateType = typename _Attributes::_CompletionDelegateType;
        using _ProgressDelegateType = typename _Attributes::_ProgressDelegateType;
        using _ReturnType = typename _Attributes::_ReturnType;
    public:
        void Close() override
        {
            _AsyncInfoPromiseBase::Close();
        }

        void Cancel() override
        {
            _AsyncInfoPromiseBase::Cancel();
        }

        virtual HResult ErrorCode() override
        {
           
                return _AsyncInfoPromiseBase::ErrorCode;
            
        }

        virtual unsigned int Id() override
        {
            return _AsyncInfoPromiseBase::Id;
        }

		virtual void Id(unsigned int id) override
		{
			_AsyncInfoPromiseBase::Id = id;
		}
        

        virtual Windows::Foundation::AsyncStatus Status() override
        {
            
                return _AsyncInfoPromiseBase::Status;
        }
        virtual void Status(Windows::Foundation::AsyncStatus status) override
        {
            _AsyncInfoPromiseBase::Status = status;
        }
        
        virtual _ReturnType GetResults()
        {
            return m_results;
        }

        // Get/set the method that handles the action/operation completed notification.
        virtual _CompletionDelegateType Completed()
        {
            
                return m_completedHandler;
        }

        virtual void Completed(_CompletionDelegateType* _CompletedHandler)
        {
            m_completedHandler = _CompletedHandler;
        }
        

        virtual  _ProgressDelegateType Progress()
        {
			return m_progressHandler;
        }

        virtual void Completed(_ProgressDelegateType* progressHandler)
        {
            m_progressHandler = progressHandler;
        }
        

    internal:
        void _InvokeProgressHandler(typename _Attributes::_ProgressType progress)
        {
            if (m_progressHandler)
            {
                m_progressHandler.Invoke(this, progress);
            }
        }

        // Called by promise_type::return_value for AsyncOperation/AsyncOperationWithProgress coroutine_traits
        void _InvokeCompletion(_ReturnType result)
        {
            // If m_status is already set to Canceled/Error, retain the state.
            if (Status == Windows::Foundation::AsyncStatus::Started)
                Status = Windows::Foundation::AsyncStatus::Completed;

            if (m_completedHandler)
            {
                m_results = result;
                m_completedHandler->Invoke(this, Status);
            }
        }

        // Called by coroutine_traits::promise_type::set_exception to propagate the error.
        // There is no way to propagate the Exception message.
        void _SetError(Exception* ex)
        {
            _AsyncInfoPromiseBase::_SetError(ex);
            _InvokeCompletion(nullptr);
        }

        _ReturnType m_results;
        _CompletionDelegateType* m_completedHandler;
        _ProgressDelegateType* m_progressHandler;
    };

    template<typename _ProgressType, typename _ReturnType, bool _TakesProgress>
    struct _AsyncAttributes
    {
    };

    template<typename _ProgressType, typename _ReturnType>
    struct _AsyncAttributes<_ProgressType, _ReturnType, true>
    {
        typedef Windows::Foundation::IAsyncOperationWithProgress<_ReturnType, _ProgressType> _AsyncBaseType;
        typedef Windows::Foundation::AsyncOperationProgressHandler<_ReturnType, _ProgressType> _ProgressDelegateType;
        typedef Windows::Foundation::AsyncOperationWithProgressCompletedHandler<_ReturnType, _ProgressType> _CompletionDelegateType;
        typedef _ReturnType _ReturnType;
        typedef _ProgressType _ProgressType;
        typedef _AsyncOperationWithProgressPromise<_AsyncAttributes<_ProgressType, _ReturnType, true>> _AsyncPromiseType;
    };

    template<typename _ProgressType, typename _ReturnType>
    struct _AsyncAttributes<_ProgressType, _ReturnType, false>
    {
        typedef Windows::Foundation::IAsyncOperation<_ReturnType> _AsyncBaseType;
        typedef Windows::Foundation::AsyncOperationCompletedHandler<_ReturnType> _CompletionDelegateType;
        typedef _ReturnType _ReturnType;
        typedef _ProgressType _ProgressType;
        typedef _AsyncOperationPromise<_AsyncAttributes<_ProgressType, _ReturnType, false>> _AsyncPromiseType;
    };

    template<typename _ProgressType>
    struct _AsyncAttributes<_ProgressType, void, true>
    {
        typedef Windows::Foundation::IAsyncActionWithProgress<_ProgressType> _AsyncBaseType;
        typedef Windows::Foundation::AsyncActionProgressHandler<_ProgressType> _ProgressDelegateType;
        typedef Windows::Foundation::AsyncActionWithProgressCompletedHandler<_ProgressType> _CompletionDelegateType;
        typedef void _ReturnType;
        typedef _ProgressType _ProgressType;
        typedef _AsyncActionWithProgressPromise<_AsyncAttributes<_ProgressType, void, true>> _AsyncPromiseType;
    };

    template<typename _ProgressType>
    struct _AsyncAttributes<_ProgressType, void, false>
    {
        typedef Windows::Foundation::IAsyncAction _AsyncBaseType;
        typedef Windows::Foundation::AsyncActionCompletedHandler _CompletionDelegateType;
        typedef void _ReturnType;
        typedef _ProgressType _ProgressType;
        typedef _AsyncActionPromise<_AsyncAttributes<_ProgressType, void, false>> _AsyncPromiseType;
    };

    template <typename TPromise, typename TProgress>
    class await_progress_reporter;

    template <typename TProgress>
    class await_progress_reporter<Windows::Foundation::IAsyncActionWithProgress<TProgress>, TProgress>
    {
    public:
        await_progress_reporter(Windows::Foundation::IAsyncActionWithProgress<TProgress>* promise)
        {
            m_promise = promise;
        }

        void report_progress(TProgress progressval)
        {
            static_cast<_AsyncActionWithProgressPromise<_AsyncAttributes<TProgress, void, true>> *>(m_promise)->_InvokeProgressHandler(progressval);
        }

        bool await_ready()
        {
            return true;
        }

        void await_suspend(std::experimental::coroutine_handle<>)
        {
        }

        await_progress_reporter<Windows::Foundation::IAsyncActionWithProgress<TProgress>, TProgress> await_resume()
        {
            return *this;
        }
    private:
        Windows::Foundation::IAsyncActionWithProgress<TProgress>* m_promise;
    };


    template <typename TResult, typename TProgress>
    class await_progress_reporter<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>, TProgress>
    {
    public:
        await_progress_reporter(Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>* promise)
        {
            m_promise = promise;
        }

        void report_progress(TProgress progressval)
        {
            static_cast<_AsyncOperationWithProgressPromise<_AsyncAttributes<TProgress, TResult, true>> *>(m_promise)->_InvokeProgressHandler(progressval);
        }

        bool await_ready()
        {
            return true;
        }

        void await_suspend(std::experimental::coroutine_handle<>)
        {
        }

        await_progress_reporter<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>, TProgress> await_resume()
        {
            return *this;
        }

    private:
        Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>* m_promise;
    };

    //
    // await on get_progress_reporter to get a handle to the await_progress_reporter 
    // Applications can use await_progress_reporter::report_progress for progress reporting.
    // The await will obtain a handle to the coroutine s promise (which is the _AsyncActionWithProgressPromise or _AsyncOperationWithProgressPromise  
    // and can invoke the corresponding progress handler
    // Example:
    // auto pr = co_await get_progress_reporter<double>();
    // pr.report_progress(98.0);
    //
    struct get_progress_reporter 
    {
    };

    template<typename _Attributes>
    struct _coroutine_promise_base
    {
        typename _Attributes::_AsyncPromiseType* result;

        _coroutine_promise_base()
        {
            result = new typename _Attributes::_AsyncPromiseType();
        }

        std::experimental::suspend_never initial_suspend() const
        {
            return {};
        }

        std::experimental::suspend_never final_suspend() const
        {
            return {};
        }

        typename _Attributes::_AsyncBaseType* get_return_object()
        {
            return result;
        }

        void set_exception(const std::exception_ptr &eptr)
        {
            try
            {
                if (eptr)
                {
                    std::rethrow_exception(eptr);
                }
            }
            catch (Platform::Exception* ex)
            {
                result->_SetError(ex);
            }
            catch (...)
            {
                Platform::Exception* ex = ref new Platform::Exception(E_FAIL);
                result->_SetError(ex);
            }
        }
    };

    template<typename _Attributes>
    struct _coroutine_promise_void :_coroutine_promise_base<_Attributes>
    {
        void return_void()
        {
            result->_InvokeCompletion();
        }
    };

    template<typename _Attributes>
    struct _coroutine_promise_void_with_progress : _coroutine_promise_void<_Attributes>
    {
        await_progress_reporter<typename _Attributes::_AsyncBaseType, typename _Attributes::_ProgressType> await_transform(get_progress_reporter)
        {
            return{ result };
        }

        template <typename _Uty>
        _Uty && await_transform(_Uty &&_Whatever)
        {
            return _STD forward<_Uty>(_Whatever);
        }
    };

    template<typename _Attributes>
    struct _coroutine_promise_value :_coroutine_promise_base<_Attributes>
    {
        void return_value(const typename _Attributes::_ReturnType &_Val)
        {
            result->_InvokeCompletion(_Val);
        }
    };

    template<typename _Attributes>
    struct _coroutine_promise_value_with_progress : _coroutine_promise_value<_Attributes>
    {
        await_progress_reporter<typename _Attributes::_AsyncBaseType, typename _Attributes::_ProgressType> await_transform(get_progress_reporter)
        {
            return{ result };
        }

        template <typename _Uty>
        _Uty && await_transform(_Uty &&_Whatever)
        {
            return _STD forward<_Uty>(_Whatever);
        }
    };
}

template <typename T>
auto operator * (concurrency::cancellation_token ct, T* async)
{
	ct.register_callback([=]()
    {
        async->Cancel();
    });
    return async;
}

namespace std
{
    namespace experimental
    {
        // Specialization of coroutine_traits for functions with IAsyncAction return type.
        template <typename... _TArgs>
        struct coroutine_traits<Windows::Foundation::IAsyncAction*, _TArgs...>
        {
            using promise_type = typename winrt_await_adapters::_coroutine_promise_void<winrt_await_adapters::_AsyncAttributes<void, void, false>>;
        };

        // Specialization of coroutine_traits for functions with IAsyncActionWithProgress return type.
        template <typename TProgress, typename... _TArgs>
        struct std::experimental::coroutine_traits<Windows::Foundation::IAsyncActionWithProgress<TProgress>*, _TArgs...>
        {
            using promise_type = typename winrt_await_adapters::_coroutine_promise_void_with_progress<winrt_await_adapters::_AsyncAttributes<TProgress, void, true>>;
        };

        // Specialization of coroutine_traits for functions with IAsyncOperationWithProgress return type.
        template <typename TProgress, typename TResult, typename... _TArgs>
        struct std::experimental::coroutine_traits<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>*, _TArgs...>
        {
            using promise_type = typename winrt_await_adapters::_coroutine_promise_value_with_progress<winrt_await_adapters::_AsyncAttributes<TProgress, TResult, true>>;
        };

        // Specialization of coroutine_traits for functions with IAsyncOperation return type.
        template <typename TResult, typename... _TArgs>
        struct std::experimental::coroutine_traits<Windows::Foundation::IAsyncOperation<TResult>*, _TArgs...>
        {
            using promise_type = typename winrt_await_adapters::_coroutine_promise_value<winrt_await_adapters::_AsyncAttributes<void, TResult, false>>;
        };
    }
}