#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;

int main(){
string str="dev is a good boy he is a billionaire he he shold be obident person";
stringstream ss(str);
string temp;
vector<string>v;
while(ss>>temp){
    v.push_back(temp);
}
sort(v.begin(),v.end());

int maxcount=1;
int count=1;
for(int i=1;i<v.size();i++){
     if(v[i]==v[i-1])count++;
     else count=1;
     if(maxcount<count)maxcount=count;
}
 count=1;
for(int i=1;i<v.size();i++){
     if(v[i]==v[i-1])count++;
     else count=1;
     if(maxcount==count){
        cout<<v[i]<<" "<<maxcount<<endl;
     }
}
}