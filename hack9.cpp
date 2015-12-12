#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> v;
    int t,x,y,z,a;
    cin>>t;
    while(t>0){
        t--;
        cin>>x;
        v.push_back(x);
    }

    cin>>y;
    y=y-1;
    cin>>z>>a;
    z=z-1;
    a=a-1;
    

    v.erase(v.begin()+y);
    v.erase(v.begin()+z, v.begin()+a);

    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
