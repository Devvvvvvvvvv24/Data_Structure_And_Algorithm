#include<iostream>
using namespace std;

class invoice{
    int partno,qty,price;
    string desc;
    public:
    invoice(){
        partno=0;
        desc="";
        qty=0;
        price=0;
    }
   void input(){
    cout<<"enter partno,desc,qty,price";
    cin>>partno>>desc>>qty>>price;
    if(qty<0)qty=0;
    if(price<0)price=0;
   }
   void display(){
    cout<<"enter details are "<<endl;
    cout<<partno<<" "<<desc<<" "<<qty<<" "<<price<<endl;
   }
    double getinvoiceamount(){
    double amount=price*qty;
    return amount;
   }
   };

   int main(){
    invoice obj;
    int choice;
    while(1){
        cout<<"1->input 2->display 3-> get amount 4 exit"<<endl;
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