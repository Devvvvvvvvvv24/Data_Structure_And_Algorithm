 int search(vector<int>& arr, int target) {
      int n=arr.size();
      int lo=0;
      int hi=n-1;
      int pivtidx=-1;
      while(lo<=hi){
          int mid=lo+(hi-lo)/2;
          if(mid==0)lo=mid+1;
          else if(mid==n-1)hi=mid-1;
          else if(arr[mid]<arr[mid-1] && arr[mid]<arr[mid+1]){
              pivtidx=mid;
              break;
          }
          else if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
              pivtidx=mid+1;
              break;
          }
          else if(arr[mid]>arr[hi])lo=mid+1;
          else hi=mid-1;
      }
      if(pivtidx==-1){
           lo=0;
           hi=n-1;
           while(lo<=hi){
               int mid=lo+(hi-lo)/2;
               if(arr[mid]==target)return mid;
               else if(arr[mid]>target)hi=mid-1;
               else lo=mid+1;
           }

          }
        if(target>=arr[0] &&target<=arr[pivtidx-1]){
            lo=0;
            hi=pivtidx-1;
            while(lo<=hi){
                int mid=lo+(hi-lo)/2;
               if(arr[mid]==target)return mid;
               else if(arr[mid]>target)hi=mid-1;
               else lo=mid+1;
            }
        }
        else{
           lo=pivtidx;
           hi=n-1;
            while(lo<=hi){
            int mid=lo+(hi-lo)/2;
               if(arr[mid]==target)return mid;
               else if(arr[mid]>target)hi=mid-1;
                else lo=mid+1;
        }
        }
        return pivtidx;