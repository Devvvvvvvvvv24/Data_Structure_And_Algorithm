#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
#include<unordered_map>
using namespace std;

vector<list<int>>graph;
unordered_set<int>visited;
vector<vector<int>>result;
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

void allPath(int curr,int des,vector<int>&path){
    if(curr==des){
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;
    }
    visited.insert(curr);
    path.push_back(curr);
    for(auto neighbor:graph[curr]){
        if(not visited.count(neighbor)){
            allPath(neighbor,des,path);
        }
    }
    visited.erase(curr);
    path.pop_back();
    return;
}
// bool anyPath(int curr,int des){
//     if(curr==des)return true;
//     visited.insert(curr);
//     for(auto neighbor:graph[curr]){
//        if(not visited.count(neighbor)){
//         bool result=anyPath(neighbor,des);
//         if(result)return true;
//        }
//     }
//     return false;
// }
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
// cout<<anyPath(src,des);

vector<int>path;
allPath(src,des,path);
for(auto ele:result){
    for(auto el:ele){
        cout<<el<<" ";
    }
    cout<<endl;
}
// display();//
}