#include<iostream>
using namespace std;

struct student
{
    string name;
    int id;
};
int main()
{
    for(int i=0;i<5;i++)
    {
        student i;
        cout<<"enter id: ";
        cin>>i.id;
        cout<<"enter name: ";
        cin>>i.name;
    }
    for(int i=0;i<5;i++)
    {
        student i;

        cout<<"ID: "<<i.id;
        cout<<"Name: "<<i.name;
    }


    return 0;
}
