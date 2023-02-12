#include<iostream>
#include<stack>
using namespace std;
void display(stack<int>);
void pushStack(int,stack<int>&);
int main()
{
    stack<int> x;
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
                pushStack(inp,x);
                break;
            }
        case 2:
            {
                display(x);
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
void pushStack(int n,stack<int>&a)
{
    stack<int> b;
    int stack_size=a.size()+1;
    if(((a.size()+1)>1))
    {
        for(int i=0;i<=stack_size;i++)
        {
            if(a.top()<n)
            {
                b.push(a.top());
                a.pop();
            }
        }
        a.push(n);
        while(!b.empty())
        {
            a.push(b.top());
            b.pop();
        }
    }

    else{a.push(n);}
    display(a);
}
void display(stack<int>a)
{
    stack<int>b=a;
    while(!b.empty())
    {
        cout<<b.top()<<"\n";
        b.pop();
    }
}

