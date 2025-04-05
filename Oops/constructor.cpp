#include<iostream>
using namespace std;

class Bike{
    public:
    int tyreSize;
    int engineSize;
    Bike(int tyreSize,int engineSize){
        this->tyreSize=tyreSize; 
        this->engineSize=engineSize;              //contructor
        cout<<"contructor call hua "<<endl;
    }
};
int main(){
Bike tvs(12,100);    //object creation-> pe contructor call hua
Bike galmour(14,200);
cout<<tvs.tyreSize<<" "<<tvs.engineSize<<endl;
cout<<galmour.tyreSize<<" "<<galmour.engineSize<<endl;
}