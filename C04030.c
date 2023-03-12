#include<stdio.h>
#define ll long long
#include<math.h>
int cmp(const void *a, const void *b){
    int *x = (int*)a;
    int *y = (int*)b;
    if(*x < *y) return -1;
    return 1;
}
int cmp1(const void *a, const void *b){
    int *x = (int*)a;
    int *y = (int*)b;
    if(*x > *y) return -1;
    return 1;
}
int main(){
    ll t; scanf("%lld", &t);
    for(ll k = 1; k <= t; k++){
        ll n; scanf("%lld", &n);
        int a[n], b[n];
        for(ll i = 0; i < n; i++) scanf("%d", &a[i]);
        for(ll i = 0; i < n; i++) scanf("%d", &b[i]);
        qsort(a, n, sizeof(int), cmp);
        qsort(b, n, sizeof(int), cmp1);
        int i = 0, j = 0, pos = 0;
        printf("Test %lld:\n", k);
        while(i < n && j < n){
            if(pos % 2 == 0){
                printf("%d ", a[i]);
                ++i;
            }
            else if(pos % 2 != 0){
                printf("%d ", b[j]);
                ++j;
            }
            ++pos;
        }
        while(i < n){
            printf("%d ", a[i]);
            ++i;
        }
        while(j < n){
            printf("%d ", b[j]);
            ++j;
        }
        printf("\n");
    }
}