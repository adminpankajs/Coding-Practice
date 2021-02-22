#include<stio.h>
#include<conio.h>
    
int main(){
    int len,sum,temp=0,flag=0;
    printf("Enter the size of arr : ");
    scanf("%d",&len);
    int arr[len];
    for (int i = 0; i < len; i++)
        scanf("%d",&arr[i]);
    for (int i = 0; i < len; i++)
    {
        if(arr[i]>=0)
        {
            temp += arr[i];
        }
        else
        {
            temp = 0;
        }
        if(temp>sum)
            sum = temp;
    }
    printf("Sum = %d ",sum);
    return 0;
}