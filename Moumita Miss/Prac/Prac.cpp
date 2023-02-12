#include<iostream>
using namespace std;
struct team
{
    int id,goal=0;
};
int main()
{
    team** teams=new team*[2];
    for(int i=0;i<2;i++)
    {
        teams[i]=new team[10];
        for(int j=0;j<10;j++)
        {
            teams[i][j].id=j+1;
        }
    }
    int team_numer,p_id,s;
    do
    {
        cout<<"Enter 0 if the match finishes else enter the team number: ";
        cin>>s;
        if(s!=0)
        {
            team_numer=s;
            cout<<"Player ID: ";
            cin>>p_id;
            for(int i=0;i<2;i++)
            {
                if(i==team_numer-1)
                {
                    for(int j=0;j<10;j++)
                    {
                        if(teams[i][j].id==p_id)
                        {
                            teams[i][j].goal++;
                        }
                    }
                }
            }
        }
    }while(s!=0);
    int c1=0,c2=0;
    for (int i=0; i<2; i++)
    {
        cout<<"\nTeam "<<i+1<<": \n";
        cout<<"ID:   ";
        for (int j=0; j<10; j++)
        {
            cout<<teams[i][j].id<<" ";
        }
        cout<<endl;
        cout<<"Goal: ";
        for (int j=0; j<10; j++)
        {
            cout<<teams[i][j].goal<<" ";
            if(i==0)
            {
                c1=c1+teams[i][j].goal;
            }
            else if(i==1)
            {
                c2=c2+teams[i][j].goal;
            }
        }
        cout<<endl;
    }
    cout<<"\nTotal goal by team-1: "<<c1;
    cout<<"\nTotal goal by team-2: "<<c2;
    if(c1==c2){cout<<"\nMatch draw";}
    else if(c1>c2){cout<<"\nTeam 1 is the winner";}
    else{{cout<<"\nTeam 2 is the winner";}}

    return 0;
}
