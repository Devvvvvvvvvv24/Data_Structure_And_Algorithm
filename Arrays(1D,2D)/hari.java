import java.lang.*;

public class hari{
    public static void main(String[] args){
        int[] arr={1,2,3,3,4,4,5,6,7,8,8,9};
        int n=10;
        for(int i=0;i<n-1;i++){
         int count =0;
         for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
         }
         if(count>0)System.out.println(arr[i]);
        }

    }
}