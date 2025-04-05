#include<iostream>
using namespace std;

class savingAccount{
   private:
   static int Rate;
   float balance;
   public:
   void input(){
    cout<<"enter balance"<<endl;
    cin>>balance;
   }
   void calMonthlyInterest(){
    float interest=(Rate*balance)/12.0;
    balance+=interest;
   }
   static void modifyInterest(int x){
    Rate=x;
   }
   void display(){
    cout<<"balance is "<<endl;
    cout<<balance;
   }
   
};
int savingAccount::Rate=4;

int main(){
    savingAccount saver1,saver2;
    saver1.input();
    saver2.input();
    saver1.calMonthlyInterest();
    saver1.display();

    saver2.calMonthlyInterest();
    saver2.display();

    savingAccount::modifyInterest(5);

    saver1.calMonthlyInterest();
    saver1.display();

    saver2.calMonthlyInterest();
    saver2.display();
}

