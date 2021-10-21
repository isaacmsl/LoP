#include <stdio.h>
#include <math.h>

double doubleAbs(double x) {
	if (x < 0) return x * -1;
	return x;
}

unsigned long fact(unsigned long x) {
	if (x == 0) return 1;
	return x * fact(x - 1);
}

int main() {
	double x;
	int n;
	scanf("%lf", &x);
	scanf("%d", &n);
	
	double serie = 0.0;
	
	for (int i = 0; i <= n; i++) {
		serie += (pow(-1, i) * pow(x, 2*i))/fact(2*i);
	}

	double re = doubleAbs(cos(x) - serie);
	
	if ((int) (re * 10) == 0) printf("%.16e\n", re);	       
	else printf("%.16lf\n", re);
	
	return 0;
}
