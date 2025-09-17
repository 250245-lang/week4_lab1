#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    string sign, evenness;
    if(n%2==0) {
        evenness="even";
    }else {
        evenness="odd";
    }
    if (n<0) {
        sign="negative";
    }else if (n>0) {
        sign="positive";
    }else {
        sign="zero";
    }
    cout<<"The number is "<<sign<<" and "<<evenness<<endl;
    return  0;
}