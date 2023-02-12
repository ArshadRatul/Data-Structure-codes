#include<iostream>

using namespace std;

int main()
{
    int M= 4, s=1;
	int** A = new int*[M];
	for (int i = 0; i < M; i++)
		A[i] = new int[i+1];

	for (int i = 0; i < M; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            A[i][j] = s;
            s++;
        }
    }

    for (int i = 0; i < M; i++)
    {

        for (int j = 0; j <=i; j++)
        {
            cout<<A[i][j]<< " ";
        }
        cout<<endl;
    }

	for (int i = 0; i < M; i++)
    {
        delete[] A[i];
    }
	delete[] A;
    return 0;
}
