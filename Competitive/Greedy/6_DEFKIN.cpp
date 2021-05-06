#include<iostream>
#include<algorithm>
using namespace std;

int largestrec(int width,int height, int tower)
{
    int i = 0;
    int maxh=0, maxw=0;
    int towerpos[2][tower] = {0};
    int rec[height][width][2] = {0};
    cout<<"Enter the position of "<<tower<<" Towers : "<<endl;
    while(i<tower)
    {
        cout<<"Tower "<<i+1<<" pos : ";
        cin>>towerpos[0][i];
        cin>>towerpos[1][i];
        i++;
    }
    sort(towerpos[0], towerpos[0]+tower);
    sort(towerpos[1], towerpos[1]+tower);
    cout<<"Tower is : "<<tower<<endl;
    for (int i = 0; i < tower-1; i++)
    {
        cout<<"Run.."<<i+1<<endl;
        if(maxh<(towerpos[0][i+1]-towerpos[0][i]-1))
        {
            maxh = towerpos[0][i+1]-towerpos[0][i]-1;
            cout<<maxh<<endl;
        }
        if(maxw<(towerpos[1][i+1]-towerpos[1][i])-1)
        {
            maxw = towerpos[1][i+1]-towerpos[1][i]-1;
            cout<<maxw<<endl;
        }
    }
    cout<<"Maximum Penalty : "<<(maxh*maxw)<<endl;
    return 0;
}

int main()
{
    cout<<largestrec(15,8,3);
    return 0;
}