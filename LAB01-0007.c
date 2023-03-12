#include<stdio.h>
#define ll long long

int main(){
    ll t; scanf("%lld", &t);
    ll a[t];
    double sum = 0;
    for(ll i = 0; i < t; i++){
        scanf("%lld", &a[i]);
        sum += a[i];
    }
    sum /= t;
    printf("%.3lf\n", sum);
    return 0;
}