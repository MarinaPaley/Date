#pragma once
namespace rut::PL::Date 
{
	/// <summary>
	/// ����.
	/// </summary>
	struct Date
	{
		/// <summary>
		/// ������������ �������.
		/// </summary>
		enum class Month
		{
			/// <summary>
			/// ������.
			/// </summary>
			None = 0,

			/// <summary>
			/// ������.
			/// </summary>
			January,

			/// <summary>
			/// �������.
			/// </summary>
			February,

			/// <summary>
			/// ����.
			/// </summary>
			March,

			/// <summary>
			/// ������.
			/// </summary>
			April,

			/// <summary>
			/// ���.
			/// </summary>
			May,


			June,
			July,
			August,
			September,
			October,
			November,
			December
		};

		enum class DayOfWeek
		{
			None = 0,
			Monday,
			Tuesday,
			Wednesday,
			Thursday,
			Friday,
			Saturday,
			Sunday
		};

		/// <summary>
		/// ���.
		/// </summary>
		int year;

		/// <summary>
		/// �����.
		/// </summary>
		Month month;

		/// <summary>
		/// ���� ������.
		/// </summary>
		DayOfWeek dayOfWeek;

		/// <summary>
		/// ����.
		/// </summary>
		int day;

		/// <summary>
		/// �������������� ��������� <see cref= "Date" />
		/// </summary>
		/// <param name="year">���.</param>
		/// <param name="month"> �����.</param>
		/// <param name="dayOfWeek"> ���� ������.</param>
		/// <param name="day"> ����.</param>
		Date(const int year, const Month month, 
			const DayOfWeek dayOfWeek, const int day);
	};
};
