#include <iostream>
#include "..\Date\Date.h"

using namespace std;
using namespace rut::PL::Date;
/// <summary>
/// ����� ����� � ���������.
/// </summary>
/// <returns> � ������ ������, ���������� 0. </returns>
int main()
{
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
	return 0;
}