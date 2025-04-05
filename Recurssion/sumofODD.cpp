#include<iostream>
using namespace std;

void oddd(int a,int b,int &sum){
    if(a>b)return ;
    if(a==b){
        if(a%2!=0)sum+=a;
     return;
    }
    if(a%2!=0){
        sum+=a;
        oddd(a+2,b,sum);

    }
    else{
        oddd(a+1,b,sum);
    }
    //return sum;
}
int main(){
    int a,b;
    cin>>a>>b;
    int sum=0;

    oddd(a,b,sum);
    cout<<sum;
}