#include<stdio.h>
#include<conio.h>
    
int main(){
    int len,k;
    printf("Enter the size of the array : ");
    scanf("%d",&len);
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < len; i++)
    {
        for (int j = i+1; j < len; j++)
        {
            if(arr[i]>arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
        
    }
    printf("Enter the k to find kth smallest term : ");
    scanf("%d",&k);
    printf("Term : %d\n",arr[k-1]);
    printf("End !!");
    return 0;
}