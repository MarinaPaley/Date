#include <iostream>
#include "..\Date\Date.h"

using namespace std;
using namespace rut::PL::Date;
/// <summary>
/// Точка входа в программу.
/// </summary>
/// <returns> В случае успеха, возвращаем 0. </returns>
int main()
{
	setlocale(LC_ALL, "Rus");

	Date today{ 2023, 
		Date::Month::February, 
		Date::DayOfWeek::Tuesday, 
		14 };
	auto tomorrow = new Date{ 2023, 
		Date::Month::February,
		Date::DayOfWeek::Wednesday, 
		15 };
	cout << today.day << endl;
	cout << tomorrow->day << endl;

	try
	{
		Date wrongDate{ 2023,
		Date::Month::February,
		Date::DayOfWeek::Tuesday,
			32 };
		return 0;
	}
	catch (std::logic_error& error)
	{ 
		cerr << error.what();
		return 1;
	}
}