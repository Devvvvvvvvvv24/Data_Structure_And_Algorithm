#include<iostream>
#include<vector>
#include<unordered_map>
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
    cout<<i<<" - >";
  for(auto el:graph[i]){
    cout<<el.first<<" "<<el.second<<", ";
  }
  cout<<"\n";
}
}
int main(){
    cin>>v;
    graph.resize(v,unordered_map<int,int> ());
    int e;
    cin>>e;
    while(e--){
        int s,d,wt;
        cin>>s>>d>>wt;
        add_edge(s,d,wt);
    }
    display();
}