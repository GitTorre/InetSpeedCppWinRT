// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "internal\Windows.Foundation.Collections.3.h"
#include "internal\Windows.Foundation.3.h"
#include "internal\Windows.Globalization.DateTimeFormatting.3.h"
#include "Windows.Globalization.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Globalization::DateTimeFormatting::IDateTimeFormatter> : produce_base<D, Windows::Globalization::DateTimeFormatting::IDateTimeFormatter>
{
    HRESULT __stdcall get_Languages(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Languages());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GeographicRegion(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().GeographicRegion());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Calendar(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Calendar());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Clock(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Clock());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumeralSystem(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().NumeralSystem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NumeralSystem(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            shim().NumeralSystem(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Patterns(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(shim().Patterns());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Template(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().Template());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Format(abi_arg_in<Windows::Foundation::DateTime> value, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(shim().Format(*reinterpret_cast<const Windows::Foundation::DateTime *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IncludeYear(Windows::Globalization::DateTimeFormatting::YearFormat * value) noexcept override
    {
        try
        {
            *value = detach(shim().IncludeYear());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IncludeMonth(Windows::Globalization::DateTimeFormatting::MonthFormat * value) noexcept override
    {
        try
        {
            *value = detach(shim().IncludeMonth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IncludeDayOfWeek(Windows::Globalization::DateTimeFormatting::DayOfWeekFormat * value) noexcept override
    {
        try
        {
            *value = detach(shim().IncludeDayOfWeek());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IncludeDay(Windows::Globalization::DateTimeFormatting::DayFormat * value) noexcept override
    {
        try
        {
            *value = detach(shim().IncludeDay());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IncludeHour(Windows::Globalization::DateTimeFormatting::HourFormat * value) noexcept override
    {
        try
        {
            *value = detach(shim().IncludeHour());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IncludeMinute(Windows::Globalization::DateTimeFormatting::MinuteFormat * value) noexcept override
    {
        try
        {
            *value = detach(shim().IncludeMinute());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IncludeSecond(Windows::Globalization::DateTimeFormatting::SecondFormat * value) noexcept override
    {
        try
        {
            *value = detach(shim().IncludeSecond());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResolvedLanguage(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().ResolvedLanguage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResolvedGeographicRegion(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(shim().ResolvedGeographicRegion());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::DateTimeFormatting::IDateTimeFormatter2> : produce_base<D, Windows::Globalization::DateTimeFormatting::IDateTimeFormatter2>
{
    HRESULT __stdcall abi_FormatUsingTimeZone(abi_arg_in<Windows::Foundation::DateTime> datetime, abi_arg_in<hstring> timeZoneId, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(shim().Format(*reinterpret_cast<const Windows::Foundation::DateTime *>(&datetime), *reinterpret_cast<const hstring *>(&timeZoneId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::DateTimeFormatting::IDateTimeFormatterFactory> : produce_base<D, Windows::Globalization::DateTimeFormatting::IDateTimeFormatterFactory>
{
    HRESULT __stdcall abi_CreateDateTimeFormatter(abi_arg_in<hstring> formatTemplate, abi_arg_out<Windows::Globalization::DateTimeFormatting::IDateTimeFormatter> result) noexcept override
    {
        try
        {
            *result = detach(shim().CreateDateTimeFormatter(*reinterpret_cast<const hstring *>(&formatTemplate)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateDateTimeFormatterLanguages(abi_arg_in<hstring> formatTemplate, abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> languages, abi_arg_out<Windows::Globalization::DateTimeFormatting::IDateTimeFormatter> result) noexcept override
    {
        try
        {
            *result = detach(shim().CreateDateTimeFormatterLanguages(*reinterpret_cast<const hstring *>(&formatTemplate), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&languages)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateDateTimeFormatterContext(abi_arg_in<hstring> formatTemplate, abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> languages, abi_arg_in<hstring> geographicRegion, abi_arg_in<hstring> calendar, abi_arg_in<hstring> clock, abi_arg_out<Windows::Globalization::DateTimeFormatting::IDateTimeFormatter> result) noexcept override
    {
        try
        {
            *result = detach(shim().CreateDateTimeFormatterContext(*reinterpret_cast<const hstring *>(&formatTemplate), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&languages), *reinterpret_cast<const hstring *>(&geographicRegion), *reinterpret_cast<const hstring *>(&calendar), *reinterpret_cast<const hstring *>(&clock)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateDateTimeFormatterDate(Windows::Globalization::DateTimeFormatting::YearFormat yearFormat, Windows::Globalization::DateTimeFormatting::MonthFormat monthFormat, Windows::Globalization::DateTimeFormatting::DayFormat dayFormat, Windows::Globalization::DateTimeFormatting::DayOfWeekFormat dayOfWeekFormat, abi_arg_out<Windows::Globalization::DateTimeFormatting::IDateTimeFormatter> result) noexcept override
    {
        try
        {
            *result = detach(shim().CreateDateTimeFormatterDate(yearFormat, monthFormat, dayFormat, dayOfWeekFormat));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateDateTimeFormatterTime(Windows::Globalization::DateTimeFormatting::HourFormat hourFormat, Windows::Globalization::DateTimeFormatting::MinuteFormat minuteFormat, Windows::Globalization::DateTimeFormatting::SecondFormat secondFormat, abi_arg_out<Windows::Globalization::DateTimeFormatting::IDateTimeFormatter> result) noexcept override
    {
        try
        {
            *result = detach(shim().CreateDateTimeFormatterTime(hourFormat, minuteFormat, secondFormat));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateDateTimeFormatterDateTimeLanguages(Windows::Globalization::DateTimeFormatting::YearFormat yearFormat, Windows::Globalization::DateTimeFormatting::MonthFormat monthFormat, Windows::Globalization::DateTimeFormatting::DayFormat dayFormat, Windows::Globalization::DateTimeFormatting::DayOfWeekFormat dayOfWeekFormat, Windows::Globalization::DateTimeFormatting::HourFormat hourFormat, Windows::Globalization::DateTimeFormatting::MinuteFormat minuteFormat, Windows::Globalization::DateTimeFormatting::SecondFormat secondFormat, abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> languages, abi_arg_out<Windows::Globalization::DateTimeFormatting::IDateTimeFormatter> result) noexcept override
    {
        try
        {
            *result = detach(shim().CreateDateTimeFormatterDateTimeLanguages(yearFormat, monthFormat, dayFormat, dayOfWeekFormat, hourFormat, minuteFormat, secondFormat, *reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&languages)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateDateTimeFormatterDateTimeContext(Windows::Globalization::DateTimeFormatting::YearFormat yearFormat, Windows::Globalization::DateTimeFormatting::MonthFormat monthFormat, Windows::Globalization::DateTimeFormatting::DayFormat dayFormat, Windows::Globalization::DateTimeFormatting::DayOfWeekFormat dayOfWeekFormat, Windows::Globalization::DateTimeFormatting::HourFormat hourFormat, Windows::Globalization::DateTimeFormatting::MinuteFormat minuteFormat, Windows::Globalization::DateTimeFormatting::SecondFormat secondFormat, abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> languages, abi_arg_in<hstring> geographicRegion, abi_arg_in<hstring> calendar, abi_arg_in<hstring> clock, abi_arg_out<Windows::Globalization::DateTimeFormatting::IDateTimeFormatter> result) noexcept override
    {
        try
        {
            *result = detach(shim().CreateDateTimeFormatterDateTimeContext(yearFormat, monthFormat, dayFormat, dayOfWeekFormat, hourFormat, minuteFormat, secondFormat, *reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&languages), *reinterpret_cast<const hstring *>(&geographicRegion), *reinterpret_cast<const hstring *>(&calendar), *reinterpret_cast<const hstring *>(&clock)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::DateTimeFormatting::IDateTimeFormatterStatics> : produce_base<D, Windows::Globalization::DateTimeFormatting::IDateTimeFormatterStatics>
{
    HRESULT __stdcall get_LongDate(abi_arg_out<Windows::Globalization::DateTimeFormatting::IDateTimeFormatter> value) noexcept override
    {
        try
        {
            *value = detach(shim().LongDate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LongTime(abi_arg_out<Windows::Globalization::DateTimeFormatting::IDateTimeFormatter> value) noexcept override
    {
        try
        {
            *value = detach(shim().LongTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShortDate(abi_arg_out<Windows::Globalization::DateTimeFormatting::IDateTimeFormatter> value) noexcept override
    {
        try
        {
            *value = detach(shim().ShortDate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShortTime(abi_arg_out<Windows::Globalization::DateTimeFormatting::IDateTimeFormatter> value) noexcept override
    {
        try
        {
            *value = detach(shim().ShortTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Globalization::DateTimeFormatting {

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IDateTimeFormatter<D>::Languages() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(shim()->get_Languages(put(value)));
    return value;
}

template <typename D> hstring impl_IDateTimeFormatter<D>::GeographicRegion() const
{
    hstring value;
    check_hresult(shim()->get_GeographicRegion(put(value)));
    return value;
}

template <typename D> hstring impl_IDateTimeFormatter<D>::Calendar() const
{
    hstring value;
    check_hresult(shim()->get_Calendar(put(value)));
    return value;
}

template <typename D> hstring impl_IDateTimeFormatter<D>::Clock() const
{
    hstring value;
    check_hresult(shim()->get_Clock(put(value)));
    return value;
}

template <typename D> hstring impl_IDateTimeFormatter<D>::NumeralSystem() const
{
    hstring value;
    check_hresult(shim()->get_NumeralSystem(put(value)));
    return value;
}

template <typename D> void impl_IDateTimeFormatter<D>::NumeralSystem(hstring_ref value) const
{
    check_hresult(shim()->put_NumeralSystem(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IDateTimeFormatter<D>::Patterns() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(shim()->get_Patterns(put(value)));
    return value;
}

template <typename D> hstring impl_IDateTimeFormatter<D>::Template() const
{
    hstring value;
    check_hresult(shim()->get_Template(put(value)));
    return value;
}

template <typename D> hstring impl_IDateTimeFormatter<D>::Format(const Windows::Foundation::DateTime & value) const
{
    hstring result;
    check_hresult(shim()->abi_Format(get(value), put(result)));
    return result;
}

template <typename D> Windows::Globalization::DateTimeFormatting::YearFormat impl_IDateTimeFormatter<D>::IncludeYear() const
{
    Windows::Globalization::DateTimeFormatting::YearFormat value {};
    check_hresult(shim()->get_IncludeYear(&value));
    return value;
}

template <typename D> Windows::Globalization::DateTimeFormatting::MonthFormat impl_IDateTimeFormatter<D>::IncludeMonth() const
{
    Windows::Globalization::DateTimeFormatting::MonthFormat value {};
    check_hresult(shim()->get_IncludeMonth(&value));
    return value;
}

template <typename D> Windows::Globalization::DateTimeFormatting::DayOfWeekFormat impl_IDateTimeFormatter<D>::IncludeDayOfWeek() const
{
    Windows::Globalization::DateTimeFormatting::DayOfWeekFormat value {};
    check_hresult(shim()->get_IncludeDayOfWeek(&value));
    return value;
}

template <typename D> Windows::Globalization::DateTimeFormatting::DayFormat impl_IDateTimeFormatter<D>::IncludeDay() const
{
    Windows::Globalization::DateTimeFormatting::DayFormat value {};
    check_hresult(shim()->get_IncludeDay(&value));
    return value;
}

template <typename D> Windows::Globalization::DateTimeFormatting::HourFormat impl_IDateTimeFormatter<D>::IncludeHour() const
{
    Windows::Globalization::DateTimeFormatting::HourFormat value {};
    check_hresult(shim()->get_IncludeHour(&value));
    return value;
}

template <typename D> Windows::Globalization::DateTimeFormatting::MinuteFormat impl_IDateTimeFormatter<D>::IncludeMinute() const
{
    Windows::Globalization::DateTimeFormatting::MinuteFormat value {};
    check_hresult(shim()->get_IncludeMinute(&value));
    return value;
}

template <typename D> Windows::Globalization::DateTimeFormatting::SecondFormat impl_IDateTimeFormatter<D>::IncludeSecond() const
{
    Windows::Globalization::DateTimeFormatting::SecondFormat value {};
    check_hresult(shim()->get_IncludeSecond(&value));
    return value;
}

template <typename D> hstring impl_IDateTimeFormatter<D>::ResolvedLanguage() const
{
    hstring value;
    check_hresult(shim()->get_ResolvedLanguage(put(value)));
    return value;
}

template <typename D> hstring impl_IDateTimeFormatter<D>::ResolvedGeographicRegion() const
{
    hstring value;
    check_hresult(shim()->get_ResolvedGeographicRegion(put(value)));
    return value;
}

template <typename D> Windows::Globalization::DateTimeFormatting::DateTimeFormatter impl_IDateTimeFormatterFactory<D>::CreateDateTimeFormatter(hstring_ref formatTemplate) const
{
    Windows::Globalization::DateTimeFormatting::DateTimeFormatter result { nullptr };
    check_hresult(shim()->abi_CreateDateTimeFormatter(get(formatTemplate), put(result)));
    return result;
}

template <typename D> Windows::Globalization::DateTimeFormatting::DateTimeFormatter impl_IDateTimeFormatterFactory<D>::CreateDateTimeFormatterLanguages(hstring_ref formatTemplate, const Windows::Foundation::Collections::IIterable<hstring> & languages) const
{
    Windows::Globalization::DateTimeFormatting::DateTimeFormatter result { nullptr };
    check_hresult(shim()->abi_CreateDateTimeFormatterLanguages(get(formatTemplate), get(languages), put(result)));
    return result;
}

template <typename D> Windows::Globalization::DateTimeFormatting::DateTimeFormatter impl_IDateTimeFormatterFactory<D>::CreateDateTimeFormatterContext(hstring_ref formatTemplate, const Windows::Foundation::Collections::IIterable<hstring> & languages, hstring_ref geographicRegion, hstring_ref calendar, hstring_ref clock) const
{
    Windows::Globalization::DateTimeFormatting::DateTimeFormatter result { nullptr };
    check_hresult(shim()->abi_CreateDateTimeFormatterContext(get(formatTemplate), get(languages), get(geographicRegion), get(calendar), get(clock), put(result)));
    return result;
}

template <typename D> Windows::Globalization::DateTimeFormatting::DateTimeFormatter impl_IDateTimeFormatterFactory<D>::CreateDateTimeFormatterDate(Windows::Globalization::DateTimeFormatting::YearFormat yearFormat, Windows::Globalization::DateTimeFormatting::MonthFormat monthFormat, Windows::Globalization::DateTimeFormatting::DayFormat dayFormat, Windows::Globalization::DateTimeFormatting::DayOfWeekFormat dayOfWeekFormat) const
{
    Windows::Globalization::DateTimeFormatting::DateTimeFormatter result { nullptr };
    check_hresult(shim()->abi_CreateDateTimeFormatterDate(yearFormat, monthFormat, dayFormat, dayOfWeekFormat, put(result)));
    return result;
}

template <typename D> Windows::Globalization::DateTimeFormatting::DateTimeFormatter impl_IDateTimeFormatterFactory<D>::CreateDateTimeFormatterTime(Windows::Globalization::DateTimeFormatting::HourFormat hourFormat, Windows::Globalization::DateTimeFormatting::MinuteFormat minuteFormat, Windows::Globalization::DateTimeFormatting::SecondFormat secondFormat) const
{
    Windows::Globalization::DateTimeFormatting::DateTimeFormatter result { nullptr };
    check_hresult(shim()->abi_CreateDateTimeFormatterTime(hourFormat, minuteFormat, secondFormat, put(result)));
    return result;
}

template <typename D> Windows::Globalization::DateTimeFormatting::DateTimeFormatter impl_IDateTimeFormatterFactory<D>::CreateDateTimeFormatterDateTimeLanguages(Windows::Globalization::DateTimeFormatting::YearFormat yearFormat, Windows::Globalization::DateTimeFormatting::MonthFormat monthFormat, Windows::Globalization::DateTimeFormatting::DayFormat dayFormat, Windows::Globalization::DateTimeFormatting::DayOfWeekFormat dayOfWeekFormat, Windows::Globalization::DateTimeFormatting::HourFormat hourFormat, Windows::Globalization::DateTimeFormatting::MinuteFormat minuteFormat, Windows::Globalization::DateTimeFormatting::SecondFormat secondFormat, const Windows::Foundation::Collections::IIterable<hstring> & languages) const
{
    Windows::Globalization::DateTimeFormatting::DateTimeFormatter result { nullptr };
    check_hresult(shim()->abi_CreateDateTimeFormatterDateTimeLanguages(yearFormat, monthFormat, dayFormat, dayOfWeekFormat, hourFormat, minuteFormat, secondFormat, get(languages), put(result)));
    return result;
}

template <typename D> Windows::Globalization::DateTimeFormatting::DateTimeFormatter impl_IDateTimeFormatterFactory<D>::CreateDateTimeFormatterDateTimeContext(Windows::Globalization::DateTimeFormatting::YearFormat yearFormat, Windows::Globalization::DateTimeFormatting::MonthFormat monthFormat, Windows::Globalization::DateTimeFormatting::DayFormat dayFormat, Windows::Globalization::DateTimeFormatting::DayOfWeekFormat dayOfWeekFormat, Windows::Globalization::DateTimeFormatting::HourFormat hourFormat, Windows::Globalization::DateTimeFormatting::MinuteFormat minuteFormat, Windows::Globalization::DateTimeFormatting::SecondFormat secondFormat, const Windows::Foundation::Collections::IIterable<hstring> & languages, hstring_ref geographicRegion, hstring_ref calendar, hstring_ref clock) const
{
    Windows::Globalization::DateTimeFormatting::DateTimeFormatter result { nullptr };
    check_hresult(shim()->abi_CreateDateTimeFormatterDateTimeContext(yearFormat, monthFormat, dayFormat, dayOfWeekFormat, hourFormat, minuteFormat, secondFormat, get(languages), get(geographicRegion), get(calendar), get(clock), put(result)));
    return result;
}

template <typename D> Windows::Globalization::DateTimeFormatting::DateTimeFormatter impl_IDateTimeFormatterStatics<D>::LongDate() const
{
    Windows::Globalization::DateTimeFormatting::DateTimeFormatter value { nullptr };
    check_hresult(shim()->get_LongDate(put(value)));
    return value;
}

template <typename D> Windows::Globalization::DateTimeFormatting::DateTimeFormatter impl_IDateTimeFormatterStatics<D>::LongTime() const
{
    Windows::Globalization::DateTimeFormatting::DateTimeFormatter value { nullptr };
    check_hresult(shim()->get_LongTime(put(value)));
    return value;
}

template <typename D> Windows::Globalization::DateTimeFormatting::DateTimeFormatter impl_IDateTimeFormatterStatics<D>::ShortDate() const
{
    Windows::Globalization::DateTimeFormatting::DateTimeFormatter value { nullptr };
    check_hresult(shim()->get_ShortDate(put(value)));
    return value;
}

template <typename D> Windows::Globalization::DateTimeFormatting::DateTimeFormatter impl_IDateTimeFormatterStatics<D>::ShortTime() const
{
    Windows::Globalization::DateTimeFormatting::DateTimeFormatter value { nullptr };
    check_hresult(shim()->get_ShortTime(put(value)));
    return value;
}

template <typename D> hstring impl_IDateTimeFormatter2<D>::Format(const Windows::Foundation::DateTime & datetime, hstring_ref timeZoneId) const
{
    hstring result;
    check_hresult(shim()->abi_FormatUsingTimeZone(get(datetime), get(timeZoneId), put(result)));
    return result;
}

inline DateTimeFormatter::DateTimeFormatter(hstring_ref formatTemplate) :
    DateTimeFormatter(get_activation_factory<DateTimeFormatter, IDateTimeFormatterFactory>().CreateDateTimeFormatter(formatTemplate))
{}

inline DateTimeFormatter::DateTimeFormatter(hstring_ref formatTemplate, const Windows::Foundation::Collections::IIterable<hstring> & languages) :
    DateTimeFormatter(get_activation_factory<DateTimeFormatter, IDateTimeFormatterFactory>().CreateDateTimeFormatterLanguages(formatTemplate, languages))
{}

inline DateTimeFormatter::DateTimeFormatter(hstring_ref formatTemplate, const Windows::Foundation::Collections::IIterable<hstring> & languages, hstring_ref geographicRegion, hstring_ref calendar, hstring_ref clock) :
    DateTimeFormatter(get_activation_factory<DateTimeFormatter, IDateTimeFormatterFactory>().CreateDateTimeFormatterContext(formatTemplate, languages, geographicRegion, calendar, clock))
{}

inline DateTimeFormatter::DateTimeFormatter(Windows::Globalization::DateTimeFormatting::YearFormat yearFormat, Windows::Globalization::DateTimeFormatting::MonthFormat monthFormat, Windows::Globalization::DateTimeFormatting::DayFormat dayFormat, Windows::Globalization::DateTimeFormatting::DayOfWeekFormat dayOfWeekFormat) :
    DateTimeFormatter(get_activation_factory<DateTimeFormatter, IDateTimeFormatterFactory>().CreateDateTimeFormatterDate(yearFormat, monthFormat, dayFormat, dayOfWeekFormat))
{}

inline DateTimeFormatter::DateTimeFormatter(Windows::Globalization::DateTimeFormatting::HourFormat hourFormat, Windows::Globalization::DateTimeFormatting::MinuteFormat minuteFormat, Windows::Globalization::DateTimeFormatting::SecondFormat secondFormat) :
    DateTimeFormatter(get_activation_factory<DateTimeFormatter, IDateTimeFormatterFactory>().CreateDateTimeFormatterTime(hourFormat, minuteFormat, secondFormat))
{}

inline DateTimeFormatter::DateTimeFormatter(Windows::Globalization::DateTimeFormatting::YearFormat yearFormat, Windows::Globalization::DateTimeFormatting::MonthFormat monthFormat, Windows::Globalization::DateTimeFormatting::DayFormat dayFormat, Windows::Globalization::DateTimeFormatting::DayOfWeekFormat dayOfWeekFormat, Windows::Globalization::DateTimeFormatting::HourFormat hourFormat, Windows::Globalization::DateTimeFormatting::MinuteFormat minuteFormat, Windows::Globalization::DateTimeFormatting::SecondFormat secondFormat, const Windows::Foundation::Collections::IIterable<hstring> & languages) :
    DateTimeFormatter(get_activation_factory<DateTimeFormatter, IDateTimeFormatterFactory>().CreateDateTimeFormatterDateTimeLanguages(yearFormat, monthFormat, dayFormat, dayOfWeekFormat, hourFormat, minuteFormat, secondFormat, languages))
{}

inline DateTimeFormatter::DateTimeFormatter(Windows::Globalization::DateTimeFormatting::YearFormat yearFormat, Windows::Globalization::DateTimeFormatting::MonthFormat monthFormat, Windows::Globalization::DateTimeFormatting::DayFormat dayFormat, Windows::Globalization::DateTimeFormatting::DayOfWeekFormat dayOfWeekFormat, Windows::Globalization::DateTimeFormatting::HourFormat hourFormat, Windows::Globalization::DateTimeFormatting::MinuteFormat minuteFormat, Windows::Globalization::DateTimeFormatting::SecondFormat secondFormat, const Windows::Foundation::Collections::IIterable<hstring> & languages, hstring_ref geographicRegion, hstring_ref calendar, hstring_ref clock) :
    DateTimeFormatter(get_activation_factory<DateTimeFormatter, IDateTimeFormatterFactory>().CreateDateTimeFormatterDateTimeContext(yearFormat, monthFormat, dayFormat, dayOfWeekFormat, hourFormat, minuteFormat, secondFormat, languages, geographicRegion, calendar, clock))
{}

inline Windows::Globalization::DateTimeFormatting::DateTimeFormatter DateTimeFormatter::LongDate()
{
    return get_activation_factory<DateTimeFormatter, IDateTimeFormatterStatics>().LongDate();
}

inline Windows::Globalization::DateTimeFormatting::DateTimeFormatter DateTimeFormatter::LongTime()
{
    return get_activation_factory<DateTimeFormatter, IDateTimeFormatterStatics>().LongTime();
}

inline Windows::Globalization::DateTimeFormatting::DateTimeFormatter DateTimeFormatter::ShortDate()
{
    return get_activation_factory<DateTimeFormatter, IDateTimeFormatterStatics>().ShortDate();
}

inline Windows::Globalization::DateTimeFormatting::DateTimeFormatter DateTimeFormatter::ShortTime()
{
    return get_activation_factory<DateTimeFormatter, IDateTimeFormatterStatics>().ShortTime();
}

}

}
