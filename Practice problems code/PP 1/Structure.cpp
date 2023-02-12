//No.1
#include<iostream>
using namespace std;
struct point
{
    int x,y;
};
int main()
{
    point* ptr;
    ptr->x=12;
    ptr->y=15;
    cout<<ptr->x;

    return 0;
}
