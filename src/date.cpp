#include "date.hpp"

void is_number(std::string& s, bool& fl, int i)
{
     for (; i < s.size(); ++i) {
         if(s[i] < '0' || s[i] > '9') {
             std::cout << "Error, invalid input" << std::endl;
             fl = true;
             break;
         }
     }
}

//This function is for checking input
void check_input(std::string& s, bool& fl)
{
    if (s.size() == 0) {
        std::cout << "Error, invalid input" << std::endl;
        fl = true;
    } else if (s[0] == '-') {
        is_number(s, fl, 1);
    } else {
        is_number(s, fl, 0);
    }
}

//This function is for input
int get_int(const int& a)
{
    bool fl = false;
    int result = 0;
    std::string s("");
    do {
        if (0 == a)  {
            std::cout << "\nPlease enter a day (between 1 - 31): ";
        } else if (1 == a) {
            std::cout << "\nPlease enter a month (between 1 - 12): ";
        } else if (2 == a) {
	         std::cout << "Please enter a year (between 0 - 2200): ";
        }
        getline(std::cin, s);
        fl = false;
        check_input(s, fl);
    } while(fl);
    std::stringstream str_int(s);
    str_int >> result;
    return result;
}


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
        fl = false;
        day = get_int(0);
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
        fl = false;
        month = get_int(1);
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
        fl = false;
        year = get_int(2);
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


