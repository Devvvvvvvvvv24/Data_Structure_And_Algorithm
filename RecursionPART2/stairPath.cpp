#include<iostream>
using namespace std;

int stairPATH(int n){
    if(n==1)return 1;
    else if(n==2)return 2;
    else  if(n==3)return 4;
    return stairPATH(n-1)+stairPATH(n-2)+stairPATH(n-3);
}
int main(){
//no.of ways
cout<<stairPATH(4);
}