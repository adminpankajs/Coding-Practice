#include<stdio.h>
#include<conio.h>
    
int main(){
    int len,var;
    printf("Enter the size of arr : ");
    scanf("%d",len);
    int arr[len];
    for(int i = 0; i < len; i++)
    {
        scanf("%d",&arr[len])
    }
    printf("Enter the variation : ");
    scanf("%d",var);
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < len; i++)
    {
        if(arr[i]>max)
            max = arr[i];
        if(arr[i]<min)
            min = arr[i];
    }
    if(max-var!<0)
        max -= var;
    if()
    return 0;
}