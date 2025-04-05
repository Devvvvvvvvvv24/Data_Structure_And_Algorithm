#include<iostream>
using namespace std;

class bank{
    private:
    string name,type;
    int acc;
    float balance;
    public:
    void input();
    void deposit(float amount);
    void withdraw(float amount);
    void display();
};

void bank::input(){
    cout<<"enter name ,type,accno.,initial balance"<<endl;
    cin>>name>>type>>acc>>balance;
}
void bank::display(){
    cout<<"the details are "<<endl;
    cout<<name<<" "<<type<<" "<<" "<<balance<<endl;
}

void bank::deposit(float amount){
    balance+=amount;
    cout<<"amount successfully depostied"<<endl;
}
void bank::withdraw(float amount){
    if(balance==0 or amount>balance){
        cout<<"can't withdraw check balance"<<endl;
    }
    else{
        balance-=amount;
    }
}

int main(){
    bank obj;
    int choice;
    float amount;
    while(1){
        cout<<"\n\n 1. To input values\n 2. To display values\n 3. To Deposit balance\n 4. To withdraw balance\n 5. To Exit\n"<<endl;
        cin>>choice;
        switch(choice){
            case 1:obj.input();
            break;
            case 2:obj.display();
            break;
            case 3:cout<<"enter amoubt to deposit"<<endl;
                cin>>amount;
                obj.deposit(amount);
                break;
            case 4:cout<<"enter amount to witdraw"<<endl;
               cin>>amount;
               obj.withdraw(amount);
               break;
               case 5: return 0;
        }
    }
}