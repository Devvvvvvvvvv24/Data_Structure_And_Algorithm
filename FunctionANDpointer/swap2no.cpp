#include<iostream>
using namespace std;
void swapp(int &x,int &y){
    x+=y;
    y=x-y;
    x-=y;
}
int main(){
    int x,y;
    cin>>x>>y;
    swapp(x,y);
    cout<<x<<" "<<y;
}