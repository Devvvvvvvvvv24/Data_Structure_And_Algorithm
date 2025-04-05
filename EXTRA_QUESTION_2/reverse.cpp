#include<stdio.h>

int main(){
    int n1;
    // cin>>n1>>n2;
    scanf("%d",&n1);
    // scanf("%d",&n2);
    int arr1[n1];
    // int arr2[n2];
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
  int i=0;
  int j=n1-1;
  while(i<=j){
    int temp=arr1[i];
    arr1[i]=arr1[j];
    arr1[j]=temp;
    i++;
    j--;
  }
 for(int i=0;i<n1;i++){
        printf("%d ",arr1[i]);
    }

 
}