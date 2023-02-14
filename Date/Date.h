#pragma once
namespace rut::PL::Date 
{
	/// <summary>
	/// ƒата.
	/// </summary>
	struct Date
	{
		/// <summary>
		/// ѕеречисление мес¤цев.
		/// </summary>
		enum class Month
		{
			/// <summary>
			/// ќшибка.
			/// </summary>
			None = 0,

			/// <summary>
			/// январь.
			/// </summary>
			January,

			/// <summary>
			/// ‘евраль.
			/// </summary>
			February,

			/// <summary>
			/// ћарт.
			/// </summary>
			March,

			/// <summary>
			/// јпрель.
			/// </summary>
			April,

			/// <summary>
			/// ћай.
			/// </summary>
			May,

			/// <summary>
			/// »юнь.
			/// </summary>
			June,

			/// <summary>
			/// »юль.
			/// </summary>
			July,

			/// <summary>
			/// јвгуст.
			/// </summary>
			August,

			/// <summary>
			/// —ент¤брь.
			/// </summary>
			September,

			/// <summary>
			/// ќкт¤брь.
			/// </summary>
			October,

			/// <summary>
			/// Ќо¤брь.
			/// </summary>
			November,

			/// <summary>
			/// ƒекабрь.
			/// </summary>
			December
		};

		/// <summary>
		/// ѕеречисление ƒень недели.
		/// </summary>
		enum class DayOfWeek
		{
			/// <summary>
			/// ќшибка.
			/// </summary>
			None = 0,

			/// <summary>
			/// ѕонедельник.
			/// </summary>
			Monday,

			/// <summary>
			/// ¬торник.
			/// </summary>
			Tuesday,

			/// <summary>
			/// —реда.
			/// </summary>
			Wednesday,

			/// <summary>
			/// „етверг.
			/// </summary>
			Thursday,

			/// <summary>
			/// ѕ¤тница.
			/// </summary>
			Friday,

			/// <summary>
			/// —уббота.
			/// </summary>
			Saturday,

			/// <summary>
			/// ¬оскресенье.
			/// </summary>
			Sunday
		};

		/// <summary>
		/// √од.
		/// </summary>
		int year;

		/// <summary>
		/// ћес¤ц.
		/// </summary>
		Month month;

		/// <summary>
		/// ƒень недели.
		/// </summary>
		DayOfWeek dayOfWeek;

		/// <summary>
		/// ƒень.
		/// </summary>
		int day;

		/// <summary>
		/// »нициализирует экземпл¤р <see cref= "Date" />
		/// </summary>
		/// <param name="year">√од.</param>
		/// <param name="month"> ћес¤ц.</param>
		/// <param name="dayOfWeek"> ƒень недели.</param>
		/// <param name="day"> ƒень.</param>
		Date(const int year, const Month month, 
			const DayOfWeek dayOfWeek, const int day);

		bool IsLeapYear() const;

		bool IsDayValid() const;
	};
};
