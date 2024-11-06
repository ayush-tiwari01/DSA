#include<iostream>
using namespace std;
#include<vector>
#include<queue>

#include<algorithm>
void dfs(int i,vector<int>AdjList[], vector<int>&status){
     status[i]=1;
     cout<<i<<" ";
     for(int j=0;j<AdjList[i].size();j++){
        int x=AdjList[i][j];
        if(status[x]==0){
            dfs(x,AdjList,status);
        }
     }
}
int main()
{
    int N,E,a,b;

    cout<<"Enter the no of vertices in the graph:";
    cin>>N;
    cout<<"Enter the no of edges in the graph:";
    cin>>E;

    vector<int>AdjList[N];

    for(int i=1;i<=E;i++)
    {
        cout<<"Enter the end point of edge "<<i;
        cin>>a>>b;
        AdjList[a].push_back(b);
    }

vector<int>status(N);
    for(int i=0;i<N;i++)
    {
        cout<<i<<": ";
        for(int j=0;j<AdjList[i].size();j++)
            cout<<AdjList[i][j]<<", ";

        cout<<endl;
    }
    for(int i=0;i<N;i++){
        if(status[i]==0){
        dfs(i,AdjList,status);
        }
    }
}