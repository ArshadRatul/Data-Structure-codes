#include<iostrem>
using namespace std;
struct node
{
    string name,source,destination;
    double distance,fare;
};
//I will use 2d dynamic array because I want to store the destinations as row and columns as the busses
void covid(node** busses)
{
    for(int i=0;i<2;i++)//i=1=rajshahi and i=0=faridpur
    {
        if(i==1)
        {
            delete[] busses[i];
        }
        else
        {
            for(int j=0;j<5;j++)
            {
                if(busses[i][j].distance>100)
                {
                    busses[i][j].fare=buses[i][j].fare+((busses[i][j].fare*50)/100)
                }
            }
        }
    }
}
