#include<iostream>
#include<vector>
using namespace std;

void sorts(vector<int>& v){
    int n=v.size();
    int low=0;
    int mid=0;
    int hig=n-1;
    while(mid<=hig){
        if(v[mid]==2){
            int temp=v[mid];
            v[mid]=v[hig];
            v[hig]=temp;
            //mid++;
            hig--;

        }
        else if(v[mid]==0){
            int temp=v[mid];
            v[mid]=v[low];
            v[low]=temp;
            mid++;
            low++;

        }
        else{
     mid++;
        }
    
    }
    return;
}
int main(){
vector<int>v;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
sorts(v);
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
}