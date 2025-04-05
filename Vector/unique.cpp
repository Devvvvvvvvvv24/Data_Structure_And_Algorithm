#include<iostream>
#include<vector>
using namespace std;


int main(){
int arr[]={1,2,2,3,2,1};
int n=sizeof(arr)/sizeof(arr[0]);
bool flag =true;
int j=n-1;
for(int i=0;i<n/2;i++){
    if(arr[i]!=arr[n-i-1]){ //arr[i]!=arr[j] j--;
        flag=false;
        break;
    }
}
if(flag)cout<<"palindrome "<<endl;
else cout<<" not "<<endl;
}