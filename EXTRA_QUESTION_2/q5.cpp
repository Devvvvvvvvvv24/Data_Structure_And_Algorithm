#include<iostream>
using namespace std;

class student{
  private:
  string name;
  int rollno,eng,hin;
  public:
  void input();
  void display();
  void total();
};

void student::input(){
    cout<<"enter name,roll no,english marks,hindi marks"<<endl;
    cin>>name>>rollno>>eng>>hin;
    }
void student::display(){
    cout<<"the details of student are "<<endl;
    cout<<name<<" "<<rollno<<" "<<eng<<" "<<hin<<endl;
}
void student::total(){
    cout<<"total marks of student are "<<endl;
    cout<<eng+hin<<endl;
}
int main(){
    student obj1,obj2;
    obj1.input();
    obj1.display();
    obj1.total();

    obj2.input();
    obj2.display();
    obj2.total();
}
