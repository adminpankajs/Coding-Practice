#include<stdio.h>
#include<conio.h>
    
int main(){
    int len1,flag=0,temp;
    printf("Enter the size of arr1 : ");
    scanf("%d",&len1);
    int arr1[len1];
    for (int i = 0; i < len1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    for (int i = 0; i < len1; i++)
    {
        if(flag==0)
        {
            temp = arr1[i];
            flag++;
        }
        else
        {
            temp = temp + arr1[i];
            arr1[i] = temp - arr1[i];
            temp = temp - arr1[i];
        }
        if(i==(len1-1))
        {
            arr1[0] = temp;
        }
    }
    for (int i = 0; i < len1; i++)
    {
        printf("%d ",arr1[i]);
    }  
    return 0;
}