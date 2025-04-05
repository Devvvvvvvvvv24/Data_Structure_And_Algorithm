#include<iostream>
using namespace std;

void mergesort(int arr1[],int n1,int arr2[],int n2,int arr3[],int m){
int i=0;
int j=0;
int k=0;
while(i<n1 &&j<n2 ){
    if(arr1[i]<arr2[j]){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    else {
        arr3[k]=arr2[j];
        j++;
        k++;
    }
    if(i==n1){
        while(j<n1){
        arr3[k]=arr2[j];
        j++;
        k++;
        }
    if(j==n2){
        while(i<n1){
            arr3[k]=arr1[i];
        i++;
        k++;
        }
    }    
    }
}
}
int main(){
    int arr1[]={1,3,5,7,8};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={2,4,9,11};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int m=n1+n2;
    int arr3[m];
    mergesort(arr1,n1,arr2,n2,arr3,m);
    for(int i=0;i<m;i++){
        cout<<arr3[i]<<" ";
    }

}