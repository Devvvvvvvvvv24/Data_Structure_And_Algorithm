#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(vector<int>&a,vector<int>&b){
    return a[0]<b[0];
}
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp);
        vector< vector<int> >result;
        result.push_back(intervals[0]);
        int n=intervals.size();
        for(int i=1;i<n;i++){
            vector<int>curr=intervals[i];
            if(curr[0]<=result[result.size()-1][1]){
              result[result.size()-1][0]=min(curr[0],result[result.size()-1][0]);
              result[result.size()-1][1]=max(curr[1],result[result.size()-1][1]);
            }
            else{
                result.push_back(intervals[i]);
            }
        }
        return result;
    }
};