#include<iostream>
using namespace std;

int largestrec(int width,int height, int tower)
{
    int i = 0;
    int towerpos[tower][2] = {0};
    int rec[height][width][2] = {0};
    cout<<"Enter the position of "<<tower<<" Towers : "<<endl;
    while(i<tower)
    {
        cout<<"Tower "<<i+1<<" pos : ";
        cin>>towerpos[i][0];
        cin>>towerpos[i][1];
        i++;
    }
    for (int i = 0; i < tower; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if(j==0)
            {
                for (int j = 0; j < height; j++)
                {
                    /* code */
                }
                
                rec[towerpos]
            }
            else

        }
        
    }
    
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            
        }
        
    }
    
    return 0;
}

int main()
{
    cout<<largestrec(15,8,3);
    return 0;
}