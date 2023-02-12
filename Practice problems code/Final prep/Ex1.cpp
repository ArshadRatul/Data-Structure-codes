#include<iostream>
#include<stdlib.h>
using namespace std;


int main()
{
    int* a=new int[5+6];
    int* b=new int[6];
    for(int i=0;i<11;i++)
    {
        if(i<5)
        {
            *a=rand()%20;
        }
        else{*a=NULL;}
    }

    delete []a;
    delete []b;
    return 0;
}
