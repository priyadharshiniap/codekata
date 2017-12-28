#include<iostream.h>
#include<conio.h>
void main()
{
  int a,b;
  cout<<"enter the number";
  cin>>a;
  while(a)
  {
    a=a/10;
    b++;
  }
  cout<<b;
  getch();
}
