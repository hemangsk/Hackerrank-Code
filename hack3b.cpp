#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int r,c;

    cin>>r>>c;
    if(c<=5&&r>=1){
    r=r-1;
    c=c-1;
    if(r%2!=0){
        cout<<((r-1)*5+1)+(2*c);
        cout<<endl;

    }
    else if(r%2==0){
        cout<<(r*5)+(2*c);
        cout<<endl;
    }
    }

    return 0;
}
