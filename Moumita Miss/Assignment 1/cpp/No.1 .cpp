#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

 void print_array(int a[],int n)
 {
     for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
 }
int main()
{
    int n=0,temp=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    int array_1[n];
    srand(time(0));
    //taking input in the array
    for(int i=0;i<n;i++)
    {
        array_1[i]=rand()%51 +1;
    }
    //printing the array
    cout<<"Array before sorting\n";
    print_array(array_1,n);
    //sorting the array
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(array_1[j+1]>array_1[j])
               {
                  temp=array_1[j];
                  array_1[j]=array_1[j+1];
                  array_1[j+1]=temp;
               }
        }
    }
    //printing the array
    cout<<"Array after sorting\n";
    print_array(array_1,n);


    return 0;
}
