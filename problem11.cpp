#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double w1,w2,p1,p2, r1, r2;
    cout<<"Enter weight and price for package 1: ";
    cin>>w1>>p1;
    cout<<"Enter weight and price for package 2: ";
    cin>>w2>>p2;
    r1 = p1 / w1;
    r2 = p2 / w2;
    if (r1<r2) {
        cout<<"Package 1 has a better price"<<endl;
    }else if (r1>r2) {
        cout<<"Package 2 has a better price"<<endl;
    }else {
        cout<<"Two packages have the same price"<<endl;
    }
    return  0;
}