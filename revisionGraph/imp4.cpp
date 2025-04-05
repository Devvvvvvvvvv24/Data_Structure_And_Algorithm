#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

vector<list<int>>graph;
vector<vector<int>>result;
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
        cout<<i<<" : ";
        for(auto el:graph[i]){
            cout<<el<<"->";
        }
        cout<<endl;
    }
}
// bool anyPath(int curr,int des){
//     if(curr==des)return true;
//     visited.insert(curr);
//     for(auto neighbor:graph[curr]){
//         if(not visited.count(neighbor)){
//             bool result=anyPath(neighbor,des);
//             if(result)return true;
//         }
//     }
//     return false;
// }

// bool dfs(int curr,int des){
//     return anyPath(curr,des);
// }

void allPath(int curr,int des,vector<int>&path){
  if(curr==des){
    path.push_back(curr);
    result.push_back(path);
    path.pop_back();
    return;
  }
  visited.insert(curr);
  path.push_back(curr);
  for(auto ele:graph[curr]){
    if(not visited.count(ele)){
        allPath(ele,des,path);
    }
  }
  visited.erase(curr);
  path.pop_back();
  return;
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
    vector<int>path;
    allPath(src,des,path);
    for(auto ele:result){
        for(auto el:ele){
           cout<<el<<" ";
        }
        cout<<endl;
    }
}