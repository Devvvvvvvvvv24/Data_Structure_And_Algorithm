import java.lang.*;

public class Main {
    
    public static void main(String[] args){
        String str="deved";
        int n=str.length();
        int i=0;
        int j=n-1;
        boolean flag=true;
        while(i<=j){
            if(str.charAt(i)!=str.charAt(j)){
                flag=false;
                break;
            }
            i++;
            j--;
        }
        if(flag==true)System.out.print("palindrome");
        else System.out.print("not");
    }
}