#include"List.h"
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
    for(int i=0;i<12;i++)
    {
        cout<<"-------"<<ptr->month<<"-------\n";//printing the month name.
        cout<<"\t Sun\t Mon\t Tue\t Wed\t thu\t fri\t sat";//printing the days.
        Date* ptr2=ptr->d;
        int h=check_day(a);
        //2nd for loop to operate the rows.
        for(int j=0;j<7;j++)
        {
            //3rd for loop to operate the Columns.
            for(int k=h;k<7;k++)
            {
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
            cout<<endl;
        }
    }
}
