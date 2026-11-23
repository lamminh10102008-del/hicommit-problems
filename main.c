#include <stdio.h>
int main()
{
  double d;
    if (scanf("%lf", &d) != 1)
	 {
        return 0;
    }

    double tien = 0.0;

    if (d <= 1.0)
	 {
        tien = d * 15000.0;
    } else if (d <= 5.0) 
	{
        tien = 1.0 * 15000.0 + (d - 1.0) * 13000.0;
    } else
	 {
        tien = 1.0 * 15000.0 + 4.0 * 13000.0 + (d - 5.0) * 11000.0;
    }

    printf("%lld\n", (long long)tien);

    return 0;
}