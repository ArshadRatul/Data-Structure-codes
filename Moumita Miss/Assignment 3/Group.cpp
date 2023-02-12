#include <iostream>
#include<list>
#include<iterator>
using namespace std;
struct Reminder//declaring a reminder type
{
    string title,description,mont;
    int dat;
};

struct Month//declaring a month type
{
    string month;
    list<int> dates;
};

list<Reminder> reminder;
Reminder r;
void add_remainder()
{
    cout<< "\tEnter reminder title: ";
    cin>>r.title;
    cout<< "\tEnter reminder description: ";
    cin>>r.description;;
    cout<< "\tEnter Date: ";
    cin>> r.dat;
    cout<< "\tEnter Month: ";
    cin>> r.mont;
    reminder.push_back(r);

}

list<Month> months(12);
list<Month>::iterator m_it=months.begin();
bool leap_year(int year)
{
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
void push_months(string a,int n)
{
    m_it->month=a;
    for(int i=1;i<=n;i++)
    {
        m_it->dates.push_back(i);
    }
    m_it++;
}
int check_day(string day)
{
    if(day=="Sunday"||day=="sunday"||day=="SUNDAY"){return 0;}
    else if(day=="Monday"||day=="monday"||day=="MONDAY"){return 1;}
    else if(day=="Tuesday"||day=="tuesday"||day=="TUESDAY"){return 2;}
    else if(day=="Wednesday"||day=="wednesday"||day=="WEDNESDAY"){return 3;}
    else if(day=="Thursday"||day=="thursday"||day=="THURSDAY"){return 4;}
    else if(day=="Friday"||day=="friday"||day=="FRIDAY"){return 5;}
    else if(day=="Saturday"||day=="saturday"||day=="SATURDAY"){return 6;}
}
void calender(int y)
{
    string arr[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    //counting the days of the month and passing the month and no.of days to add
    for(int i=0;i<12;i++)
    {
        if(i<=6)
        {
            if(i==1)
            {
                if(leap_year(y)==true){push_months(arr[i],29);}
                else{push_months(arr[i],28);}
                continue;
            }
            if(i%2==0)
            {
                push_months(arr[i],31);
            }
            else{push_months(arr[i],30);}
        }
        else
        {
            if(i%2!=0)
            {
                push_months(arr[i],31);
            }
            else{push_months(arr[i],30);}
        }
    }
}
 void update_remainder(){
    string str;
    cout<<"\tEnter the title you want to update: ";
    cin>>str;
    string new_title; string new_des; int new_date; string new_month;
    for(list<Reminder>::iterator it = reminder.begin() ; it !=reminder.end(); it++ )
    {
        if(it->title == str)
        {
            cout<< "\tNew Reminder title: ";
            cin>>new_title;
            it->title= new_title;

            cout<< "\tNew Reminder description: ";
            cin>>new_des;
            it->description = new_des;
            cout<< "\tEnter New Date: ";
            cin>>new_date;
            it->dat = new_date;
            cout<< "\tEnter New Month: ";
            cin>> new_month;
            it->mont = new_month;

        }
        cout<<endl;
    }
}
void display_remainder(){
        string str;
        cout<< "\tEnter a month to display all reminder of that month: ";
        cin>>str;
        for(list<Reminder>::iterator it = reminder.begin() ; it != reminder.end(); it++ ){
            if(it->mont == str){
                cout<<it->dat<<" "<<it->mont<<"\n";
                cout<<"Title: "<< it->title<< endl;
                cout<<"Description: " <<it->description<< endl<<endl;
            }
        }
}
void delete_remainder(){
        string str;
        cout<< "\tEnter a Reminder Title to delete: ";
        cin>>str;
        for(list<Reminder>::iterator it = reminder.begin() ; it != reminder.end(); it++ ){
            if(it->title == str){

                reminder.erase(it);
                break;
            }
        }
}
void delete_all_remainder()
{
    for(list<Reminder>::iterator it=reminder.begin();it!=reminder.end();it++)
    {
        reminder.erase(it);
    }
}
void delete_calender()
{
    for(list<Month>::iterator it=months.begin();it!=months.end();it++)
    {
        months.erase(it);
    }
}

void print_cal(string d)
{
    int c=check_day(d);
    for(list<Month>::iterator it2=months.begin();it2!=months.end();it2++)
    {
        cout<<"\t-----------------------"<<it2->month<<"------------------------\n";
        cout<<"\t Sun\t Mon\t Tue\t Wed\t Thu\t Fri\t Sat\n";//printing the days.
        list<int>::iterator it3=it2->dates.begin();
        for(int k=0;k<7;k++)
        {
            for(int j=0;j<7;j++)
            {
                for(list<Reminder>::iterator it=reminder.begin();it!=reminder.end();it++)
                {
                    if(it->mont==it2->month)
                    {
                        if(it->dat==*it3)
                        {
                            if(*it3==1)
                            {
                                for(int l=j;l<c;l++)
                                {
                                    cout<<"\t ";
                                    j++;
                                }
                                j++;
                                cout<<"\t *"<<*it3;
                                it3++;
                                c=j;
                                if(c>6){c=0;}
                            }
                            else
                            {
                                if(it3==it2->dates.end())
                                {
                                    j++;
                                    c=j;
                                    if(c>6){c=0;}
                                    break;
                                }
                                else
                                {
                                    if(*it3<=9)
                                    {
                                        cout<<"\t *"<<*it3;
                                        it3++;
                                        j++;
                                        c=j;
                                        if(c>=6){c=0;}
                                    }
                                    else
                                    {
                                        cout<<"\t*"<<*it3;
                                        it3++;
                                        j++;
                                        c=j;
                                        if(c>=6){c=0;}
                                    }
                                }
                            }
                        }
                    }
                    if(it->dat==*it3){break;}
                }
                if(j<7)
                {
                    if(*it3==1)
                {
                    if(j<c)
                    {
                        cout<<"\t ";
                        continue;
                    }
                    cout<<"\t  "<<*it3;
                    it3++;
                }
                else
                {
                    if(it3==it2->dates.end())
                    {
                        c=j;
                        if(c>6){c=0;}
                        break;
                    }
                    else
                    {
                        if(*it3<=9)
                        {
                            cout<<"\t  "<<*it3;
                            it3++;
                            c=j;
                            if(c>=6){c=0;}
                        }
                        else
                        {
                            cout<<"\t "<<*it3;
                            it3++;
                            c=j;
                            if(c>=6){c=0;}
                        }
                    }
                }
                }

            }
            cout<<endl;
            if(it3==it2->dates.end())
            {
                break;
            }
        }

    }
            cout<<endl;
}


int main()
{
    int year,n;
    string day;
    cout<<"Enter the year: ";
    cin>>year;
    cout<<"Starting day of the year: ";
    cin>>day;
    calender(year);
    print_cal(day);
    do{
    cout<<"\n\t1.To add a reminder.\n\t2.To update a reminder.\n\t3.To display a specific months reminder.\n\t4.To delete a reminder.\n\t0.To exit.\n\tEnter your option: ";
    cin>> n;
    cout<<endl;
    switch(n){
        case 1:
            add_remainder();
            print_cal(day);
            break;
         case 2:
            update_remainder();
            print_cal(day);
            break;
        case 3:
            display_remainder();
            break;
        case 4:
            delete_remainder();
            break;
        case 0:
            break;
    }
    }while(n!=0);
    print_cal(day);
    delete_all_remainder();
    delete_calender();
    return 0;
}
