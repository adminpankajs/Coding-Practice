#include<stdio.h>
#include<conio.h>
    
int main(){
    int len,min=NULL,max=NULL;
    printf("Enter the size of the array : ");
    scanf("%d",&len);
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        scanf("%d",&arr[i]);
        if(i==0)
        {
            min=arr[i];
            max=arr[i];
        }
        else
        {
            if(arr[i]>max)
                max=arr[i];
            if(arr[i]<min)
                min=arr[i];
        }
    }
    printf("Max : %d \n",max);
    printf("Min : %d \n",min);
    return 0;
}