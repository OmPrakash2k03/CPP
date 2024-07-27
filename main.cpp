#include <iostream>

using namespace std;

int main()
{
    int marks;
    cout<<"Enter Your Marks : "<<endl;
    cin>>marks;
    if(marks<=40){
        cout<<"Fail"<<endl;
    }
    else if(marks>40 && marks<=50){
        cout<<"D"<<endl;
    }
    else if(marks>50 && marks<=60){
        cout<<"C"<<endl;
    }
    else if(marks>60 && marks<=70){
        cout<<"B"<<endl;
    }
    else if(marks>70 && marks<=80){
        cout<<"A"<<endl;
    }
    else if(marks>80 && marks<=90){
        cout<<"E"<<endl;
    }
    else if(marks>90 && marks<=100){
        cout<<"O"<<endl;
    }
    return 0;
}
