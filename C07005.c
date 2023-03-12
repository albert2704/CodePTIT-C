#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define ll long long
struct triangle{
    double a, b, c;
};
typedef struct triangle triangle;
int main(){
    ll t; scanf("%lld", &t);
    triangle x[1001];
    for(ll i = 0; i < t; i++){
        double m, n, p, q, r, s;
        scanf("%lf %lf %lf %lf %lf %lf", &m, &n, &p, &q, &r, &s);
        x[i].a = sqrt((m - p) * (m - p) + (n - q) * (n - q));
        x[i].b = sqrt((m - r) * (m - r) + (n - s) * (n - s));
        x[i].c = sqrt((p - r) * (p - r) + (q - s) * (q - s));
        if(x[i].a + x[i].b > x[i].c && x[i].a + x[i].c > x[i].b && x[i].b + x[i].c > x[i].a){
            printf("%.3lf\n", x[i].a + x[i].b + x[i].c);
        }
        else printf("INVALID\n");
    }
    return 0;
}