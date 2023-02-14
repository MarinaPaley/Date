#pragma once
namespace rut::PL::Date 
{
	/// <summary>
	/// Дата.
	/// </summary>
	struct Date
	{
		/// <summary>
		/// Перечисление месяцев.
		/// </summary>
		enum class Month
		{
			/// <summary>
			/// Ошибка.
			/// </summary>
			None = 0,

			/// <summary>
			/// Январь.
			/// </summary>
			January,

			/// <summary>
			/// Февраль.
			/// </summary>
			February,

			/// <summary>
			/// Март.
			/// </summary>
			March,

			/// <summary>
			/// Апрель.
			/// </summary>
			April,

			/// <summary>
			/// Май.
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
		/// Год.
		/// </summary>
		int year;

		/// <summary>
		/// Месяц.
		/// </summary>
		Month month;

		/// <summary>
		/// День недели.
		/// </summary>
		DayOfWeek dayOfWeek;

		/// <summary>
		/// День.
		/// </summary>
		int day;

		/// <summary>
		/// Инициализирует экземпляр <see cref= "Date" />
		/// </summary>
		/// <param name="year">Год.</param>
		/// <param name="month"> Месяц.</param>
		/// <param name="dayOfWeek"> День недели.</param>
		/// <param name="day"> День.</param>
		Date(const int year, const Month month, 
			const DayOfWeek dayOfWeek, const int day);
	};
};
