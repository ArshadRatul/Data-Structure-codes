#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

void SWAP(int *p,int LP,int SP,int s)
{
    int temp1,temp2;
    for(int i=0;i<s;i++)
    {
        if(p[i]==LP)
        {
            temp1=i;
        }
        if(p[i]==SP)
        {
            temp2=i;
        }
    }
    p[temp1]=SP;
    p[temp2]=LP;
}
void cum(int* a,int s)
{
    int help[s];
    help[0]=a[0];
    for(int i=1;i<s;i++)
    {
        help[i]=a[i]+help[i-1];
    }
    for(int k=1;k<s;k++)
    {
        a[k]=help[k];
    }
}
void print(int* p,int s)
{
    cout<<endl;
    for(int i=0;i<s;i++)
    {
        cout<<p[i]<<" ";
    }
}
int main()
{
    int n,LP,SP;
    cout<<"Enter the size of array: ";
    cin>>n;
    int* A=new int[n];
    srand(time(0));
    for(int i=0;i<n;i++)
    {
        A[i]=rand()%50;
        cout<<A[i]<<" ";
    }
    LP=A[0];
    SP=A[0];
    for(int k=0;k<n;k++)
    {
       if(LP<A[k])
       {
           LP=A[k];
       }
       if(SP>A[k])
       {
           SP=A[k];
       }
    }
    cout<<"\nLP: "<<LP;
    cout<<"\nSP: "<<SP;

    SWAP(A,LP,SP,n);
    cout<<"\nAfter swap: ";
    print(A,n);
    cout<<endl;
    cum(A,n);
    cout<<"\ncumulative sum: ";
    print(A,n);

    delete []A;
    return 0;
}
