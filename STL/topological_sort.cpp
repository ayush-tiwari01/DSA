#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N,E;
    cout<<"enter the number of vertices in the graph"<<endl;
    cin>>N;
    cout<<"enter the  number of edges in the graph";
    cin>>E;
    vector<int>adj[N];
    for(int i=1;i<=E;i++){
        cout<<"enter the edges"<<i<<" ";
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
    }
    for(int i=0;i<N;i++){
        cout<<i<<":";
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<",";
        }
        cout<<endl;
    }
    vector<int>in(N);
    vector<int>out(N);
    for(int i=0;i<N;i++){
        for(int j=0;j<adj[i].size();j++){
            in[adj[i][j]]++;
        }
        out[i]=adj[i].size();
        //out.push_back(num[i]);
    }
    cout<<"outdegree"<<endl;
    for(int i=0;i<N;i++){
        cout<<out[i]<<" ";
    }
    cout<<" indegree";
    cout<<endl;
      for(int i=0;i<N;i++){
        cout<<in[i]<<" ";
    }
    
}