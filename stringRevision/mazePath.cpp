#include<iostream>
using namespace std;

int ways(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec)return 0;
    if(sr==er && sc==ec)return 1;
    int rightways=ways(sr,sc+1,er,ec);
    int downways=ways(sr+1,sc,er,ec);
    int total=rightways+downways;
    return total;
}
void print(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec)return;
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return;
    }
    print(sr,sc+1,er,ec,s+'R');
    print(sr+1,sc,er,ec,s+'D');
}
int ways2(int row,int col){
    if(row<1 || col<1)return 0;
    if(row==1 &&col==1)return 1;
    int rightways=ways2(row,col-1);
    int downways=ways2(row-1,col);
    int total=rightways+downways;
    return total;
}
int main(){
    cout<<ways(1,1,3,3);
    print(1,1,3,3,"");
    cout<<endl;
    cout<<ways2(3,3);
}