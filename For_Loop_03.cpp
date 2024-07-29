#include <iostream>

using namespace std;

int main()
{
    int M,N,i;
    cout << "Enter M and N:" << endl;
    cin>>M>>N;
    for(i=M;i<=N;i++){
        if(i%2==1){
            cout<<"["<<i<<"] ";
        }
    }
    return 0;
}
