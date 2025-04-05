#include<iostream>
using namespace std;

class invoice{
    private:
    string des;
    int partno,qty,price;
    public:
    invoice(){
        des="";
        partno=0;
        qty=0;
        price=0;
    }
    void input(){
        cout<<"enter des,partno,qty,price"<<endl;
        cin>>des>>partno>>qty>>price;
        if(price<0)price=0;
        if(qty<0)qty=0;
    }
   double getinvoiceamount(){
     double amount=price*qty;
     return amount;
   }
  void display(){
    cout<<"required details "<<endl;
    cout<<des<<" "<<partno<<" "<<qty<<" "<<price<<endl;
  }
};
int main(){
invoice obj;
int choice;
while(1){
    cout<<"1->input 2->display 3->get amount 4->exit"<<endl;
    cin>>choice;
    switch(choice){
        case 1:obj.input();
        break;
        case 2:obj.display();
        break;
        case 3:cout<<obj.getinvoiceamount()<<endl;
        break;
        case 4:return 0;
    }
}
}