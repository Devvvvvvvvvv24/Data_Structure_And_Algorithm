#include<iostream>
using namespace std;

class Bike{
    public:
    int tyreSize;
    int engineSize;

    Bike(int tyreSize,int engineSize)
    {
        this->tyreSize=tyreSize;
        this->engineSize=engineSize;
        cout<<"contrcutor call hua"<<endl;
    }
    ~Bike(){
        cout<<"destructor call hua ";
    }
    };
    int main(){
        Bike tvs(12,122);
        Bike glamour(13,333);
        bool flag=true;
        if(flag ==true){
            Bike bmw(122,222);
            cout<<bmw.tyreSize<<" "<<bmw.engineSize<<endl;
        }
        cout<<tvs.tyreSize<<" "<<tvs.engineSize<<endl;
        cout<<glamour.tyreSize<<" "<<glamour.engineSize<<endl;
        //object creation ->contructor call hota hai

    }