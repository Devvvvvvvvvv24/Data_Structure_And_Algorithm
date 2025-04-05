class Solution {
public:
    int partition(vector<int>&arr,int si,int ei){
    int pivotele=arr[(si+ei)/2];
    int count=0;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2)continue;
        if(arr[i]<=pivotele)count++;
    }
    int pivotidx=count+si;
    swap(arr[(si+ei)/2],arr[pivotidx]);
    int i=si;
    int j=ei;
    while(i<pivotidx &&j>pivotidx){
        if(arr[i]<=pivotele)i++;
        if(arr[j]>pivotele)j--;
        else if(arr[i]>pivotele && arr[j]<=pivotele){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
}
    int kthLar(vector<int>&nums,int si,int ei,int k){
        // if(nums.size()==1)return nums[0];
        int pi=partition(nums,si,ei);
        if(pi==(nums.size()-k))return nums[pi];
        else if(pi<(nums.size()-k))return kthLar(nums,pi+1,ei,k);
        else return kthLar(nums,si,pi-1,k);
    }
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        return kthLar(nums,0,n-1,k);
    }
};