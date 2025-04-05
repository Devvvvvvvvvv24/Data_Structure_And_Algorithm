#include<bits/stdc++.h>//Universal Header file
using namespace std;

class Bike{
    public:
     static int noOfBikes;
     int tyreSize;
     int engineSize;
    Bike(int tyreSize,int engineSize){   //contructor
        this->tyreSize=tyreSize;
        this->engineSize=engineSize;
    }
    ~Bike(){
        cout<<"destructor call hua "<<endl;
    }
    static void increaseNoofBikes(){
        noOfBikes++;
    }
};
int Bike::noOfBikes=10;
int main(){
       Bike tvs(12,133);//object creation and contructor call
       Bike bajaj(33,444);
       cout<<tvs.tyreSize<<endl;
       cout<<bajaj.engineSize<<endl;
       cout<<tvs.noOfBikes<<endl;
       cout<<bajaj.noOfBikes<<endl;
       Bike::increaseNoofBikes();
       cout<<tvs.noOfBikes<<endl;
       cout<<bajaj.noOfBikes<<endl;

}