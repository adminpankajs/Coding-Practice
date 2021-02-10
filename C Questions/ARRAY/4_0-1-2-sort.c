#include<stdio.h>
#include<conio.h>
    
int main(){
    int len, count[3];
    printf("Enter the size of the array : ");
    scanf("%d",&len);
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        scanf("%d",&arr[i]);
        count[arr[i]]++;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < count[i]; j++)
        {
            printf("%d ",i);
        }
    }
    return 0;
}