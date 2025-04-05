#include<iostream>
using namespace std;

int secondlargest(int arr[],int n){
    int lar=INT_MIN;
    int slar;
    for(int i=0;i<n;i++){
        if(arr[i]>lar){
            tlar=slar
            slar=lar;
            lar=arr[i];
        }
        else if(arr[i]>slar &&arr[i]!=lar){
            tlar=slar;
          slar=arr[i];
        }
    return slar;
}
int secondsmallest(int arr[],int n){
    int small=INT_MAX;
    int ssmall=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<small){
            ssmall=small;
            small=arr[i];
        }
         if(arr[i]<ssmall &&arr[i]!=small){
          ssmall=arr[i];
        }
    }
    return ssmall;
}
int main(){
    int arr[]={4,3,5,6,2,1};
    int n=6;
    int sl=secondlargest(arr,n);
    int ss=secondsmallest(arr,n);
    cout<<sl<<" "<<ss<<endl;
}