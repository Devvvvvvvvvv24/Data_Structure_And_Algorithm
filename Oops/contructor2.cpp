#include<bits/stdc++.h>
using namespace std;

class Boy{
    public:
    int age;
    int marks;
    int salary;
    Boy(int salary){     //default contructor or 
      this->salary=salary;//parenthesis contructor
        cout<<"1cr ++package"<<endl;
    }
    ~Boy(){
        cout<<"destructor call hua "<<endl;
    }
};

int main(){
    Boy dev(20000000);//object creation  contructor call hua memory allocation
    Boy chirag(30000000);
    cout<<dev.salary<<endl;
    cout<<chirag.salary<<endl;

}