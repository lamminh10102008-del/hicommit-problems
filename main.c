#include <stdio.h>
int main()
{
  double d;
  long long tien;
  scanf("%lf", &d);
  if(d<=1)
  {
    tien=d*15000;
  }
  else if( d>1 || d<=5)
  {
    tien=d*1* 15000 + (d − 1) *13000;
  }
  else if (d > 5)
  {
    tien=d*1*15000 + 4*13000 + (d − 5) *11000
  }
  printf("%ld", tien\n);
  
  return 0;
}