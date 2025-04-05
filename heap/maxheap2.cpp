#include<iostream>
#include<vector>
using namespace std;

class maxHeap{
    vector<int>hp;
    void upheapify(int ci){
        
        while(ci>0){//not a root node
        int pi=(ci-1)/2;
        if(hp[ci]>hp[pi]){
            swap(hp[ci],hp[pi]);
            ci=pi;
        }
        else 
        {
            break;
        }
    }
    }
    void downheapify(int idx){
        while(idx<hp.size()){
            int lc=2*idx+1;
            int rc=2*idx+2;
            if(lc>=hp.size())break;
            int maxEl=idx;
            if(hp[lc]>hp[maxEl]){
                maxEl=lc;
            }
            if(rc<hp.size() && hp[rc]>hp[maxEl]){
                maxEl=rc;
            }
            if(idx!=maxEl){
                swap(hp[idx],hp[maxEl]);
                idx=maxEl;//for next iteration
            }
            else break;
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
    void pop(){
        if(hp.empty())return;
        swap(hp[0],hp[hp.size()-1]);
        hp.pop_back();
        if(!hp.empty()){
            downheapify(0);
        }
    }
    void deletepart(int idx){
        hp[idx]=INT_MAX;
        if(!hp.empty()){
           upheapify(idx);
        }
        // downheapify(0);
        pop();
    }
    // bool isempty(){
    //     return hp.empty()==0;
    // }
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
cout<<endl;
// hp.pop();
hp.deletepart(1);
hp.display();
}