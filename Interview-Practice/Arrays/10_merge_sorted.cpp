#include <bits/stdc++.h>

using namespace std;


int main()
{
    int arr1[] = {2, 5, 9};
    int arr2[] = {12, 19, 23};
    int size_1 = sizeof(arr1)/sizeof(arr1[0]);
    int size_2 = sizeof(arr2)/sizeof(arr2[0]);
    int arr3[size_1+size_2];
    int pointer_1 = 0;
    int pointer_2 = 0;
    int pointer_3 = 0;
    while(pointer_1 < size_1 + size_2 - 1)
    {
        if(arr1[pointer_1] < arr2[pointer_2] && pointer_1<size_1-1)
        {
            arr3[pointer_3++] = arr1[pointer_1];
            if(pointer_1 < size_1-1)
                pointer_1++;
        }
        else
        {
            arr3[pointer_3++] = arr2[pointer_2];
            if(pointer_2 < size_2-1)
                pointer_2++;
        }
    }
    for(auto x : arr3)
        cout<<x<<" ";
    return 0;
}