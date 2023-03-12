#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        double a;
        scanf("%lf", &a);
        if(a > 0)
            printf("%.15lf\n", 1 / a);
    }
    return 0;
}