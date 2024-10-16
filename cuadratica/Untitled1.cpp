#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main(){

int a;
int b;
int c;
  cin>>a>>b>>c;

  int x1=(-b+sqrt(b*b-4*a*c))/(2*a);
  int x2=(-b-sqrt(b*b-4*a*c))/(2*a);

  cout<<x1<<" "<<x2;

  return 0;
}
