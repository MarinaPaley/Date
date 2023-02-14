#include <stdexcept>
#include "Date.h"

rut::PL::Date::Date::Date(
	const int year, const Month month, 
	const DayOfWeek dayOfWeek, const int day) 
	: year(year), month(month),
	  dayOfWeek(dayOfWeek), day(day)
{
	if (!this->IsDayValid())
	{
		throw std::logic_error("Неправильный день!");
	}
}

bool rut::PL::Date::Date::IsLeapYear() const
{
	return (this->year % 4 == 0 
		&& this->year % 100 != 0
		 || this->year % 400 == 0);
}

bool rut::PL::Date::Date::IsDayValid() const
{
	if (this->day < 0)
	{
		return false;
	}

	switch (this->month)
	{
	case Date::Month::February:
	{
		if (this->IsLeapYear() && (this->day > 29)
		|| (this->day > 28))
	{
		return false;
	}
		return true; 
	}
	case Date::Month::April:
	case Date::Month::June:
	case Date::Month::September:
	case Date::Month::November:
	{
		return (this->day <= 30);
	}
	default:
	{
		return (this->day <= 31);
	}
	}
}
