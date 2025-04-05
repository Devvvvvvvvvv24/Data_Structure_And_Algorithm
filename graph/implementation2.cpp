#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

vector<list<int> >graph;
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
        cout<<i<<" ";
        for(auto ele:graph[i]){
            cout<<ele<<" ";
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
bool anyPath(int src,int des){
    return dfs(src,des);
}
int main(){
    // int v;clear
    cin>>v;
    graph.resize(v,list<int>());
    int e;
    cin>>e;
    while(e--){
        int sc,des;
        cin>>sc>>des;
        add_edge(sc,des);
    }
    display();
    cout<<endl;
    int x,y;
    cin>>x>>y;
    cout<<anyPath(x,y);
}