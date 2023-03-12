#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define ll long long
int cmp(const void *a, const void *b){
        int *x = (int*)a;
        int *y = (int*)b;
        if(*x < *y) return -1;
        return 1;
}
int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        int a[n];
        for(ll i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        qsort(a, n, sizeof(int), cmp);
        ll res = 3e9, cnt = 0;
        for(ll i = 1; i < n; i++){
            if(a[i] - a[i - 1] < res){
                res = a[i] - a[i - 1];
                cnt = 1;
            }
            else if(a[i] - a[i - 1] == res){
                ++cnt;
            }
        }
        printf("%lld %lld\n", res, cnt);
    }
    return 0;
}