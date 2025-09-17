#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int a1,a2,a3;
    cin>>a1>>a2>>a3;
    if (a1+a2+a3 == 180) {
        cout<<"Triangle is valid"<<endl;
    }else{
        cout<<"Triangle is not valid"<<endl;
    }
    return  0;
}