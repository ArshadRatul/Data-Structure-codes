#include<iostream>
#include<vector>

using namespace std;

int total_node, total_edge;
vector<int> edges[100];
vector<bool>visited(100,false);

void visit(int current_node)
{
    cout<<current_node<<endl;
    for(int i=0;i<edges[current_node].size();i++)
    {
        int new_node = edges[current_node][i];
        if(visited[new_node]==false)
        {
            visited[new_node] = true;
            visit(new_node);
        }
    }
}

int main()
{
    cin>>total_node>>total_edge;

    int a,b;
    for(int i=0; i<total_edge; i++)
    {
        cin>>a>>b;
        edges[a].push_back(b);
        edges[b].push_back(a);
    }

    for(int i=0; i<total_node; i++) {
        cout<< "adjacency list of "<<i<< ": ";
        for(int j=0; j<edges[i].size(); j++) {
            cout<<edges[i][j]<< " ";
        }
        cout<<endl;
    }
    int starting_node = 0;
    visited[starting_node] = true;
    visit(starting_node);
}
