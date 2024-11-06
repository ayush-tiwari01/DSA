#include<iostream>
#include<vector>
#include<queue>

#include<algorithm>

using namespace std;
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
        AdjList[b].push_back(a);
    }


    for(int i=0;i<N;i++)
    {
        cout<<i<<": ";
        for(int j=0;j<AdjList[i].size();j++)
            cout<<AdjList[i][j]<<", ";

        cout<<endl;
    }
    queue<int>Q;
    vector<int>status(N,0);
    Q.push(0);
    status[0]=1;

    while(Q.empty()!=1)
    {
        int x;
        x=Q.front();
        for(int i=0;i<AdjList[x].size();i++)
        {
            if(status[AdjList[x][i]]==0)
            {
                status[AdjList[x][i]]=1;
                Q.push(AdjList[x][i]);
            }
        }
        Q.pop();
        cout<<x<<" ";
    }

return 0;
}