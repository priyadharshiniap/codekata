#include <iostream>
using namespace std;
int main()
{
  int a,b;
  cin>>a;
  while(a!=0)
  {
    a=a/10;
    b++;
  }
  cout<<b;
  return 0;
}
