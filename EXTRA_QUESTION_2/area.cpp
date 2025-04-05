#include<iostream>
#include<math.h>
using namespace std;

void area(int x){
    cout<<"area of square "<<x*x<<endl;
}

void area(int x,int y){
    cout<<"area of rectangle "<<x*y<<endl;
}

void area(int x,int y,int z){
    float s=(float)(x+y+z)/2;
    float area=sqrt(s*(s-x)*(s-y)*(s-z));
    cout<<"area is "<<area<<endl;
}

int main()
{
int choice;
int x,y,z;
while(1){
    cout<<"1->square,2->rectangle 3->triangle 4->exit";
    cin>>choice;
    switch(choice){
        case 1:cin>>x;
         area(x);
         break;
         case 2:cin>>x>>y;
         area(x,y);
         break;
         case 3:cin>>x>>y>>z;
         area(x,y,z);
         break;
         case 4:return 0;
    }
}
}
