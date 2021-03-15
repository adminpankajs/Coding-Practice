#include<iostream>
#include<algorithm>
using namespace std;

struct item{
    int value;
    int weight;
};

bool comparator(struct item a, struct item b)
{
    double r1 = (double)a.value/(double)a.weight;
    double r2 = (double)b.value/(double)b.weight;
    return r1 > r2;
}

void fractionalknapsack(int w, item arr[], int n)
{
    sort(arr,arr+n,comparator);
    int currweight = 0;
    double profit = 0.0;
    for (int i = 0; i < n; i++)
    {
        if(currweight + arr[i].weight <= w)
        {
            currweight += arr[i].weight;
            profit += arr[i].value;
        }
        else
        {
            int remain = w - arr[i].weight;
            profit += arr[i].value*((double)remain/(double)arr[i].weight);
            break;
        }
    }
    cout<<"PROFIT : "<<profit<<endl;
    
}
int main(){
    int w = 50;
    item arr[] = { {60,10},{100,20},{120,30}};
    int n = sizeof(arr)/sizeof(arr[0]);
    fractionalknapsack(w,arr,n);
    return 0;
}