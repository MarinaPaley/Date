#include "Date.h"

rut::PL::Date::Date::Date(
	const int year, const Month month, 
	const DayOfWeek dayOfWeek, const int day) 
	: year(year), month(month),
	  dayOfWeek(dayOfWeek), day(day)
{
}
