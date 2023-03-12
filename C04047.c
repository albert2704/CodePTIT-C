#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define ll long long
struct tourist{
    ll begin, checkin;
};
typedef struct tourist tourist;
int cmp(const void*a, const void *b){
    tourist *x = (tourist*)a;
    tourist *y = (tourist*)b;
    return x->begin - y->begin;
}
ll max(ll a, ll b){
    if(a > b) return a;
    return b;
}
int main(){
    ll n; scanf("%lld", &n);
    tourist x[105];
    ll end = 0;
    ll start = 0;
    for(ll i = 0; i < n; i++){
        ll a, b;
        scanf("%lld %lld", &a, &b);
        x[i].begin = a;
        x[i].checkin = b;
    }
    qsort(x, n, sizeof(tourist), cmp);
    start = x[0].begin;
    for(ll i = 0; i < n - 1; i++){
        end = start + x[i].checkin;
        start = max(end, x[i + 1].begin);
    }
    end = start + x[n - 1].checkin;
    printf("%lld\n", end);
    return 0;
}