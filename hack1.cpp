#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int fact(int n){
    int prod=0;
    for (int i=n-1;i>0;i--){
        prod+=i;
    }
    return prod;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int testCases;
    cin>>testCases;
    int n;
    while(testCases>0){
        testCases--;
        cin>>n;
        cout<<fact(n);
        cout<<endl;
        }

    }
    return 0;
}
