#include<stdio.h>
#include<conio.h>
    
int main(){
    int len, count[3] = { 0 };
    printf("Enter the size of the array : ");
    scanf("%d",&len);
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        for(int j = i+1; j < len; j++)
        {
        scanf("%d",&arr[i]);
        count[arr[i]]++;
        }
    }
    return 0;
}