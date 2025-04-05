#include<algorithm>
#include<iostream>
using namespace std;

void subsetdup(string str,string ans,bool flag){
 if(str==""){
    cout<<ans<<endl;
    return;
 }
 char ch=str[0];
 if(str.size()==1){
   if(flag==true)subsetdup(str.substr(1),ans+ch,true);
   subsetdup(str.substr(1),ans,true);
   return;
 }
 char dh=str[1];
 if(ch==dh){
    if(flag==true)subsetdup(str.substr(1),ans+ch,true);
    subsetdup(str.substr(1),ans,false);
 }
 else{
    if(flag==true)subsetdup(str.substr(1),ans+ch,true);
     subsetdup(str.substr(1),ans,true);
 }
}
int main(){
    string str="aba";
    sort(str.begin(),str.end());
    subsetdup(str,"",true);;

}