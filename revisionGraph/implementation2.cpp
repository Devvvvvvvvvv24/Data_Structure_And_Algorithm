#include<iostream>
#include<vector>
#include<list>
using namespace std;

vector<list<pair<int,int>>>graph;
int v;

void add_edge(int src,int des,int wt,bool bi_der=true){
    graph[src].push_back({des,wt});
    if(bi_der){
        graph[des].push_back({src,wt});
    }
}

void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"->";
        for(auto ele:graph[i]){
            cout<<"{"<<ele.first<<"-"<<ele.second<<"}";
        }
        cout<<endl;
    }
}
int main(){
cin>>v;
graph.resize(v,list<pair<int,int>>());
int e;
cin>>e;
while(e--){
    int src,des,wt;
    cin>>src>>des>>wt;
    add_edge(src,des,wt);
}
display();
}