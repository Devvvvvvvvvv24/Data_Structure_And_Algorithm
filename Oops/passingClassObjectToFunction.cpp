#include<iostream>
using namespace std;


class Player{
    private:
    int age;
    int health;
    int score;
    bool alive;
    public:
    void setHealth(int health){
        this->health=health;
    }
    void setage(int age){
        this->age=age;
    }
    void setscore(int score){
        this->score=score;
    }
    void setalive(bool alive){
        this->alive=alive;
    }

    int gethealth(){
        return health;
    }
    int getscore(){
        return score;
    }
    int getage(){
        return age;
    }
    bool getalive(){
    return alive;
    }
};

int player(Player a,Player b){
    return a.getscore()+b.getscore();
}
Player getMax(Player a,Player b){
    if(a.getscore()>b.getscore()) return a;
    else return b;
    
}
int main(){
Player dev;
dev.setage(19);
dev.setHealth(100);
dev.setscore(500);
dev.setalive(true);
cout<<dev.getalive()<<endl;
Player harsh;
harsh.setage(12);
harsh.setHealth(100);
harsh.setscore(444);
harsh.setalive(false);

cout<<player(dev,harsh)<<endl;
Player sanket=getMax(dev,harsh);
cout<<sanket.getscore()<<endl;
cout<<sanket.getage()<<endl;
}


