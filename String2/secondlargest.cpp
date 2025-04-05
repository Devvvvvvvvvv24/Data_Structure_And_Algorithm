#include<iostream>
using namespace std;

int main(){
   string str="012349567";
   char max1='!';
   char max2='!';
   for(int i=0;i<str.length();i++){
    if(str[i]>max1){
        max2=max1;
        max1=str[i];
    }
    else if(str[i]>max2 && str[i]!=max1){
        max2=str[i];
    }
   }
   cout<<max2;
}