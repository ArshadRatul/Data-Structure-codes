#include<iostream>
#include<vector>
#include<queue>

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

    for(int i=0; i<total_node; i++) {
        cout<< "adjacency list of "<<i<< ": ";
        for(int j=0; j<edges[i].size(); j++) {
            cout<<edges[i][j]<< " ";
        }
        cout<<endl;
    }

    queue<int>myqueue;
    vector<bool>visited(total_node,false);
    myqueue.push(0);
    visited[0] = true;

    while(myqueue.empty()==false) {
        int top_node = myqueue.front();
        cout<<top_node<<endl;
        for(int i=0; i<edges[top_node].size(); i++) {
            int current_node = edges[top_node][i];
            if(visited[current_node]==false) {
                myqueue.push(current_node);
                visited[current_node] = true;
            }
        }
        myqueue.pop();
    }
}

