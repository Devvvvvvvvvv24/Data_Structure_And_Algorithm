#include<iostream>
using namespace std;

class book{
    private:
    char name;
    int price;
    int pages;
    public:
    int countBooks(int p){
        if(price<p){
        return 1;
        }
        else{
            return 0;
        }
    }
    bool isBookPresent(char book){
        if(name==book){
            return ture;
        }
        else{
            return false;
        }
    }

}
int main(){

}