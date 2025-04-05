#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s,p;
    cin>>s>>p;
    vector<int>cnt_s(26,0),cnt_p(26,0);
    int n=s.size();
    int m=p.size();
    if(m>n){
        cout<<"no ans exist"<<endl;
    }
    else{
     vector<int>answer;
     for(int i=0;i<m;i++)cnt_p[p[i]-'a']++;
     int i=0;
     for(;i<m;i++){
        cnt_s[s[i]-'a']++;
     }
     bool f1=true;
     for(int j=0;j<26;j++){
        if(cnt_s[j]!=cnt_p[j]){
            f1=false;
            break;
        }
     }
     if(f1)answer.push_back(0);
     while(i<n){
        cnt_s[s[i-m]-'a']--;
        cnt_s[s[i]-'a']++;
        bool f1=true;
        for(int j=0;j<26;j++){
        if(cnt_s[j]!=cnt_p[j]){
            f1=false;
            break;
        }
     }
     if(f1)answer.push_back(i-m+1);
     i++;
     }
     cout<<"the indices from where p anagram begins are "<<endl;
     for(auto x:answer)cout<<x<<endl;
    }
}