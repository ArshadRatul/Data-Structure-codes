#include<iostream>
#include<windows.h>
using namespace std;
string arr[5];
int Front=-1,Back=-1;
bool isempty()
{
    if(Front==Back)
    {
        return true;
    }
    return false;
}
bool isfull()
{
    if(Back>=5)
    {
        return true;
    }
    return false;
}
void enqueue(string val)
{
    if(isfull()==false)
    {
        Back++;
        arr[Back]=val;
    }
    else{cout<<"Overflow\n";}
}
void dequeue()
{
    if(isempty()==true){cout<<"Queue empty\n";}
    else
    {
        Front++;
        cout<<arr[Front]<<"\n";
        if(Front==Back)
        {
            Front=-1;
            Back=-1;
        }
    }
}
int main()
{
    string name;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<"Enter the name: ";
            cin>>name;
            enqueue(name);
        }
        for(int k=0;k<5;k++)
        {
            Sleep(2000);
            dequeue();
        }
    }
    cout<<"The bank is closed for the day.";

    return 0;
}
