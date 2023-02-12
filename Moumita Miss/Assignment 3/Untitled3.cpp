#include <iostream>
#include <stdlib.h>
#include<list>
using namespace std;

void final_remainder();
int convert_date_month(string month_name);
void pass_to_final_calender(int month_num,int date);

int year;string day;
struct remaindar{
    string title;
    string description;
    int date;
    string month;
};
    remaindar r;
    list<remaindar> mylist;

    void add_remainder(){

    cout<< "Reminder title: ";
    cin>> r.title;
    cout<< "Reminder description: ";
    cin>> r.description;
    cout<< "Enter Date: ";
    cin>> r.date;
    cout<< "Enter Month: ";
    cin>> r.month;
    mylist.push_back(r);

    }

 void update_remainder(){
        string str;
        cin>>str;
        string new_title; string new_des; int new_date; string new_month;
        for(list<remaindar>::iterator it = mylist.begin() ; it != mylist.end(); it++ ){
            if(it->title == str){
                cout<< "New Reminder title: ";
                cin>> new_title;
                it->title= new_title;

                cout<< "New Reminder description: ";
                cin>> new_des;
                it->description = new_des;
                cout<< "Enter New Date: ";
                cin>>new_date;
                it->date = new_date;
                cout<< "Enter New Month: ";
                cin>> new_month;
                it->month = new_month;

            }
        }
}

void display_remainder(){
        string str;
        cout<< "Enter a Month to display All Reminder: ";
        cin>>str;
        for(list<remaindar>::iterator it = mylist.begin() ; it != mylist.end(); it++ ){
            if(it->month == str){
                cout<< it->title<< endl;
                cout<< it->description<< endl;
                cout<< it->date<< endl;
                cout<< it->month<< endl;
            }
        }
}

void delete_remainder(){
        string str;
        cout<< "Enter a Reminder Title to delete: ";
        cin>>str;
        for(list<remaindar>::iterator it = mylist.begin() ; it != mylist.end(); it++ ){
            if(it->title == str){

                mylist.erase(it);
                break;
            }
        }
        final_remainder();
}

void final_remainder(){
        int date; string month_name;
        int month_num;
        for(list<remaindar>::iterator it = mylist.begin() ; it != mylist.end(); it++ ){
                date = it->date;
                month_name = it->month;
                month_num = convert_date_month(month_name);
                pass_to_final_calender(month_num, date);
        }

}
int convert_date_month(string month_name){
    if(month_name == "January"){
        return 0;
    }
    else if(month_name == "February"){
        return 1;
    }
    else if(month_name == "March"){
        return 2;
    }
    else if(month_name == "April"){
        return 3;
    }
    else if(month_name == "May"){
        return 4;
    }
    else if(month_name == "June"){
        return 5;
    }
    else if(month_name == "July"){
        return 6;
    }
    else if(month_name == "August"){
        return 7;
    }
    else if(month_name == "September"){
        return 8;
    }
    else if(month_name == "October"){
        return 9;
    }
    else if(month_name == "November"){
        return 10;
    }else if(month_name == "December"){
        return 11;
    }
    else{
        return 0;
    }
}

bool check_leap_year(int year){
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                return true;
            else
                return false;
        }
        else
            return true;
    }
    else
        return false;
}

void day_name(){
    cout<< "\n   Sun   Mon   Tue   Wed   Thu   Fri   Sat    "<< endl;
}
int get_first_day(string day){
    if(day=="Sunday" || day=="sunday"){
        return 0;
    }
    else if(day=="Monday" || day=="monday"){
        return 1;
    }
    else if(day=="Tuesday" || day=="tuesday"){
        return 2;
    }
    else if(day=="Wednesday" || day=="wednesday"){
        return 3;
    }
    else if(day=="Thursday" || day=="thursday"){
        return 4;
    }
    else if(day=="Friday" || day=="friday" ){
        return 5;
    }
    else{
        return 6;
    }

}
void display_calender(int year, string day){
    int days_in_month[12] = {31,28,31,30,31, 30, 31,31,30, 31, 30, 31};
    string months[12]= {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};


    if(check_leap_year(year)==true){
        days_in_month[1]=28+1;
    }
    int j, total_days;int k;
    int weekdays=0;
    weekdays = get_first_day(day);

    int **A= new int*[12] ;
    for (int i = 0; i < 12; i++) {
        A[i] = new int[31];
    }

    for (int i = 0; i < 12; i++){
        cout<< endl;
        cout<< "----------------------"<< months[i]<<"----------------------" << endl;
        day_name();

        for(k=1; k<=weekdays; k++){
            cout<<"      ";
        }

        total_days = days_in_month[i];
        for(j=1; j<=total_days; j++){
            if(j>9){

            A[i][j]=j;
            cout<<"    "<<A[i][j];

            }
            else{
                A[i][j]=j;
                cout<<"     "<<A[i][j];
            }
            weekdays++;
            if(weekdays>6){
                weekdays =0;
                cout<< endl;
            }
        }
        cout<< endl<< endl;
    }

    for (int i = 0; i < 12; i++) {
        delete[] A[i];
    }
    delete[] A;

}

void pass_to_final_calender(int month_num,int date){
     int days_in_month[12] = {31,28,31,30,31, 30, 31,31,30, 31, 30, 31};
    string months[12]= {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};


    if(check_leap_year(year)==true){
        days_in_month[1]=28+1;
    }
    int j, total_days;int k;
    int weekdays=0;
    weekdays = get_first_day(day);

    int **A= new int*[12] ;
    for (int i = 0; i < 12; i++) {
        A[i] = new int[31];
    }


        int rem_month=month_num;
        int rem_date= date;
        cout<<"Returned month no"<< rem_month<< endl;
        cout<<"Returned Date no"<< rem_date<< endl;

    for (int i = 0; i < 12; i++){
        cout<< endl;
        cout<< "----------------------"<< months[i]<<"----------------------" << endl;
        day_name();

        for(k=1; k<=weekdays; k++){
            cout<<"      ";
        }

        total_days = days_in_month[i];
        for(int r=1;r<=total_days;r++)
        {
            for(j=1; j<=total_days; j++){
            if(j>9){ // days more than 9
            if(A[r][j]==A[rem_month][rem_date]){
                A[r][j]=j;
                cout<<"   *"<<A[r][j];
            }else{
            A[r][j]=j;
                cout<<"    "<<A[r][j];
            }
            }
            else{ // days less than 10
                if(A[i][j]==A[rem_month][rem_date]){
                A[i][j]=j;
                cout<<"    *"<<A[i][j];
            }else{
                A[i][j]=j;
                cout<<"     "<<A[i][j];
            }
            }
        }
            weekdays++;
            if(weekdays>6){
                weekdays =0;
                cout<< endl;
            }
        }
        cout<< endl<< endl;
    }

    for (int i = 0; i < 12; i++) {
        delete[] A[i];
    }
    delete[] A;
}

void to_do(){
    cout<< "\nPress 1. To Add a Reminder."<< endl;
    cout<< "\nPress 2. To Update a Reminder."<< endl;
    cout<< "\nPress 3. To Display a Reminder."<< endl;
    cout<< "\nPress 4. To Delete a Reminder."<< endl;
    cout<< "\nPress 0. To Exit The Program."<< endl;
}
int main()
{

    cout<< "Year: ";
    cin>> year;

    cout<< "Starting day of the year: ";
    cin>> day;
    display_calender(year, day);

    to_do();
    char n;
    do{
    cin>> n;
    cin.ignore();
    switch(n){
        case '1':
            add_remainder();
            break;
         case '2':
            update_remainder();
            break;
        case '3':
            display_remainder();
            break;
        case '4':
            delete_remainder();
            break;
        case '0':
            exit(0);
            break;
    }
    }while(n!=0);

    return 0;
}
