#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double a,b,c,d,x1,x2;
    cin>>a>>b>>c;
    d = b*b - 4*a*c;
    if(d==0) {
        x2 = -b / (2*a);
        cout<<"x1= "<<"\tx2="<<x2<<endl;
    }else if(d>0) {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);
        cout<<"x1= "<<x1<<"\tx2="<<x2<<endl;
    }else {
        cout<<"x1= "<<"\tx2="<<endl;
    }
    return  0;
}