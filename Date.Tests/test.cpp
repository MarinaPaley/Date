#include "pch.h"
#include "..\Date\Date.h"

using namespace rut::PL::Date;

TEST(IsLeapYearTest, Succees) 
{
  // arrange
	Date today{ 2020,
		Date::Month::February,
		Date::DayOfWeek::Tuesday,
		14 };

  // act
	auto actual = today.IsLeapYear();
	
  // assert
  EXPECT_TRUE(actual);
}

TEST(IsLeapYearTest, Fail)
{
	// arrange
	Date today{ 2023,
		Date::Month::February,
		Date::DayOfWeek::Tuesday,
		14 };

	// act
	auto actual = today.IsLeapYear();

	// assert
	EXPECT_FALSE(actual);
}

TEST(IsNotValidDate, ExpectedException)
{
	try
	{
		Date wrongDate{ 2023,
		Date::Month::February,
		Date::DayOfWeek::Tuesday,
			32 };
		FAIL() << "Expected std::logic_error";
	}
	catch (std::logic_error const& err) 
	{
		EXPECT_EQ(err.what(), std::string("Неправильный день!"));
	}
	catch (...) 
	{
		FAIL() << "Expected std::logic_error";
	}
}