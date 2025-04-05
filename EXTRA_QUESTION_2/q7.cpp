#include<iostream>
using namespace std;

class bank{
    private:
    string name,type;
    int accno;
    float balance;
    public:
    void input();
    void display();
    void deposit(float amount);
    void withdraw(float amount);
};
void bank::input(){
    cout<<"enter name ,type ,accno, balance"<<endl;
    cin>>name>>type>>accno>>balance;
}
void bank::display(){
    cout<<"the details are "<<endl;
    cout<<name<<" "<<balance<<endl;
}
void bank::deposit(float amount){
    balance+=amount;
    cout<<"successfull depsoited"<<endl;
}
void bank::withdraw(float amount){
    if(balance==0 ||amount>balance){
        cout<<"cant withdraw "<<endl;
    }
    else balance-=amount;
}
int main(){
bank obj;
float amount;
int choice;
while(1){
cout<<"1->input value 2->display 3->depost 4->withdraw 5->exit"<<endl;
cin>>choice;
switch(choice){
    case 1:obj.input();
    break;
    case 2:obj.display();
    break;
    case 3:cout<<"enter amount"<<endl;
    cin>>amount;
    obj.deposit(amount);
    break;
    case 4:cout<<"enter amount"<<endl;
    cin>>amount;
    obj.withdraw(amount);
    break;
    case 5:return 0;
}
}
}