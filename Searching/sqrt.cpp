#include<iostream>
using namespace std;

int main(){
    int x=9;  //find sqrt of x
    for(int i=1;i<=x;i++)
    {
        if(i*i==x){
            cout<<i;
            break;
        }
    }

}