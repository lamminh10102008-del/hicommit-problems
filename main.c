#include <stdio.h>
int main()
{
  double d, tien;
  scanf("%lf", &d);
  if(d<=1)
  {
    tien=d*15000;
  }
  else if(d<=5)
  {
    tien=d*1* 15000 + (d − 1) *13000;
  }
  else
  {
    tien=d*1*15000 + 4*13000 + (d − 5) *11000;
  }
   printf("%lld\n", (long long)tien);
  
  return 0;
}