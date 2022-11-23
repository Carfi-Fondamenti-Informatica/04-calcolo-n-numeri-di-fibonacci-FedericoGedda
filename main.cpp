#include <iostream>
using namespace std;

int main() {
   int n,p=1,s=1,t;
  cin>>n;
  if (n>=2) {
      cout<<p<<endl<<s<<endl;
      for(int c=3;c<=n;c++){
          t=p+s;
          p=s;
          s=t;
          cout<<t<<endl;
      }
  } else {
      cout<<"errore";
  }
   return 0;
}
