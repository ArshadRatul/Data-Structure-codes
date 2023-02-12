#include<iostream>
using namespace std;

int arr[10];
int top=-1,n=10;

void pushStack(int);
void pop();
bool isEmpty();
bool isFull();
void display();
void sort_stack(int [],int);
int main()
{

    int a,inp;
    do
    {
        cout<<"\n1.Push. \n2.Display. \n3.Exit. \nEnter your choice: ";
        cin>>a;
        switch(a)
        {
        case 1:
            {
                cout<<"Enter a value you want to push: ";
                cin>>inp;
                pushStack(inp);
                break;
            }
        case 2:
            {
                display();
                break;
            }
        case 3:
            {
                cout<<"Thank You.\n";
                break;
            }
        default:
            {
                cout<<"Invalid option try again.\n";
            }

        }
    }while(a!=3);


    return 0;
}
void pushStack(int a)
{
    int help[10];
    int temp;
    if(isFull()==true)
    {
        top++;
        temp=top;
        if(top==0)
        {
            arr[top]=a;
        }
        else if(top>0)
        {
            while(arr[top-1]>a)
            {

            }
        }
    }
}
void pop()
{
    if((isEmpty()==true))
    {
        top--;
    }
}
bool isEmpty()
{
    if(top<=-1)
    {
        cout<<"Stack Underflow.\n";
        return false;
    }
    else{return true;}
}
bool isFull()
{
    if(top>=n)
    {
        cout<<"Stack Overflow.\n";
        return false;
    }
    else{return true;}
}
void display()
{
    if((isEmpty()==true))
    {
        cout<<"The array is: \n";
        for(int i=top;i>=0;i--)
        {
             cout<<arr[i]<<",";
        }
    }
    cout<<"\b \n";
}
void sort_stack(int arr[],int top)
{
    int help[10];
    int temp=arr[top],stack_size=top;

    while()
}
