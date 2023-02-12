#include<iostream>
#include<stack>
using namespace std;

void print_stack(stack<int>);
int main()
{
    int inp,x;
    stack<int> b;
    stack<int> s;
    for(int i=0;i<10;i++) //for loop to push 10 elements in stack.
    {
        cout<<"Enter a stack value: ";
        cin>>inp;
        s.push(inp);//pushing elements
    }
    cout<<"The initial stack: \n";
    print_stack(s);
    cout<<"Enter a value up to which the stack will pop: ";
    cin>>x;
    cout<<"The stack after delete: \n";

    while(!s.empty()) //till s is empty
    {
        if(!(s.top()>=x))//if s is greater than x then store in stack b.
        {
            b.push(s.top());
        }
        s.pop();//pop stack s.
    }
    while(!b.empty())//replacing the stack after deleting.
    {
        s.push(b.top());
        b.pop();
    }
    print_stack(s);// printing the stack after deleting >=x.

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
