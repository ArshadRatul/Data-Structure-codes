#include<iostream>
#include<stack>
using namespace std;

void print_stack(stack<int>);
int main()
{
    int temp,top;
    stack<int> Stac;
    stack<int> helperStac;

    Stac.push(44);
    Stac.push(99);
    Stac.push(22);
    Stac.push(44);
    Stac.push(19);
    Stac.push(56);
    Stac.push(53);
    Stac.push(23);
    print_stack(Stac);

    temp=Stac.top();
    while(!Stac.empty())
    {
        top=Stac.top();
        helperStac.push(top);

        if(Stac.top()>temp)
        {
            temp=Stac.top();
        }
        Stac.pop();
    }
    while(!helperStac.empty())
    {
        top=helperStac.top();
        if(helperStac.top()!=temp)
        {
            Stac.push(top);
        }
        helperStac.pop();
    }

    Stac.push(temp);
    cout<<"\nAfter making the top highest\n";
    print_stack(Stac);

    return 0;
}

void print_stack(stack<int> a)
{
    stack<int>b=a;
    while(!b.empty())
    {
        cout<<b.top()<<"\n";
        b.pop();
    }
}
