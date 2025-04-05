#include<iostream>
using namespace std;


int main(){
    int n,c,dig;
    cin>>n;
    cout<<n<<endl;
      c=n;
      while(n>0){
        int r=n%10;
        dig=(r*r*r)+dig;
        n/=10;
      }
      cout<<dig<<endl;
      if(dig==c){
        cout<<"armstrong number "<<endl;

      }
      else{
        cout<<"not "<<endl;
      }
}