#include<iostream>
using namespace std;

int mazee(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec)return 0;
    if(sr==er && sc==ec)return 1;
    int right=mazee(sr,sc+1,er,ec);
    int down=mazee(sr+1,sc,er,ec);
    int total=right+down;
    return total;
}
int main(){

cout<<mazee(0,0,1,1);
}