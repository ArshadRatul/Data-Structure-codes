#include<iostream>
using namespace std;

int main()
{
    double marks[3][2];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin>>marks[i][j];
        }
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<marks[i][j]<< " ";
        }
        cout<<endl;
    }
    int sum=0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<1; j++)
        {
            sum=sum+marks[i][j];
        }
    }
    cout<<"Average= "<<sum/3.0;

}
