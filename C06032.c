#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define ll long long
int cmp(const void *a, const void *b){
    char *x = (char*)a;
    char *y = (char*)b;
    char xy[1000], yx[1000];
    strcpy(xy, x);
    strcat(xy, y);
    strcpy(yx, y);
    strcat(yx, x);
    return strcmp(xy, yx);
}
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        char a[n][100];
        for(ll i = 0; i < n; i++){
            char c[100];
            scanf("%s", c);
            strcpy(a[i], c);
        }
        qsort(a, n, sizeof(a[0]), cmp);
        for(ll i = 0; i < n; i++){
            printf("%s", a[i]);
        }
        printf("\n");
    }
}