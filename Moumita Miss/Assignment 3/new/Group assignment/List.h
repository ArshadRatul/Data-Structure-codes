using namespace std;
#include"leap_year.h"
struct Reminder//declaring a reminder type
{
    string title,description;
    Reminder* next;
};
struct Date//declaring a date type
{
    int date;
    Reminder* r;
    Date* next;
};
struct Month//declaring a month type
{
    string month;
    Date* d;
    Month* next;
};
//setting a pointer head
Month* head_month=NULL;
Month* tail_month=NULL;
//get_head function to get the head of the month.
Month* get_head_month()
{
    return head_month;
}
//pushing the months into the list
void push_months(string a,int n)
{
    //I kept made a list of months which will have the address of another list of dates
    //so first I took took the input of months then added the dates dynamically
    Month* temp=new Month;
    temp->month=a;
    temp->d=NULL;
    temp->next=NULL;
    Date* tail_date=NULL;
    if(head_month==NULL)
    {
        head_month=temp;
        tail_month=temp;
        for(int i=1;i<=n;i++)
        {
            Date* temp2=new Date;
            temp2->date=i;
            temp2->r=NULL;
            temp2->next=NULL;
            if(temp->d==NULL)
            {
                temp->d=temp2;
                tail_date=temp2;
            }
            else
            {
                tail_date->next=temp2;
                tail_date=tail_date->next;
            }
        }
    }
    else
    {
        tail_month->next=temp;
        tail_month=tail_month->next;
        for(int i=1;i<=n;i++)
        {
            Date* temp2=new Date;
            temp2->date=i;
            temp2->r=NULL;
            temp2->next=NULL;
            if(temp->d==NULL)
            {
                temp->d=temp2;
                tail_date=temp2;
            }
            else
            {
                tail_date->next=temp2;
                tail_date=tail_date->next;
            }
        }
    }
}
//main function of this script
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
