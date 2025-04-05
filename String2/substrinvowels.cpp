#include<iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    int count=0;
    int ans=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='a' or str[i]=='e' or str[i]=='i' or str[i]=='o' or str[i]=='u')count++;
        else{
            ans+=count*(count+1)/2;//foumula to calculate no. of substring 
            count=0;
        }
    }
    ans+=count*(count+1)/2;//last part jo rehe jayega 
    cout<<ans;
}