#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int x,y;
    cin>>x>>y;
    double dist = sqrt(pow(x,2)+pow(y,2));
    if (dist<=10) {
        cout<<"Point ("<<x<<","<<y<<") is in circle"<<endl;
    }else {
        cout<<"Point ("<<x<<","<<y<<") is not in circle"<<endl;
    }
    return  0;
}