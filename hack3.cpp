#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[]) {
  double l, s1,s2, dist2,x,y,dist;
  int q,qv;
  cin>>l>>s1>>s2;
  cin>>q;
  while(q>0){
    q--;
    cin>>qv;
    if(s2>s1){

      dist= (sqrt(2*qv));
      cout<<"\ndist = "<<dist<<endl;

      cout<<(dist/(s2-s1));
    }


  }
  return 0;
}
