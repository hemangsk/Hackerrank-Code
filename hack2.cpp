#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int calcslope(int n1, int n2,int n3,int n4){

    return ((n4-n2)/(n3-n1));
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int test;
    cin>>test;
    int n1,n2,n3,n4;
    while(test>0){
        cout<<"start";
        test--;
        cin>>n1>>n2>>n3>>n4;
        cout<<n1<<n2<<n3<<n4;
        if(n1>=(-100)&&n2>=(-100)&&n3>=(-100)&&n4>=(-100)&&n1<=100&&n2<=100&&n3<=100&&n4<=100){
        cout<<n1<<n2<<n3<<n4;
        if(n3>n1&&n4>n2){
            cout<<2*n3-n1<<" "<<2*n4-n2;
            cout<<endl;
        }
           else if(n3<n1&&n4<n2){
               cout<<"HEre";
                cout<<2*n1-n3<<" "<<2*n2-n4;
               cout<<endl;
            }
        }
    }
    return 0;
}
