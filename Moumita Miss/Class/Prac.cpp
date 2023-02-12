#include<iostream>
using namespace std;
int main()
{
    int r=3,c=3,cou=0;
    string** row=new string* [r];
    for(int i=0;i<c;i++)
    {
        row[i]=new string [c];
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"["<<i<<"]["<<j<<"]=";
            cin>>row[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<row[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(row[i][j]=="positive"){cou++;}
        }
    }
    cout<<"Total positive cases: "<<cou;
    for(int i=0;i<c;i++)
    {
        delete[] row[i];
    }
    delete[] row;

    return 0;
}
