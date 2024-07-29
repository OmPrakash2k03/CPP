#include <iostream>

using namespace std;

int main()
{
    int x,i,t1=0,t2=1,nextTerm=t1+t2;
    cout << "Input the number of terms to display :" << endl;
    cin>>x;
    cout<<"Here the fibonacci series upto "<<x<<" terms : \n"<<t1<<" "<<t2;
    for(i=3;i<=x;i++){
        cout<<" "<<nextTerm<<" ";
        t1=t2;
        t2=nextTerm;
        nextTerm=t1+t2;
    }

    return 0;
}
