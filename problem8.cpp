#include <iostream>
#include <math.h>

using namespace std;

int main() {
    char c;
    cin>>c;
    bool lower = c>=65 && c<=90;
    bool upper = c>=97 && c<=122;
    if(lower) {
        cout<<"Lowercase alphabet"<<endl;
    }else if (upper) {
        cout<<"Uppercase alphabet"<<endl;
    }else {
        cout<<"It is not an alphabet"<<endl;
    }
    return  0;
}