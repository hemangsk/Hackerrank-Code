#include <iostream>
#include <cstdio>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b;
    long long c;
    char d;
    float e;
    double f;


    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    cin>>f;

    cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;

    cout<<fixed<<setprecision(3)<<e<<endl;
    cout<<setprecision(9)<<f<<endl;
    return 0;
}
