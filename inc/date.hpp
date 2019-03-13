#include <iostream>
#include <sstream>

void is_number(std::string& s, bool& fl, int i);
void check_input(std::string& s, bool& fl);
int get_int(const int& a);

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

