#include <iostream>

#define day1 std::cout << "Monday" << std::endl
#define day2 std::cout << "Tuesday" << std::endl
#define day3 std::cout << "Wednesday" << std::endl
#define day4 std::cout << "Thursday" << std::endl
#define day5 std::cout << "Friday" << std::endl
#define day6 std::cout << "Saturday" << std::endl
#define day7 std::cout << "Sunday" << std::endl

#define DAYOFTHEWEEK(X) (day##X)

// Мне этот вариант больше нравится, он меньше)
#define STR(text) #text
#define PRINT(text) std::cout << STR(text) << std::endl;

int main()
{
	int dayOfWeek;

	std::cout << "Enter the number of the day of the week: ";
	std::cin >> dayOfWeek;
	
	switch (dayOfWeek)
	{
	case 1: PRINT(Monday); break;
	case 2: PRINT(Tuesday); break;
	case 3: PRINT(Wednesday); break;
	case 4: PRINT(Thursday); break;
	case 5: DAYOFTHEWEEK(5); break;
	case 6: DAYOFTHEWEEK(6); break;
	case 7: DAYOFTHEWEEK(7); break;
	default:
		std::cerr << "Error! There are only seven days of the week. " << std::endl;
		break;
	}

	return 0;
}
