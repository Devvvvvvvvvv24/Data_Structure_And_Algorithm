#include<iostream>
#include<vector>
using namespace std;

class maxHeap{
    vector<int>hp;
    void upheapify(int ci){
        while(ci>0){
            int pi=(ci-1)/2;
            if(hp[ci]>hp[pi]){
                swap(hp[ci],hp[pi]);
                ci=pi;

            }else {
                break;
        }
    }
    }
    public:    
    void push(int ele){
        hp.push_back(ele);
        upheapify(hp.size()-1);
    }
    int peek(){
        return hp[0];
    }
    void display(){
        for(int i=0;i<hp.size();i++){
            cout<<hp[i]<<" ";
        }
    }
};
int main(){
  maxHeap hp;  
hp.push(3);
hp.push(4);
hp.push(11);
hp.push(9);
hp.push(14);
hp.push(-1);
hp.push(30);
hp.push(44);
hp.push(50);
hp.display();

}