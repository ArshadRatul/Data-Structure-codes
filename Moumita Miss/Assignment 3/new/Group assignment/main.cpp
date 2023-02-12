#include <iostream>
#include"print_calender.h"
#include"List.h"
using namespace std;
int main()

{
    int year;
    string day;
    cout<<"Enter the year: ";
    cin>>year;
    cout<<"Starting day of the year: ";
    cin>>day;
    calender(year);
    print_calender(day);
    delete_calender();
    print_calender(day);
    return 0;
}
