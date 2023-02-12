//No.1
#include<iostream>
using namespace std;

int arr[5];
int top=-1,n=5;

void push(int);
void pop();
bool isEmpty();
bool isFull();
void clearEntry();
void display();
int main()
{
    int a,inp;

    do//infinity loop till entered 5.
    {
        cout<<"\n1.Push. \n2.Pop. \n3.Display. \n4.Clear. \n5.Exit. \nEnter your choice: ";
        cin>>a;
        switch(a)
        {
        case 1://to execute push function.
            {
                cout<<"Enter a value you want to push: ";
                cin>>inp;
                push(inp);
                break;
            }
        case 2://to execute pop function.
            {
                pop();
                break;
            }
        case 3://to execute display function.
            {
                display();
                break;
            }
        case 4://to execute clear function.
            {
                clearEntry();
                break;
            }
        case 5://for breaking out of the infinity loop.
            {
                cout<<"Thank You.\n";
                break;
            }
        default://if input values other than the options above.
            {
                cout<<"Invalid option try again.\n";
            }

        }
    }while(a!=5);//loop runs till entered 5.

    return 0;
}

void push(int a)
{
    if(isFull()==true)//Checking if the stack is full or not.
    {
        top++; //if not full then increment the top and input the value, else print overflow.
        arr[top]=a;
    }
}
void pop()//Checking if the stack is empty or not.
{
    if((isEmpty()==true))//if not empty then derease the top, else print underflow.
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
    if(top>=n-1)
    {
        cout<<"Stack Overflow.\n";
        return false;
    }
    else{return true;}
}
void clearEntry()
{
    top=-1;
    cout<<"Stack Cleared...\n";
}
void display()
{
    if((isEmpty()==true))
    {
        cout<<"The array is: \n";
        for(int i=0;i<=top;i++)
        {
             cout<<arr[i]<<",";
        }
    }
    cout<<"\b ";
}
