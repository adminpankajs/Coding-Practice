#include<stdio.h>
#include<conio.h>
    
int main(){
    int m=0,n=0,len1,len2,z=0;
    int arr3[100];
    printf("Enter the size of first array : ");
    scanf("%d",&len1);
    int arr1[len1];
    for (int i = 0; i < len1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the size of second array : ");
    scanf("%d",&len2);
    int arr2[len2];
    for (int i = 0; i < len2; i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("\nUnion : ");
    while(m<len1 && n<len2)
    {
        if(arr1[m] < arr2[n])
            printf("%d ",arr1[m++]);
        else if(arr1[m] > arr2[n])
            printf("%d ",arr2[n++]);
        else
        {
            arr3[z++] = arr1[m];
            printf("%d ",arr1[m++]);
            n++;
        }
    }

    while(m<len1)
        printf("%d ", arr1[m++]);
    while(n<len2)
        printf("%d ", arr2[n++]);
    printf("\nIntersection : ");
    for (int i = 0; i < z; i++)
    {
        printf("%d ",arr3[i]);
    }
    printf("\nEnded !!");
    return 0;
}