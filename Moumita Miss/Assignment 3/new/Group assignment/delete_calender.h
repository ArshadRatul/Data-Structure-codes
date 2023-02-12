using namespace std;
#include"List.h"
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
