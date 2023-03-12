#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define ll long long
struct triangle{
    double a, b, c;
    double dt;
};
typedef struct triangle triangle;
int cmp(const void *a, const void *b){
    triangle *x = (triangle*)a;
    triangle *y = (triangle*)b;
    return x->dt - y->dt;
}
int main(){
    triangle x[100];
    ll t; scanf("%lld", &t);
    getchar();
    for(ll i = 0; i < t; i++){
        double a, b, c;
        scanf("%lf %lf %lf", &a, &b, &c);
        double p = (a + b + c) / 2;
        x[i].a = a;
        x[i].b = b;
        x[i].c = c;
        x[i].dt = sqrt(p*(p - a)*(p - b)*(p - c));
    }
    qsort(x, t, sizeof(triangle), cmp);
    for(ll i = 0; i < t; i++){
        printf("%.0lf %.0lf %.0lf\n", x[i].a, x[i].b, x[i].c);
    }
}