#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
int main()
{
    int total_node,total_edge;
    cout<<"Enter the total number of nodes: ";
    cin>>total_node;
    cout<<"Enter the total number of edges: ";
    cin>>total_edge;
    vector<int> edge[total_node];

    int a,b;
    for(int i=0;i<total_edge;i++)
    {
        cout<<"Enter the node which are connected: \n";
        cin>>a>>b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }
    cout<<"\nAdjacency list: \n";
    for(int i=0;i<total_node;i++)
    {
        cout<<i<<": ";
        for(int j=0;j<edge[i].size();j++)
        {
            cout<<edge[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nAdjacency matrix: \n";
    int matrix[total_node][total_node];
    for(int i=0;i<total_node;i++)
    {
        for(int j=0;j<total_node;j++)
            {
                matrix[i][j]=0;
            }
    }
    for(int i=0;i<total_node;i++)
    {
        for(int j=0;j<edge[i].size();j++)
        {
            matrix[i][edge[i][j]]=1;
        }
    }
    cout<<endl;
    for(int i=0;i<total_node;i++)
    {
        for(int j=0;j<total_node;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    //DFS
    cout<<endl;
    cout<<"DFS\tParent\n";
    stack<int> help;
    vector<bool> visited(total_node,false);
    help.push(0);
    vector<int> parent(total_node,-1);
    visited[0]=true;
    while(help.empty()==false)
    {
        int top=help.top();
        cout<<top<<"\t"<<parent[top];
        cout<<endl;
        help.pop();
        for(int i=edge[top].size()-1;i>=0;i--)
        {
            int current=edge[top][i];
            if(visited[current]==false)
            {
                help.push(edge[top][i]);
                visited[current]=true;
            }
            parent[current]=top;
        }
    }

    return 0;
}
