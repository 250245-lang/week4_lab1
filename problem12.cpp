#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n, a, b;
    cout<<"Enter a three-digit integer: ";
    cin>>n;
    a = n%10;
    b = n/100;
    if (a==b) {
        cout<<n<<" is a polindrome"<<endl;
    }else {
        cout<<n<<" is not a polindrome"<<endl;
    }
    return  0;
}