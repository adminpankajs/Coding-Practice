#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct job {
    int id;
    int deadline;
    int profit;
};

bool comparator(struct job j1, job j2)
{
    return(j1.profit > j2.profit);
}

void max_profit(int id[], int deadline[], int profit[], int n)
{
    struct job jobs[n];
    for (int i = 0; i < n; i++)
    {
        jobs[i].id = id[i];
        jobs[i].deadline = deadline[i];
        jobs[i].profit = profit[i];
    }
    sort(jobs, jobs+n, comparator);
    vector<int> j;
    int mydeadline = 0;
    int myprofit = jobs[0].profit;
    for (int i = 0; i < n; i++)
    {
        if(mydeadline<jobs[i].deadline)
        {
            j.push_back(jobs[i].profit);
            mydeadline++;
        }
    }
    int totalprofit = 0;
    for (int i = 0; i < j.size(); i++)
    {
        cout<<j[i]<<" ";
        totalprofit += j[i];
    }
    cout<<"Total Profit : "<<totalprofit<<endl;
    
}
int main(){
    int id[] = {1,2,3,4};
    int deadline[] = {4,1,1,1};
    int profit[] = {20,10,40,30};
    int n = sizeof(id)/sizeof(int);
    max_profit(id,deadline,profit,n);
    return 0;
}