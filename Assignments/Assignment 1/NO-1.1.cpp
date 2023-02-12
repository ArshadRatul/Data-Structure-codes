#include<iostream>
#include<stack>
using namespace std;
void display(stack<int>);
void pushStack(int);
stack<int> s;
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
                display(s);
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
void pushStack(int n)
{
    stack<int> b;
    int stack_size=s.size()+1;
    if((stack_size>1))
    {
        while(s.top()<n)
        {
            b.push(s.top());
            s.pop();
        }
        s.push(n);
        while(!b.empty())
        {
            s.push(b.top());
            b.pop();
        }
    }
    else{s.push(n);}
    display(s);
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
