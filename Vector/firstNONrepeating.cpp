#include<iostream>
#include<vector>
using namespace std;

void firstNONrepeating(vector<int>&arr){
    int n=arr.size();
   bool flag=false;
    for(int i=0;i<n;i++){
         int j;
        for(j=0;j<n;j++){
            if(i!=j &&arr[i]==arr[j])break;
            
        }
        if(j==n){
            cout<<arr[i];
            flag = true;
            break;
        }
    }
    if(!flag)cout<<"no repeating element"<<endl;
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;
    firstNONrepeating(v);
}