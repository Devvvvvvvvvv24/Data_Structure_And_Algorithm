#include<iostream>
using namespace std;

class hotel{
    private:
    string name;
    int rno,nod;
    float tarrif;
    float calc();
    public:
    void checkin();
    void checkout();
};

void hotel::checkin(){
    cout<<"enter name , rno, nod , tarrif "<<endl;
    cin>>name>>rno>>nod>>tarrif;
}
void hotel::checkout(){
    cout<<"details are as follows"<<endl;
    cout<<name<<" "<<rno<<" "<<nod<<" "<<tarrif;
    cout<<"total amount is "<<calc()<<endl;
}
float hotel::calc(){
    if(tarrif*nod>1000){
        return tarrif*nod*1.5;
    }
    else return nod*tarrif;
}
int main(){
    int choice;
    hotel obj1;
    while(1){
        obj1.checkin();
        obj1.checkout();
        cout<<"press 0 to exit and any other to continue"<<endl;
        cin>>choice;
        if(choice==0){
            break;
        }
    }
}