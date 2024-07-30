#include <iostream>

using namespace std;

int main()
{
    int i,n;
    float sum=0;
    cout << "Input the number of terms:" << endl;
    cin>>n;
    for(i=1;i<=n;i++){
        if(i<=n){
            cout<<"1/"<<i<<"+";
            sum+=1/(float)i;
        }
        if(i==0){
            cout<<"1/"<<i;
            sum+=1/(float)i;
        }
    }
    cout<<"\n Sum of series upto"<<n<<"terms:"<<sum;
    return 0;
}
