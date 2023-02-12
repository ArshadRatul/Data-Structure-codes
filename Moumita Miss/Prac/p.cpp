#include<iostream>
using namespace std;
struct student
{
    int id;
    char ins;
};
int main()
{
    student arr[3];
    char a='a';
    for(int i=0;i<3;i++)
    {
        arr[i].id=i+1;
        arr[i].ins=a;
        a++;
    }
    for(int i=0;i<3;i++)
    {
        cout<<i+1<<endl;
        cout<<"\t"<<arr[i].id<<endl;
        cout<<"\t"<<arr[i].ins<<endl;
    }

    return 0;
}
