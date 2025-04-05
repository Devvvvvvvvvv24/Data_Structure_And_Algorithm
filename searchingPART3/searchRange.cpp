    vector<int> searchRange(vector<int>&arr, int tar) {
      
        vector<int>v(2,-1);
        int n=arr.size();
        int lo=0;
        int hi=n-1;
        while(lo<=hi){
            int mi=lo+(hi-lo)/2;
            if(arr[mid]==tar){
                if(mid==0){
                 v[0]=mid;
                    break;
                }
            else if(arr[mid]==tar){
                if(arr[mid-1]==tar){
                    hi=mid-1;
                }
                else{
                    v[0]=mid;
                    break;
                }
            }
                else if(arr[mid]>tar)hi=mid-1;
                else lo=mid+1;
            }
            lo=0;
            hi=n-1;
            while(lo<=hi){
                int mid=lo+(hi-lo)/2;
                if(arr[mid]==tar){
                    if(mid==n-1){
                        v[1]=mid;
                    }
                    else if(arr[mid+1]==tar){
                        lo=mid+1;
                    }
                    else {
                        v[1]=mid;
                        break;
                    }
                }
                else if(arr[mid]>tar)hi=mid-1;
                else lo=mid+1;
            }