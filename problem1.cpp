#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    string sign;
    if (n<0) {
        sign="Negative";
    }else if (n>0) {
        sign="Positive";
    }else {
        sign="Zero";
    }
    cout<<sign<<endl;
    return  0;
}