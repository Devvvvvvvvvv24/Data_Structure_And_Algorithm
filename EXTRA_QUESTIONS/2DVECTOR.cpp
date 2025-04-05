#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v1;
    v1.push_back(23);
    v1.push_back(45);
    v1.push_back(9);

    vector<int>v2;
    v2.push_back(78);
    v2.push_back(65);
    v2.push_back(41);
    v2.push_back(34);
    v2.push_back(71);

    vector<int>v3;
    v3.push_back(2);
    v3.push_back(98);
    v3.push_back(47);
    v3.push_back(85);
    vector< vector<int> >v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

     //cout<<v[0][1];
      cout<<v.size()<<endl;
      //columns are variable they can be of any size
      cout<<v[0].size()<<endl;//it will print 0th row columns 
      cout<<v[1].size()<<endl;//it will print 1st row columns
      cout<<v[2].size()<<endl;//it will print 2nd row columns
      vector< vector<int> >arr(3 , vector<int>(4,2));
      for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
      }
     

}