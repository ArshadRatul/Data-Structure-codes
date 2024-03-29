#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int total_node, total_edge;
    cin>>total_node>>total_edge;
    vector<int> edges[total_node];
    int a,b;
    for(int i=0; i<total_edge; i++)
    {
        cin>>a>>b;
        edges[a].push_back(b);
        edges[b].push_back(a);
    }
    int ar[total_node];
    for(int i=0; i<total_node; i++) {
        cout<< "adjacency list of "<<i<< ": ";
        for(int j=0; j<edges[i].size(); j++) {
            cout<<edges[i][j]<< " ";
        }
        ar[i]=edges[i].size();
        cout<<endl;
    }
    for(int i=0;i<total_node;i++){cout<<"\ndegree of <<"<<i<<": "<<ar[i];}
    return 0;
}
