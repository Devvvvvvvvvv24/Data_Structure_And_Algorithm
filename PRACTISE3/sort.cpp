#include<iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
   int n=str.length();
    for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
        if(i!=j && str[j]>str[j+1]){
            swap(str[j],str[j+1]);
        }
     }
    }
    cout<<str;
}