#include<bits/stdc++.h>
using namespace std;

void short_sqr_arr(vector<int> &v){
    
    int left_ptr = 0;
    int right_ptr = v.size()-1;
    vector<int> ans;
    
    while(left_ptr<=right_ptr){
        if(abs(v[left_ptr])<abs(v[right_ptr])){
            ans.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;
        }
        else{
            ans.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
        }
    }
    
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    
}

int main(){
    
    int n;
    cin>>n;
    vector<int> v;
    
    for(int i=0; i<n; i++){
        int p;
        cin>>p;
        v.push_back(p);
    }
    
    short_sqr_arr(v);
}