#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define ll long long
struct good{
    ll id;
    char name[1000];
    char group[1000];
    double cost;
    double price;
    double loinhuan;
};
typedef struct good good;
int cmp(const void *a, const void *b){
    good *x = (good*)a;
    good *y = (good*)b;
    return y->loinhuan - x->loinhuan;
}
int main(){
    ll t; scanf("%lld", &t);
    getchar();
    good x[1000];
    for(ll i = 0; i < t; i++){
        x[i].id = i + 1;
        char a[1000];
        fgets(a, 1000, stdin);
        a[strlen(a) - 1] = '\0';
        char b[1000];
        fgets(b, 1000, stdin);
        b[strlen(b) - 1] = '\0';
        strcpy(x[i].name, a);
        strcpy(x[i].group, b);
        double c, d;
        scanf("%lf %lf", &c, &d);
        getchar(); 
        x[i].cost = c;
        x[i].price = d;
        x[i].loinhuan = x[i].price - x[i].cost;
    }
    qsort(x, t, sizeof(good), cmp);
    for(ll i = 0; i < t; i++){
        printf("%lld %s %s %.2lf\n", x[i].id, x[i].name, x[i].group, x[i].loinhuan);
    }
    return 0;
}