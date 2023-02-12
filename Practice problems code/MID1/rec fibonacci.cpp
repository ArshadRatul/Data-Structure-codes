#include<iostream>
using namespace std;
int sum=1;
int fib(int a,int b,int n)
{
    if(a==0)
    {
        cout<<0<<" "<<1<<" ";
    }
    int temp;
    temp=a+b;
    a=b;
    b=temp;
    cout<<temp<<" ";
    sum=sum+temp;
    n--;
    if(n-2>0)
    {
      fib(a,b,n);
    }
    return sum;
}
int main()
{
    int f=0,s=1,n=15,sm;
    sm=fib(f,s,n);
    cout<<"\nSUM is "<<sm;
    return 0;
}
