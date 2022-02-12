#include <iostream>
#include<vector>
using namespace std;
void dfs(int a[][7],int start,int n)
{
    static int visited[7]={0};
    int i=start;
    if(visited[i]==0)
    {
        cout<<i<<flush;
        visited[i]=1;
        for(j=1;j<=n;j++)
        {
            if(a[i][j]==1 && visited[j]==0)
            {
                dfs(a,j,n);
            }
        }
    }

}
int main()
{

    return 0;
}
