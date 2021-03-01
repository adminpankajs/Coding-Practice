#include<iostream>
#include<vector>
using namespace std;
    
int main(){
    vector <int> n1 = {1,5,10,20,40,80}; 
    vector <int> n2 = {6,7,20,80,100}; 
    vector <int> n3 = {3,4,15,20,30,70,80,120};
    int p=0,q=0,r=0;
    while(p!=n1.size() && q!=n2.size() && r!=n3.size())
    {
        if (n1[p] == n2[q] && n2[q] == n3[r])
        {
            cout<<n1[p]<<" ";
            p++;
            q++;
            r++;
        }
        else if (n1[p] < n2[q])
        {
            p++;
        }
        else if(n2[q] < n3[r])
        {
            q++;
        }
        else
            r++;
    }
    return 0;
}