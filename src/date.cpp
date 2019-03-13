#include "date.hpp"

Date::Date()
{
    month = 1;
    day = 1;
    year = 2000;
}

Date::Date(int Day, int Month, int Year)
{
	day = Day;
    month = Month;
	year = Year;
}

void Date::set_day(int day)
{
    bool fl = false;
    do {
	    std::cout << "\nPlease enter a day (between 1 - 31): ";
        fl = false;
        std::cin >> day;
        if ((day <= 0) || (day >= 32)) {
            std::cout << "Error, invalid day." << std::endl;
            fl = true;
        }
    } while(fl);
    this->day = day;
}

void Date::set_month(int month)
{
    bool fl = false;
    do {
        std::cout << "Please enter a month (between 1 - 12): ";
        fl = false;
        std::cin >> month;
        if ((month <= 0) || (month >= 13)) {
            std::cout << "Error, invalid month." << std::endl;
            fl = true;
        }
    } while (fl);
    this->month = month;
}

void Date::set_year(int year)
{
    bool fl = false;
    do {
	std::cout << "Please enter a year (between 0 - 2200): ";
        fl = false;
        std::cin >> year;
        if ((year < 0) || (year > 2200)) {
            std::cout << "Error, invalid year." << std::endl;
            fl = true;
        }
    } while (fl);
    this->year = year;
}

void Date::show_date1()
{
	std::cout << day << "/" << month << "/" << year << std::endl;
}

void Date::show_date2()
{
	std::string month_name[] = {"January", "February", "March",
		"April", "May", "June", "July",
		"August", "September", "October",
		"November", "December" };
	std::cout << day << "  " <<  month_name[month - 1] << "  " << year << std::endl;
}

void Date::compare(Date d1) {
    if (d1.day == day && d1.month == month && d1.year == year) {
        std::cout << "\nTwo dates are equal" << std::endl;
    } else if ((d1.year < year) || (d1.year == year && d1.month < month) ||
         (d1.year == year && d1.month == month && d1.day < day)) {
        std::cout << "\nFirst date is earlier than second date" << std::endl;
    } else {
        std::cout << "\nSecond date is earlier than first date" << std::endl;
    }
}


