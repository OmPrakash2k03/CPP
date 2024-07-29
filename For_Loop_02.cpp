#include <iostream>

using namespace std;

int main()
{
    int x,i,sum=0,avg=0;
    cout << "Enter The number : " << endl;
    cin>>x;
    cout<<"The first "<<x<<" natural number :\n";
    for(i=1;i<=x;i++){
        cout<<i<<" ";
        sum=sum+i;
    }
    cout<<"\nThe sum of natural number upto "<<x<<" terms:\n"<<sum;
    avg=sum/x;
    cout<<"\nThe avg of natural number upto "<<x<<" terms:\n"<<avg;
    return 0;
}
