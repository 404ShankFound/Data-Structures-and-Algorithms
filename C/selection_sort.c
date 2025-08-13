#include<stdio.h>
int main(){
    int n;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
    int temp;
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i;j<n-1;j++){
            
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        if(min!=i){
                temp=arr[i];
                arr[i]=arr[min];
                arr[min]=temp;
            }
    }
    for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
    return 0;
}