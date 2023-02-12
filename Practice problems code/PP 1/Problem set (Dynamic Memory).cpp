/*
//No.1
#include<iostream>
using namespace std;

int main()
{
    int n,a=1;
    cout<< "Enter the size of array: ";
    cin>>n; //asking for the size of array from the user.
    int *ptr=new int[n]; //allocating memory from heap.
    cout<<ptr<<"\n"; //printing the address of the pointer.
    cout<< "The array: \n";
    for(int i=0;i<n;i++) //Taking input into the array.
    {
        *ptr=a;
        a=a+2;
        ptr++;
    }
    ptr=ptr-n; //resetting the pointer to the initial address.
    for(int i=0;i<n;i++)  //Printing the array.
    {
        cout<<*ptr<<"\n";
        ptr++;
    }
    ptr=ptr-n; //resetting the pointer to the initial address.
    cout<<ptr<<"\n"; //printing the address of the pointer to see it reset or not.
    cout<<"The size of address in bite: "<<sizeof(ptr)<<"\n"; //printing the size of the pointer address.
    cout<<"The size of the array: "<<(sizeof(ptr)/sizeof(ptr[0])); //Printing the size of the array.

    delete[] ptr; //deallocating ptr variable
    return 0;
}
*/
/*
//No.2
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int calc(int*,int ); //prototyping a function named calc to calculate the mean.
int main()
{
    int n;
    float mean;
    cout<< "Enter the size of array: ";
    cin>>n; //Taking the size of the array.
    int *ptr= new int[n]; //allocating array into heap.
    srand(time(0)); //to get new values every time when run.

    for(int i=0;i<n;i++) //Taking input into the array .
    {
        *ptr=rand()%100;
        ptr++;
    }
    ptr=ptr-n;
    for(int i=0;i<n;i++) // Printing the array.
    {
        cout<<*ptr<<"\n";
        ptr++;
    }
    cout<<"sort\n";
    ptr=ptr-n;
    mean=(calc(ptr,n)/float(n));//calculating the mean and storing in a variable.
    //Printing Mean, max and min.
    cout<<"Mean= "<<mean<<endl;
    cout<<"max= "<<*ptr<<endl;
    cout<<"min= "<<*(ptr+(n-1))<<endl;
    ptr=ptr-n; // reseting the pointer.


    delete[] ptr;// Deallocating the array
    return 0;
}
int calc(int* p,int n)
{
    int m=0,temp;
    for(int k=0;k<n;k++) // for counting the mean.
    {
        m=m+*p;
        p++;
    }
    p=p-n;
    for(int i=0;i<n;i++) //sorting the array.
    {
        for(int j=0;j<n;j++)
        {
            if(p[j+1]>p[j])
            {
                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }

    return m;
}
*/

//No.3
#include<iostream>
#include<cstdlib>
#include<time.h>
#include<algorithm>
using namespace std;
void inp_arr(int*, int); //For taking input in the array.
void print_arr(int[],int);//For printing the array.
void check(int[],int);//For checking the numbers more than one.
int main()
{
    int n;
    cout<< "Enter the size of array: ";
    cin>> n; //Taking the size of array from the user.

    int* ptr= new int[n];//Allocating dynamic memory from heap.
    inp_arr(ptr,n); //Taking input into the dynamic array.

    cout<<"The array is: \n";
    print_arr(ptr,n); // printing the array.
    check(ptr,n);//checking if the number is more than one.


    delete[] ptr;//Deallocating the dynamic memory.
    return 0;
}
void inp_arr(int* p,int n)
{
    srand(time(0));
    for(int i=0;i<n;i++)
    {
        *p=rand()%10;
        p++;
    }
    p=p-n;
}
void print_arr(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<",";
    }
    cout<<"\b \n";
}
void check(int a[],int n)
{
    int c,s=0;
    int* b=new int[n];//allocating dynamic memory.
    sort(a,a+n); //sort function.
    cout<<"Sorted: \n";
    print_arr(a,n); //Print the sorted array.
    cout<<endl;

    for(int k=0;k<n;k++) //To check repeated numbers.
    {
        c=1;
        for(int i=k+1;i<n;i++)
        {
            if(a[k]==a[i])//counting the value occur.
            {
                c++;
                if(c==2)
                {
                    b[s]=a[k];
                    s++;
                }
            }
            else
            {
                k=i-1; //setting the value of k to the last index where he value was same.
                break;
            }
        }
        cout<<a[k]<<"="<<c<<endl; //printing the number of repeat.
        if(a[k]==a[n-1]){break;} //if the last index has the same value then it will break, to avoid further looping.
    }
    cout<<"The numbers which are more than once are: \n";
    print_arr(b,s);//printing the numbers which are more than one.
    delete[] b;//deallocating the dynamic memory.
}

