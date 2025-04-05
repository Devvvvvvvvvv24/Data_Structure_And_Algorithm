 for(int j=0;j<n;j++){
        for(int i=0;i<n/2;i++){
            swap(arr[i][j],arr[n-i-1][j]);
        }
    }