#include<stdio.h>
void rev_arr(int *arr,int size){
    int *start = arr;
    int *end= arr+size-1;
    while(start<end){
        int temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}
int main()
{
    int tot;
    printf("Enter total number of array elements:");scanf("%d",&tot);
    int arr[tot];
    printf("Enter the array elements:");
    for (int i=0;i<tot;i++){
        scanf(" %d",&arr[i]);
    }printf("\n");

    printf("Before reverse:");
    for (int i=0;i<tot;i++){
        printf("%d ",arr[i]);
    }printf("\n");
    rev_arr(arr,tot);

    printf("After reverse:");
    for (int i=0;i<tot;i++){
        printf("%d ",arr[i]);
    }printf("\n");

}