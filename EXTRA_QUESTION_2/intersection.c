#include<stdio.h>

int main(){
    int n1,n2;
    // cin>>n1>>n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
    int arr1[n1];
    int arr2[n2];
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }

  for(int i=0;i<n1;i++){
    int flag=0;
    for(int j=0;j<n2;j++){
     if(i!=j &&arr1[i]==arr2[j]){
        printf("%d",arr1[i]);
     }
    }
  }
  
  
}