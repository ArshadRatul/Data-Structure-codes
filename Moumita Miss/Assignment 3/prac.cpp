#include <iostream>
using namespace std;
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
//checking with which day the year starts
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
//printing the calender
void print_calender(string a)
{
    //getting the head of the month list
    Month* ptr=get_head_month();
    if(ptr==NULL)
    {
        cout<<"Empty\n";
        return;
    }
    //1st for loop to print 12months
    int h=0;
    for(int i=0;i<12;i++)
    {
        cout<<"\t----------------------"<<ptr->month<<"------------------------\n";//printing the month name.
        cout<<"\t Sun\t Mon\t Tue\t Wed\t Thu\t Fri\t Sat\n";//printing the days.
        Date* ptr2=ptr->d;
        if(i==0)
        {
            h=check_day(a);
        }
        //2nd for loop to operate the rows.
        for(int j=0;j<7;j++)
        {
            if(ptr2==NULL){break;}
            //3rd for loop to operate the Columns.
            for(int k=0;k<7;k++)
            {
                if(ptr2!=NULL)
                {
                    if(j==0)
                    {
                        if(k<h)
                        {
                            cout<<"\t ";
                            continue;
                        }
                        //checking for reminders and printing the dates.
                        if(ptr2->r==NULL)
                        {
                            cout<<"\t "<<ptr2->date;
                            ptr2=ptr2->next;
                        }
                        else
                        {
                            cout<<"\t*"<<ptr2->date;
                            ptr2=ptr2->next;
                        }
                    }
                    else
                    {
                        h=k+1;
                        if(ptr2->r==NULL)
                        {
                            cout<<"\t "<<ptr2->date;
                            ptr2=ptr2->next;
                        }
                        else
                        {
                            cout<<"\t*"<<ptr2->date;
                            ptr2=ptr2->next;
                        }
                    }
                }
                else{break;}
            }
            cout<<endl;
        }
        ptr=ptr->next;
        if(ptr==NULL){break;}
    }
}
void add_reminder(string a,int n)
{
    Month* add=get_head_month();
    while(add!=NULL)
    {
        if(add->month==a)
        {
            while(add->d!=NULL)
            {
                if(add->d->date==n)
                {
                    Reminder* tail_reminder=NULL;
                    Reminder* temp3=new Reminder;
                    cin>>temp3->description;
                    cin>>temp3->title;
                    temp3->next=NULL;
                    if(add->d->r==NULL)
                    {
                        add->d->r=temp3;
                        tail_reminder=temp3;
                    }
                    else
                    {
                        tail_reminder->next=temp3;
                        tail_reminder=tail_reminder->next;
                    }
                }
                add->d=add->d->next;
            }
        }
        add=add->next;
    }
}

void delete_calender()
{
    //getting the head of the month list
    Month* ptr=get_head_month();
    Month* help_m=ptr;
    Date* help_d=ptr->d;
    Reminder* help_r=ptr->d->r;
    //deletes all the months
    while(ptr!=NULL)
    {
        //deletes all the dates
        while(ptr->d!=NULL)
        {
            //deletes all the remainders
            while(ptr->d->r!=NULL)
            {
                ptr->d->r=ptr->d->r->next;
                delete help_r;
                help_r=ptr->d->r;
            }
            ptr->d=ptr->d->next;
            delete help_d;
            help_d=ptr->d;
        }
        ptr=ptr->next;
        delete help_m;
        help_m=ptr;
        head_month=ptr;
    }

}

if(it->mont==it2->month)
                    {
                        if(it->dat==*it3)
                        {
                            if(*it3==1)
                            {
                                if(j<c)
                                {
                                    cout<<"\t ";
                                    continue;
                                }
                                cout<<"\t *"<<*it3;
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
                                        cout<<"\t *"<<*it3;
                                        it3++;
                                        c=j;
                                        if(c>=6){c=0;}
                                    }
                                    else
                                    {
                                        cout<<"\t*"<<*it3;
                                        it3++;
                                        c=j;
                                        if(c>=6){c=0;}
                                    }
                                }
                            }
                        }
                    }


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
    while(true)
    {
        int x;
        cout<<"Press 0 to exit.\nPress 1 to add reminder.\n Press 2 to update reminder.\nPress 3 to display.\Press 4 to delete reminder.\n";
        cin>>x;
        /*switch(x)
        {
        case 0:

            break;
        case 1:
            int n;
            string z;
            cout<<"Enter the month and then the date: ";
            cin>>z>>n;
            add_reminder(z,n);
            break;
        default:
            cout<<"invalid";
            break;
        }*/
    }
    print_calender(day);
    delete_calender();
    print_calender(day);
    return 0;
}
void print_cal(string d)
{
    int c=check_day(d);
    for(list<Month>::iterator it2=months.begin();it2!=months.end();it2++)
    {
        cout<<"\t-------------------------"<<it2->month<<"------------------------\n";
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
            cout<<endl;
            if(it3==it2->dates.end())
            {
                break;
            }
        }

    }
            cout<<endl;
}
