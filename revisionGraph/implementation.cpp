#include<iostream>
#include<vector>
#include<list>
using namespace std;

vector<list<int>>graph;
int v;

void add_edge(int src,int des,bool bi_der=true){
    graph[src].push_back(des);
    if(bi_der){
        graph[des].push_back(src);
    }
}

void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"->";
        for(auto ele:graph[i]){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}
int main(){
cin>>v;
graph.resize(v,list<int>());
int e;
cin>>e;
while(e--){
    int src,des;
    cin>>src>>des;
    add_edge(src,des);
}
display();
}