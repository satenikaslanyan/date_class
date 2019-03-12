#include "date.hpp"

int main()
{
    int month = 0;
    int day = 0;
    int year = 0;
    Date d(day, month, year);
    d.set_day(day);
    d.set_month(month);
    d.set_year(year);
    std::cout << "\nFirst date is: ";
    d.show_date1();
    Date d1(day, month, year);
    d1.set_day(day);
    d1.set_month(month);
    d1.set_year(year);
    std::cout<< "\nSecond date is: ";
    d1.show_date1();
    d1.compare(d);
    Date b;
    std::cout << "\nDefault date is: ";
    b.show_date2();
}


