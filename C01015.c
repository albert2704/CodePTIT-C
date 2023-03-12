#include<stdio.h>
#include<math.h>
int main(){
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    double delta = b * b - 4 * a * c;
    if(delta < 0) printf("%s\n", "NO");
    else{
        if(delta == 0) printf("%.2lf\n", -1.0 * b / (2 * a));
        else printf("%.2lf %.2lf\n", (-1.0 * b + sqrt(delta)) / (2 * a), (-1.0 * b - sqrt(delta)) / (2 * a));

    }
    return 0;
}