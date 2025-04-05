#include<iostream>
#include<list>
#include<vector>
#include<unordered_set>
using namespace std;

vector<list<int>>graph;
unordered_set<int>visited;
int v;

void add_edge(int src,int des,bool bi_der=true){
    graph[src].push_back(des);
    if(bi_der){
        graph[des].push_back(src);
    }
}

void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"->>";
        for(auto el:graph[i]){
            cout<<el<<" ";
        }
        cout<<endl;
    }
}
bool dfs(int curr,int end){
    if(curr==end)return true;
    visited.insert(curr);
    for(auto neighbour:graph[curr]){
        if(not visited.count(neighbour)){
            bool result=dfs(neighbour,end);
            if(result)return true;
        }
    }
    return false;
}

bool anypath(int src,int des){
    return dfs(src,des);
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
int src,des;
cin>>src>>des;
cout<<anypath(src,des);
}