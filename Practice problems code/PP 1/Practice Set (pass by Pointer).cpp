
//No.1
#include<iostream>
using namespace std;

void breakFloating(float,int*,int*);
int main()
{
    float a;
    int b,c;
    int* x=&b,*y=&c; //declaring pointer variables.
    cout<<"Enter a floating point number: ";
    cin>>a;
    breakFloating(a,x,y);//calling the function.
    cout<< "The main value: "<<b<<" \nThe fraction value: "<<c;

    return 0;
}

void breakFloating(float a,int* b,int* c)
{
    *b=a; //assigning the main value at b integer.
    float d=(a-*b), f=(a-*b);
    int x;
     cout<<"D:"<<d;
     cout<<"\nF:"<<f<<"\n";
    while (f!=0)
    {
        d=(d*10.0);
        cout<<"D:"<<d;
        x=d;
        cout<<"\nX:"<<x;
        f=d-(x);
        cout<<"\nF:"<<f<<"\n";
    }
    /*for(;f!=0.0;f=d-x)
    {
        d=d*10;
        x=d;
    }
    *c=x;*/
}

/*
//No.2
#include<iostream>
using namespace std;

void SwapChar(char*,char*);
int main()
{
    char a,b;
    char *x=&a,*y=&b;
    cout<< "Enter two character one after another: \n";
    cin>>a>>b;
    SwapChar(x,y);
    cout<<"After swap:\n"<<"A: "<<a<<"\nB: "<<b;

    return 0;
}
void SwapChar(char *t,char *u)
{
    char a=*t;
    *t=*u;
    *u=a;
}
*/
/*
//No.3
#include<iostream>
using namespace std;
void copy_array(double [],int,double*);//Prototyping the function.
int main()
{
    int n;
    cout<< "Enter the size of array: ";
    cin>>n;
    double a[n],b[n];
    double *ptr=a;//pointer at the first index of the array.

    cout<<"Array a: \n";
    for(int i=0;i<n;i++)//Taking input in array a.
    {
        cout<<"["<<i<<"]= ";
        cin>>a[i];
    }
    copy_array(b,n,ptr);// calling the copy function.

    cout<<"Array b: ";
     for(int i=0;i<n;i++)//printing array B.
    {
        cout<<b[i]<<",";
    }
    cout<<"\b ";//to erase the coma at the end of printing.
    return 0;
}
void copy_array(double x[],int s,double* y)
{
    for(int i=0;i<s;i++)//copying array a to array b.
    {
        x[i]= *y;
        y++;//moving the pointer to the next index.
    }
}
*/
/*
//No.4
#include<iostream>
using namespace std;
float* address(float [],int,float*);
int main()
{
    int n;
    cout<< "Enter the size of array: ";
    cin>>n;

    float a[n];
    float *ptr=a;

    cout<< "Enter the values of the array: \n";
    for(int i=0;i<n;i++)
    {
        cout<<"["<<i<<"]=";
        cin>>a[i];
    }
    cout<<"Address of the maximum value in the array: "<<address(a,n,ptr);//calling the function and printing the address.

    return 0;
}
float* address(float a[],int b,float* ptr)
{
    float *save;
    for(int i=0;i<b;i++)
    {
        if(a[i+1]>a[i])
        {
            save=&*ptr;//saving max the address
        }
        ptr++;//to point the pointer to the next address.
    }


    return save;
}
*/
