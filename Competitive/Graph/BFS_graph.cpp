#include<bits/stdc++.h>
using namespace std;


void addedge(int graph[5][5], int pos_i, int pos_j, int distance, bool bidir)
{
    graph[pos_i][pos_j] = distance;
    if(bidir)
        graph[pos_j][pos_i] = distance;
}
void bfstraverse(int graph[5][5])
{
    cout<<"Graph : \n"<<endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(graph[i][j]!=0)
            {
                cout<<setw(2)<<i<<" -> "<<setw(2)<<j<<" : "<<setw(2)<<graph[i][j]<<endl;
            }
            else if(i==j)
            {
                cout<<setw(2)<<i<<" -> "<<setw(2)<<j<<" : "<<setw(2)<<" 0"<<endl;
            }
        } 
    }
    
}
int main()
{
    int graph[5][5] = {0};
    addedge(graph,0,1,6,0);
    addedge(graph,1,4,12,1);
    addedge(graph,3,4,4,0);
    bfstraverse(graph);
}
