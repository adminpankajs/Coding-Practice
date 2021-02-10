#include<stdio.h>
#include<conio.h>
    
int main(){
    int len;
    printf("Enter the size of the array : ");
    scanf("%d",&len);
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Reversed array : \n");
    for (int i = (len-1); i >= 0; i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}