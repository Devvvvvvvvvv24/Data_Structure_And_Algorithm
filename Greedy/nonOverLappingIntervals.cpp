#include<iostream>
#include<vector>
using namespace std;

bool cmp(vector<int>&a,vector<int>&b){
    return a[1]<b[1];
}
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int ans=0;
        sort(intervals.begin(),intervals.end(),cmp);
        int n=intervals.size();
        int endtime=intervals[0][1];
        for(int i=1;i<n;i++){
            if(intervals[i][0]<endtime){
                ans++;
            }
            else{
                endtime=intervals[i][1];
            }
        }
        return ans;
    }
};