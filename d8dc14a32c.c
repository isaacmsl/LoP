#include <stdio.h>

int main() {
	double a, b, c;
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	
	double re = (a + b + c)/3;

	if ((re - (int) re) > 0.0) printf("%.2lf\n", re);
	else printf("%d\n", (int) re);

	return 0;
}
