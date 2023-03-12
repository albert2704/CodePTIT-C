#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define ll long long
struct ts{
    char name[100], birth[100];
    ll id;
    double m1, m2, m3;
    double sum;
};
typedef struct ts ts;
double max(double a, double b){
    if(a > b) return a;
    return b;
}
int main(){
    ll t; scanf("%lld", &t);
    ts x[t];
    double max_score = -1;
    for(ll i = 0; i < t; i++){
        getchar();
        char a[100], b[100];
        double c, d, e;
        fgets(a, 100, stdin);
        a[strlen(a) - 1] = '\0';
        fgets(b, 100, stdin);
        b[strlen(b) - 1] = '\0';
        scanf("%lf %lf %lf", &c, &d, &e);
        strcpy(x[i].name, a);
        strcpy(x[i].birth, b);
        x[i].id = i + 1;
        x[i].m1 = c;
        x[i].m2 = d;
        x[i].m3 = e;
        x[i].sum = x[i].m1 + x[i].m2 + x[i].m3;
        max_score = max(max_score, x[i].sum);
    }
    for(ll i = 0; i < t; i++){
        if(x[i].sum == max_score){
            printf("%lld %s %s %.1lf\n", x[i].id, x[i].name, x[i].birth, x[i].sum);
        }
    }
    return 0;
}