#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int year;
    cin>>year;
    bool isleap = year % 4 == 0 && !(year % 100 == 0 && year % 400 != 0);
    cout<<year<<" is "<<(isleap?"":"not ")<<"a leap yer"<<endl;
    return  0;
}