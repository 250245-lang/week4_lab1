#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int divisor, quotient;
    cin >> divisor >> quotient;
    if(divisor%quotient) {
        cout<<divisor<<" is not divisible by "<<quotient<<endl;
    }else{
        cout<<divisor<<" is divisible by "<<quotient<<endl;
    }
    return  0;
}