//No.2
#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
int i=0,s=0;
int sum(int x[])
{
    if(i<10)
    {
        s=s+pow(x[i],2);
        i++;
        sum(x);
    }
    return s;
}
float calculate(int a[])
{
    int x;
    cout<<"\nchoose an option: \n1.Average.\n2.Sum.\nEnter:";
    cin>>x;
    if(x==1)
    {
        cout<<"The average is: ";
        return (a[0]+a[9])/2.0;
    }
    else if(x==2)
    {
        cout<<"The power sum is: ";
        return sum(a);
    }
    else
    {
        cout<<"Please choose the correct option";
        calculate(a);
    }
}
int main()
{
    float ans;
    int arr[10];
    srand(time(0));
    for(int i=0;i<10;i++)
    {
        arr[i]=rand()%20+1;
        cout<<arr[i]<<" ";
    }

    ans=calculate(arr);
    cout<<ans;
    return 0;
}
