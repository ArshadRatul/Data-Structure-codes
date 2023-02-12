//No.1
#include<iostream>
using namespace std;
int q[5];
int n=5,f=-1,b=-1;

bool isEmpty()
{
    if(b==-1)
    {
        return true;
    }
    else{return false;}
}
bool isFull()
{
    if (b>n-1)
    {
        return true;
    }
    else{return false;}
}
void push(int a)
{
    if (isEmpty()==true)
    {
        f++;
        b++;
        q[b]=a;
    }
    else if(isFull()==false)
    {
        b++;
        q[b]=a;
    }
    else {cout<<"The queue is full";}
}
void pop()
{
    int arr[n];
    if(isEmpty()==false)
    {
        for(int i=0;i<=b;i++)
        {
            arr[i]=q[i+1];
        }
        b--;
        for(int j=0;j<=b;j++)
        {
            q[j]=arr[j];
        }
    }
}
void display()
{
    if(isEmpty()==true)
    {
        cout<<"The queue is empty";
    }
    else
    {
        for(int k=0;k<=b;k++)
        {
            cout<<q[k]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    push(44);
    push(22);
    push(13);
    push(-6);
    display();
    pop();
    display();
    pop();
    display();
    push(9);
    push(20);
    display();
    push(20);
    push(20);

}
