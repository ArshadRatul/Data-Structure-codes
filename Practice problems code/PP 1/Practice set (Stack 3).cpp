#include<iostream>
#include<stack>
#include<string>
using namespace std;
void display(stack<char>b)
{
    stack<char>a=b;
    while(!a.empty())
    {
        cout<<a.top()<<" ";
        a.pop();
    }
}
int main()
{
    string a;
    cout<<"Enter a string: ";
    cin>>a;
    int b=a.size();
    stack<char> str;
    for(int i=0;i<b;i++)
    {
        str.push(a[i]);
    }
    display(str);

    return 0;
}
