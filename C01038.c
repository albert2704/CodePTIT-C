#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int n;
	scanf("%d", &n);
	int c = n % 10;
	int dem = 0, m = n;
	while(n >= 10){
		++dem;
		n /= 10;
	}
	int res = m - n * (int)pow(10, dem) - c;
	res += c * (int)pow(10, dem) + n;
	printf("%d", res);
	return 0;
}