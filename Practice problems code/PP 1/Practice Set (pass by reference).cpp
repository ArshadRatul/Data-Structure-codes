/*//No.1
#include<iostream>
using namespace std;
void PrintAddress(int);
int main()
{
    int x;
    cout<< "Enter a number: ";
    cin>>x;
    PrintAddress(x);

    return 0;
}

void PrintAddress(int x)
{
    cout<<"The address of x is: "<<&x;
}*/
/*No.2
#include<iostream>
using namespace std;
void SwapChar(char &,char &);
int main()
{
    char a,b;
    cout<< "Enter two charecter one after another: \n";
    cin>>a>>b;
    cout<<"Before swap: \n"<<"a="<<a<<", b="<<b<<"\n";
    SwapChar(a,b);
    cout<<"After swap: \n"<<"a="<<a<<", b="<<b<<"\n";

    return 0;
}

void SwapChar(char &x,char &y)
{
    char z=x;
    x=y;
    y=z;
}*/

//No.3
#include<iostream>
using namespace std;
void ScaleUp(float &,float &,float &);//prototyping scaleup function.
int main()
{
    float q1,q2,q3; //declaring needed variables.
    cout<<"Enter the value of quiz 1: ";
    cin>>q1;
    cout<<"Enter the value of quiz 2: ";
    cin>>q2;
    cout<<"Enter the value of quiz 3: ";
    cin>>q3;
    ScaleUp(q1,q2,q3); // calling ScaleUp function.
    cout<< "After scale up: \n q1:"<<q1<<"\n q2:"<<q2<<"\n q3:"<<q3;

    return 0;
}

void ScaleUp(float &x,float &y,float &z)
{
    float a,diff;
    if((x<(y+z)/2.0)||(y<(x+z)/2.0)||(z<(y+x)/2.0))//checking all the conditions together.
    {
        if(x<(y+z)/2.0)
        {
            a=(y+z)/2.0;
            diff=a-x;
            x=x+diff;
        }
        else if(y<(x+z)/2.0)
        {
            a=y<(x+z)/2.0;
            diff=a-y;
            y=y+diff;
        }
        else if(z<(y+x)/2.0)
        {
            a=(y+x)/2.0;
            diff=a-z;
            z=z+diff;
        }
    }
}
