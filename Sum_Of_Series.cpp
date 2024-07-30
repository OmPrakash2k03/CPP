#include <iostream>

using namespace std;

int main()
{
    long int i,n,t=9;
    int sum=0;
    cout << "Input the number or team :" << endl;
    cin>>n;
    for(i=1;i<=n;i++){
            sum+=t;
            cout<<t<<" ";
            t=t*10+9;
    }
    cout<<"\nSum of Series upto 5 terms :"<<sum<<endl;
    return 0;
}
