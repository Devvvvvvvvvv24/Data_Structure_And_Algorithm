#include<iostream>
using namespace std;


class hero{
    public:
    int health;
    char level;
    hero(int h,int l){
        health=h;
        level=l;
    }

    void print(){
        cout<<"health "<<this->health<<" "<<this->level<<endl;
    }
};
int main(){
hero hh(11,'e');
hh.print();
hero ff=hh;
ff.print();
}