#include<iostream>
#include<stack>
using namespace std;

void display(stack<int>);

int main()
{
    stack<int> b;
    int a,inp;

    do
    {
        cout<<"\n1.Push. \n2.Pop. \n3.Display. \n4.Empty. \n5.See Top. \n6.Exit. \nEnter your choice: ";
        cin>>a;
        switch(a)
        {
        case 1:
            {
                cout<<"Enter a value you want to push: ";
                cin>>inp;
                b.push(inp);
                break;
            }
        case 2:
            {
                b.pop();
                break;
            }
        case 3:
            {
                display(b);
                break;
            }
        case 4:
            {
                b.empty();
                break;
            }
        case 5:
            {
               b.top();
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
void display(stack<int>b)
{
    stack<int>a=b;
    while(!a.empty())
    {
        cout<<a.top()<<" ";
        a.pop();
    }
}
