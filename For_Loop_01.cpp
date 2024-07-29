#include<iostream>

using namespace std;

int main()
{
    int x,i,count=0;
    cout << "Enter the Value :" << endl;
    for(i=1;i<=10;i++){
        cin>>x;
    }
    for(i=1;i<=10;i++){
        if(i%2==0){
            count++;
        }
    }
    cout << "Total number of ODD numbers :" << count;
    return count;
}
