/*
//swap using reference
#include<iostream>
using namespace std;
void swaping(float &x,float &y)
{
    float z;
    z=x;
    x=y;
    y=z;
}
int main()
{
    int x,y,z,c;
    float a,b;
    cout<< "enter two numbers: \n";
    cin>>a>>b;
    swaping(a,b);
    cout<<"a: "<<a<<" b: "<<b;

    return 0;
}
*/
/*
#include<iostream>
using namespace std;

struct demo
{
    int a;
};
int main()
{
    int x=5,y=6;
    demo d;
    int* p=&x;
    //p=&x;
    p=&y;
    int &r=x;
    //&r=y;
    p=NULL;
    //&r=NULL;
    p++;
    cout<<p<<endl;
    r++;
    cout<<x<<endl;

    cout<<&p<<" "<<&x<<endl;
    cout<<&r<<" "<<&x<<endl;

    demo* q= &d;
    demo &qq = d;

    q->a=8;
    qq.a=8;
    cout <<p<<endl;
    cout<<r<<endl;

    return 0;
}
*/
/*
#include<iostream>
using namespace std;
void breakFloating(float a,int *i,int *f)
{
    int x=a;
    *i=x;
    *f=(a-x)*100;

}
int main()
{
    float a;
    int b=0,c=0;
    cout<<"Enter a floating point value up to 2 decimal place: ";
    cin>>a;
    int* intpart=&b;
    int* fracpart=&c;
    breakFloating(a,intpart,fracpart);
    cout<<"main part: "<<b<<" fraction part: "<<c;
    return 0;
}*/
/*
#include <iostream>
using namespace std;

struct Person
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    Person p1, p2;

    cout << "Enter Full name: ";
    cin.get(p1.name, 50);
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;

    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p1.name << endl;
    cout <<"Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary;

    return 0;
}*/
