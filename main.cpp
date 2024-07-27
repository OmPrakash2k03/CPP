#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    cout<<"Enter the first sides of Triangle :"<<endl;
    cin>>x;
    cout<<"Enter the second sides of Triangle :"<<endl;
    cin>>y;
    cout<<"Enter the third sides of Triangle :"<<endl;
    cin>>z;
    if(x==y&&y==z&&z==x){
        cout<<"The given Triangle is Equilateral Triangle."<<endl;
    }
    else if(x==z||z==x||y==x||y==z){
        cout<<"The given triangle is Isoscales Triangle."<<endl;
    }
    else if(x>=y||y>=z||z>=x){
        cout<<"The given triangle is Scalene Triangle."<<endl;
    }
    return 0;
}
