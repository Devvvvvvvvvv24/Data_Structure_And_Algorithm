#include<iostream>
using namespace std;

int main(){
   string arr[]={"23411","345","789","3456","3214","4342"};
   int max=stoi(arr[0]);
   int idx=-1;
   for(int i=1;i<=5;i++){
    int x=stoi(arr[i]);
    if(max<x){
        max=x;
        idx=i;
    }
   }
   cout<<max<<" "<<idx;
}