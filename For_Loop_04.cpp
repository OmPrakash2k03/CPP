#include <iostream>

using namespace std;

int main()
{
    int A,B,i,j;
    cout << "Input upto the table number starting from :" << endl;
    cin>>A>>B;
    for(i=1;i<=10;i++){
        for(j=1;j<=B;j++){
            cout<<j<<"X"<<i<<"="<<j*i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
