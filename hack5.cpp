#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,x,y,a,b;
    int count=0;
    cin>>t;
    while(t>0)
        {
        t--;
        cin>>x>>y>>a>>b;
        float m=(b-y)/(a-x);
        int j=y;
        while(x<=a && y<=b)
              cout<<"\nIn loop";
              cout<<"\nx +m = "<<x+m;
            if(x+m - (int)(x+m)==0 && y+m - (int)(y+m)==0){
                count++;
            }
          }
          j++;
        }
        cout<<count;
    }
    return 0;
}
