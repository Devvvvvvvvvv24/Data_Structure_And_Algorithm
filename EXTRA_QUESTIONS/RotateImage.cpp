#include<iostream>
#include<vector>
using namespace std;
 void rotate(vector<vector<int>>& matrix) {
        int size=matrix.size();
        //int size2=matrix[0].size();
        for(int i=0;i<size;i++){
            for(int j=i+1;j<size;j++){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        //rotate by 90
        for(int k=0;k<size;k++){
            int i=0;
            int j=size-1;
            while(i<=j){
                int temp=matrix[k][i];
                matrix[k][i]=matrix[k][j];
                matrix[k][j]=temp;
                i++;
                j--;
            }
        }
        return;
    }
int main(){
    
}