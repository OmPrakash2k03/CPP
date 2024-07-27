#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout << "Enter The First Number :" << endl;
    cin>>x;
    cout << "Enter The Second Number :" << endl;
    cin>>y;
    if(x>0&&y>0){
        cout << "Quadrant I" << endl;
    }
    else if(x<0&&y>0){
        cout << "Quadrant II" << endl;
    }
    else if(x<0&&y<0){
        cout << "Quadrant III" << endl;
    }
    else if(x>0&&y<0){
        cout << "Quadrant IV" << endl;
    }
    return 0;
}
