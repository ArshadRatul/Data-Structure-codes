//No.2
#include<iostream>
using namespace std;

int arr[5];
int top=-1,n=5;

void arr_sort(int);
void push(int);
void pop();
bool isEmpty();
bool isFull();
void clearEntry();
void display();
int main()
{
    int a,inp;

    do
    {
        cout<<"\n1.Push. \n2.Pop. \n3.Display. \n4.Clear. \n5.See Top. \n6.Exit. \nEnter your choice: ";
        cin>>a;
        switch(a)
        {
        case 1:
            {
                cout<<"Enter a value you want to push: ";
                cin>>inp;
                push(inp);
                break;
            }
        case 2:
            {
                pop();
                break;
            }
        case 3:
            {
                display();
                break;
            }
        case 4:
            {
                clearEntry();
                break;
            }
        case 5:
            {
               arr_sort(top);
               cout<<arr[top];
               break;
            }
        case 6:
            {
                cout<<"Thank You.\n";
                break;
            }
        default:
            {
                cout<<"Invalid option try again.\n";
            }

        }
    }while(a!=6);

    return 0;
}

void push(int a)
{
    if(isFull()==true)
    {
        top++;
        arr[top]=a;
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
        for(int i=top;i>=0;i--)
        {
             cout<<arr[i]<<",";
        }
    }
    cout<<"\b \n";
}
void arr_sort(int)
{
    int temp;
    if(isEmpty()==true)
    {
        for(int i=0;i<=top;i++)
        {
                for(int j=0;j<top;j++)
                {
                    if(arr[j+1]<arr[j])
                    {
                        temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                    }
                }
        }
    }
}
