#include <iostream>
#include "queue"
using namespace std;

void bfs(int a[][7], int start, int n)
{
    int i=start;
    struct Queue q;
    int visited[7] ={0};
    printf("%d",i);
    enqueue(&q,i);
    visited[i]=1;
    while(!isEmpty())
    {
        i=dequeue(&q);
        for(int j=1;j<=n;j++)
        {
            if(a[i][j]==1 && visited[j]==0)
            {
                printf("%d",j);
                enquque(&q,j);
                visited[j]=1;

            }
        }

    }

}

int main()
{
    int a[7][7] = {{0,0,0,0,0,0,0},{0,0,1,1,0,0,0},{0,1,0,0,1,0,0},{0,1,0,0,1,0,0},{0,0,1,1,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};
    bfs(a,1,7);
    return 0;
}
