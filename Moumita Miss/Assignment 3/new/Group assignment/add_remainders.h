#include"List.h"

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
                        add->d->r=temp2;
                        tail_reminder=temp2;
                    }
                    else
                    {
                        tail_reminder->next=temp2;
                        tail_reminder=tail_reminder->next;
                    }
                }
                add->d=add->d->next;
            }
        }
        add=add->next;
    }
}
