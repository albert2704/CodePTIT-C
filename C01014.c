#include<stdio.h>
int main(){
    long long a, b;
    scanf("%lld %lld", &a, &b);
    if(a == 0 && b == 0)
        printf("%s\n", "Vo so nghiem");
    else if(a == 0 && b != 0)
        printf("%s\n", "Vo nghiem");
    else printf("%.2lf\n", -1.0 * b / a);
    return 0;
}