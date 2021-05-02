#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){
  int n = 7;
  int m = 3;
  int s[] = {2,3,5};
  int arr[8] = {0};
  arr[0] = 1;
  for (int i = 0; i < m; i++)
  {
    int temp = s[i];
    for (int j = 0; j <= n; j++)
    {
      if(j-temp>=0)
      {
        arr[j] += arr[j-temp];
      }
    }
  }
  cout<<endl<<endl;
  for (int i = 0; i <= n; i++)
  {
    cout<<arr[i]<<" ";
  }
  
  return 0;
}
