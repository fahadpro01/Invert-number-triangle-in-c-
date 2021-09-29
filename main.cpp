#include <iostream>
using namespace std;
int main() {
  int j, n,i;
  cin>>n;
  //for(i=n;i>=1;i--)
  for(i=1;i<=n;i++)
  {
   // for(j=1;j<=i;j++)
   for(j=1;j<=n+1-i;j++)
    {
    cout<<j<<" ";
    }
    cout<<endl;
  }

}