#include<stdio.h>
#include<conio.h>
    
int main(){
    int i = 0,jump = 0;
    int arr[11] = {1,3,5,8,9,2,6,7,6,8,9};
    int myval = arr[0];
    int prev = arr[0];
    int next = arr[1];
    for (int i = 0; i < 11; i++)
    {
        prev = arr[i];
        next = arr[i+1];
        if((next<prev && prev>=myval) || (arr[i-1]<arr[i] && i==10 && arr[i]>=myval))
        {   
            myval = prev;
            printf("DEBUG : %d\n",myval);
            jump++;
        }
        if(myval == arr[i] && arr[i] == arr[10])
        {
            printf("Success\n",jump);
        }
    }
    printf("Jumps -> %d",jump);
    return 0;
}