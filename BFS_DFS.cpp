#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
}
void printGraph(vector<int> adj[], int v)
{
    for (int i = 0; i<v;i++) 
    {
        cout <<"Adjacency list of vertex "<<i<<" is as :- "<<i<<" ";
        for (auto x : adj[i])
            cout << "-> " << x;
        cout<<endl;
    }
}
void BFS(vector<int> adj[], int v,int source) 
{
    bool visited[v]={0};
    int visi=0;
    queue<int> q;
    q.push(source);
    visited[source]=1;
    while(q.empty()==false)
    {
        int t=q.front();
        q.pop();
        visi++;
        if(visi==v)
            cout<<t;
        else
            cout<<t<<"->";
        for(int v:adj[t])
        {
            if(visited[v]==false)
            {
                visited[v]=1;
                q.push(v);
            }
        }
    }
    cout<<endl;
}
void DFS(vector<int> adj[], int v,int source,bool visited[])  
{
    visited[source]=1;
    cout<<source<<" ";
    for(auto i=adj[source].begin();i<adj[source].end();i++)
    {
        int cur=*i;
        if(visited[cur]==0)
            DFS(adj,v,cur,visited);
    }
}
void DFS(vector<int> adj[],int v,int source)  // Using Stack
{
    bool visited[v]={0};
    stack<int> s;
    visited[source]=1;
    s.push(source);
    while(s.empty()==false)
    {
         int t=s.top();
         s.pop();
         cout<<t<<" ";
         for(int i:adj[t])
         {
             if(visited[i]==0)
             {
                 visited[i]=1;
                 s.push(i);
             }
         }
    }
}
int main()
{
    int v;
    cout<<"Enter No. of Vertices : ";
    cin>>v;
    vector<int> adj[v];
    char ch='y';
    while(ch=='y')
    {
        int p1,p2;
        cout<<"Enter the two edges for connection : ";
        cin>>p1>>p2;
        addedge(adj,p1,p2);
        addedge(adj,p2,p1);
        cout<<"Do you want to enter more edges press(y) : ";
        cin>>ch;
    }
    cout<<"Graph Connections Are !!!"<<endl;
    printGraph(adj,v);
    cout<<"BFS Traversal is : ";
    BFS(adj,v,0);  // Here assuming 0 as starting vertex
    bool visited[v]={0}; // Visited Array for DFS recursive Calls.
    cout<<"DFS using recursion : ";
    DFS(adj,v,0,visited);
    cout<<endl;
    cout<<"DFS using Stack : ";
    DFS(adj,v,0);
}

