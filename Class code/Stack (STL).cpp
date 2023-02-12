#include<iostream>
#include<stack>
using namespace std;

void print_stack(stack<int> a)
{
    stack<int>b=a;
    while(!b.empty())
    {
        cout<<b.top()<<",";
        b.pop();
    }
    cout<<"\b \n";
}

int main()
{
    int temp,top;
    stack<int> a;
    stack<int> help;

    a.push(23);
    a.push(53);
    a.push(56);
    a.push(19);
    a.push(44);
    a.push(22);
    a.push(99);
    a.push(44);
    print_stack(a);

    temp=a.top();
    while(!a.empty())
    {
        top=a.top();
        help.push(top);

        if(a.top()>temp)
        {
            temp=a.top();
        }
        a.pop();
    }
    while(!help.empty())
    {
        top=help.top();
        if(help.top()!=temp)
        {
            a.push(top);
        }
        help.pop();
    }

    a.push(temp);
    cout<<"\nAfter making the top highest\n";
    print_stack(a);

    return 0;
}
