#include<iostream>
#include<unordered_map>
#include<vector>
#include<unordered_set>
using namespace std;

vector<unordered_map<int,int> >graph;
int v;

void add_edge(int src,int des,int wt,bool bi_dir=true){
    graph[src][des]=wt;
    if(bi_dir){
        graph[des][src]=wt;
    }
}
void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<" ";
        for(auto el:graph[i]){
            cout<<el.first<<" "<<el.second<<" ";
        }
        cout<<endl;
    }
}

void des(int curr,int end){
    if(curr==end)return true;

}
int main(){
cin>>v;
graph.resize(v,unordered_map<int,int>());
int e;
cin>>e;
while(e--){
    int src,des,wt;
    cin>>src>>des>>wt;
    add_edge(src,des,wt);
}
display();
}