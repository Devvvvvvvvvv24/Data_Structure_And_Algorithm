#include<iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec){
    if(sr>er ||sc>ec)return 0;
    if(sr==er &&sc==ec)return 1;
    int rightways=maze(sr,sc+1,er,ec);
    int downways=maze(sr+1,sc,er,ec);
    int totalways=rightways+downways;
    return totalways;
}
void printmaze(int sr,int sc,int er,int ec,string s){
    if(sr>er ||sc>ec)return;
    if(sr==er &&sc==ec){
        cout<<s<<endl;
        return;
    }
    printmaze(sr,sc+1,er,ec,s+'R');
    printmaze(sr+1,sc,er,ec,s+'D');
    
}

int maze(int row,int col){
    if(row<1 || col<1)return 0;
    if(row==1 && col==1)return 1;
    int rightways=maze(row,col-1);
    int downways=maze(row-1,col);
    int totalways=rightways+downways;
    return totalways;
}
int main(){
    cout<<maze(1,1,3,7);
    cout<<endl;
    printmaze(1,1,3,7,"");
}