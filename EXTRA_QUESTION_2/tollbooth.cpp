#include<iostream>
using namespace std;

class toll{
    private:
    int count=0;
    int total=0;
    public:
    void payingCar(){
        cout<<"paying car"<<endl;
        count++;
        total+=0.5;
    }
    void nonpayingcar(){
        cout<<"non paying car"<<endl;
        count++;
    }
    void display(){
        cout<<"totalnumberofcars"<<count;
        cout<<"cash total"<<total<<endl;
    }
};
int main(){
int choice;
toll obj;
while(1){
    cout<<"1->paying 2-> non paying 3-> display 4->exit";
    cin>>choice;
    switch(choice){
        case 1:obj.payingCar();
        break;
        case 2:obj.nonpayingcar();
        break;
        case 3:obj.display();
        break;
        case 4:return 0;
    }
}
}