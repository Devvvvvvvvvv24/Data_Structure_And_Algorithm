#include<iostream>
using namespace std;

class hero{
    public:
    int health;
    char name;
    int sethealth(int h){
        health=h;
    }
    int gethealth(){
        return health;
    }
};
int main(){
  hero dev;
   dev.sethealth(40);
   cout<<dev.gethealth()<<dev.name<<" ";
}