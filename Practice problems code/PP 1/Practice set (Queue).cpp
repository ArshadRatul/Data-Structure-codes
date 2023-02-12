#include<iostream>
#include<queue>
using namespace std;
void display(queue<int>);

int main()
{
    queue<int> b;
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
               b.front();
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
void display(queue<int>b)
{
    queue<int>a=b;
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
}
