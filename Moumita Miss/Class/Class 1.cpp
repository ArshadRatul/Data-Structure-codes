#include<iostream>
using namespace std;

int main()
{
    double a[3];
    int array_size = 3;
    for(int i=0; i<array_size; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<array_size; i++)
    {
        cout<<"roll: " <<(i+1) << " marks: "<<a[i]<<endl;

    }
    /*for(int i=1;i<=3;i++) {
        cout<<"roll " <<(i) << " marks "<<a[i-1]<<endl;
    }*/

    double sum = 0;
    for(int i=0; i<array_size; i++)
    {
        sum = sum + a[i];
    }
    cout<< "avg marks: "<<sum/array_size <<endl;

    //2 4 3
    //highest = 4
    // i = 3
    // a[i] = 3
    double highest = a[0];
    for(int i=0; i<array_size; i++) {
        if(a[i]>highest) {
            highest = a[i];
        }
    }
    cout<<"highest marks: "<<highest<<endl;
    double lowest = a[0];
    for(int i=0; i<array_size; i++) {
        if(a[i]<lowest) {
            lowest = a[i];
        }
    }
    cout<<"lowest marks: "<<lowest<<endl;

    for(int i=0; i<array_size;i++)
    {
        if(a[i]==20)
        {
            cout<<"\nRoll who got full =" <<i+1;
        }
    }


}
