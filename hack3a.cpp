#include <iostream>
using namespace std;

void insertelem(int (&a)[100000], int n){

   for (int i=0;i<n;i++){
     a[i]=i;
   }
}

void reverseelem(int (&a)[100000], int n){
  int k; int temp;
  for(int i=0;i<n;i++){
    if(n%2!=0){
      k=0;
    for(int j=i;j<=(n-1)/2;j++){
      temp=a[j];
      a[j]=a[(n-1)-k];
      a[(n-1)-k]=temp;
      k++;
    }
    if(i==(n-2)&&n>3){
      temp=a[i];
      a[i]=a[n-1];
      a[n-1]=temp;
    }
  }

    else if(n%2==0){
      k=0;
      for(int j=i;j<=(n)/2;j++){

        temp=a[j];
        a[j]=a[(n-1)-k];

        a[(n-1)-k]=temp;
        k++;
      }


    }
  }
}
void findelem(int (&a)[100000], int k,int n){
  for(int i=0;i <n;i++){
    if(a[i]==k){
      cout<<i;
    }
  }
}
int main(int argc, char const *argv[]) {
  int a[100000];
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    insertelem(a,n);
    reverseelem(a,n);
    findelem(a,k,n);
  }

  return 0;
}
