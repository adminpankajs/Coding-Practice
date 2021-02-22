#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr1[] = {10,12};
    int arr2[] = {5,18,20};
    int size1 = 2;
    int size2 = 3;
    for (int i = 0; i < size1; i++)
    {
        if(arr1[i] > arr2[0])
        {
            arr1[i] = arr1[i] + arr2[0];
            arr2[0] = arr1[i] - arr2[0];
            arr1[i] = arr1[i] - arr2[0];
            sort(arr2, arr2 + size2);
        }
    }
    for (int i = 0; i < size1; i++)
    {
        cout<<arr1[i]<<" ";        
    }
    cout<<endl;
    for (int i = 0; i < size2; i++)
    {
        cout<<arr2[i]<<" ";
    }
}
