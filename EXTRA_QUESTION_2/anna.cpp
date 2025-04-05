#include<iostream>
using namespace std;

class student{
    private:
    string name;
    int marks[5];
    public:
    void input(){
        cout<<"enter name of student"<<endl;
        cin>>name;
        cout<<"enter marks"<<endl;
        for(int i=0;i<5;i++){
            cin>>marks[i];
        }
    }
    void display(){
        cout<<name<<endl;
        for(int i=0;i<5;i++){
            cout<<marks[i]<<" ";
        }
    }
    int total(){
        int sum=0;
        for(int i=0;i<5;i++){
            sum+=marks[i];
        }
        return sum;
    }
};
int main(){
int n,v;
cin>>v;
cin>>n;

student arr[n];
for(int i=0;i<n;i++){
    arr[i].input();
}
int count=0;
for(int i=0;i<n;i++){
    if(arr[i].total()>v)count++;
}
cout<<count;
}