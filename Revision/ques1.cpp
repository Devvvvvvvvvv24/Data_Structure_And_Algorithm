#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int evensum=0;
    int oddsum=0;
    for(int i=1;i<=6;i++){
        if(i%2==0)evensum+=arr[i];
        else oddsum+=arr[i];
    }
    int ans=evensum-oddsum;
    cout<<ans<<endl;
}