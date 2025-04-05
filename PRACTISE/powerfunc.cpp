#include<iostream>
using namespace std;

int pwerr(int n,int a){
    if(a==0)return 1;
    if(a==1)return n;
    int ans=pwerr(n,a/2);
    if(a%2==0){
        return ans*ans;
    }
    else {
        return ans*ans*n;
    }

}
int main(){
    int n,a;
    cin>>n>>a;
    cout<<pwerr(n,a);
}