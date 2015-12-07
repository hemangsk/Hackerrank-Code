#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,a,b,x,y;
    cin>>t;
    while(t>0){
        t--;
        cin>>a>>b>>x>>y;
        if((x==a||x==(a-b)||x==(a+b) )&&(y==b||y==(a-b)||y==(a+b))){

                if(x==(a+b)&&y==b){
                    cout<<"YES";
                }
                else if(x==(a)&&y==(a+b)){
                    cout<<"YES";

                }

                else if(x==(a-b)&&y==b){
                    cout<<"YES";
                }

                else if(x==a&&y==(a-b)){
                    cout<<"YES";
                }
            }

            else{
                cout<<"NO"<<endl;
            }

    }
    return 0;
}
