#include<iostream>
using namespace std;
int main()
{
    double marks[3];
    double *ptr= &marks[0];
    for (int i=0;i<3;i++)
    {
        cout<<"Enter your grade: ";
        cin>>*ptr;
        ptr++;
    }
    ptr=&marks[0];
    double lowest=*ptr;
    for (int i=0;i<3;i++)
    {
        if(*ptr<lowest)
        {
            lowest=*ptr;
        }
        ptr++;
    }
    ptr=&marks[0];
    for (int i=0;i<3;i++)
    {
        cout<<*ptr;
        ptr++;
    }
    cout<<"\nLowest: "<<lowest;

    return 0;
}
