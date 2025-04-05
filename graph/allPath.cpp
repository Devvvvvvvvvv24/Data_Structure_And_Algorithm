#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

vector<list<int> >graph;
unordered_set<int>visited;
vector<vector < int> >result;
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

void dfs(int curr,int end,vector<int>&path){
    if(curr==end){
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;
    }
    visited.insert(curr);
    path.push_back(curr);
    for(auto neighbour:graph[curr]){
        if(not visited.count(neighbour)){
            dfs(neighbour,end,path);
        }
    }
    path.pop_back();
    visited.erase(curr);
    return;
}
void allPath(int src,int des){
    vector<int>v;
     dfs(src,des,v);
}
int main(){
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
    allPath(x,y);

    for(auto path:result){
        for(auto e:path){
            cout<<e<<" ";
        }
        cout<<endl;
    }
}