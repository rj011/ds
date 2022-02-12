#include<iostream>
#include<queue>
using namespace std;
void bfs(int a[][7],int start, int n)
{

     int i=start;
     queue<int>Q;
    int visited[7] ={0};
    cout<<i<<flush;
    Q.emplace(i);
    visited[i]=1;
    while(!Q.empty())
    {
        i=Q.front();
        for(int j=1;j<=n;j++)
        {
            if(a[i][j]==1 && visited[j]==0)
            {
                count<<j<<flush;
                Q.emplace(j);
                visited[j]=1;

            }
        }

    }

}
