#include <iostream>

class Date
{
    private:
      int day;
      int month;
      int year;
    public:
      Date();
      Date(int, int, int);
      ~Date(){}
      void set_day(int);
      void set_month(int);
      void set_year(int);
      void show_date1();
      void show_date2();
      void compare(Date d1);
};

