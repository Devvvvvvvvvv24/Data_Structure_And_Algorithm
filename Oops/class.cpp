#include<iostream>
using namespace std;

class Player{
    private:
    int health;//data members
    int pos;//data encapsulation
    public:
    void setHealth(int health){
        this->health=health;
    }
    void setpos(int pos){
        this->pos=pos;
    }
    void gethealth(){
     cout<<health<<endl;
    }

    void getpos(){
        cout<<pos<<endl;
    }

    void showHealth(){
        cout<<"heath is "<<health<<endl;
    }
};

int main(){
    Player dev;//object ->instance of class
   
  //  dev.showHealth();
    dev.setHealth(111);
    dev.setpos(44);
    dev.getpos();
    dev.gethealth();

}