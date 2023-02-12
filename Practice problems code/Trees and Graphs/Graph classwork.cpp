#include<iostream>
using namespace std;
int main()
{
    int a[4][4];

    for(int r=0;r<4;r++)//For taking input in array A.
    {
        for(int c=0;c<4;c++)
        {
            cout<<"Enter the weight of ["<<r+1<<"]["<<c+1<<"]: ";
            cin>>a[r][c];
        }
    }
    for(int r=0;r<4;r++)//Printing the values
    {
        for(int c=0;c<4;c++)
        {
            cout<<a[r][c]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
