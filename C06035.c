#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long

int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll cnt = 0;
        char c[100];
        scanf("%s", c);
        ll l = 0, r = strlen(c) - 1;
        ll ok = 1;
        while(l <= r){
            if(c[l] != c[r]){
                ++cnt;
                ok = 0;
            }
            ++l;
            --r;
        }
        if(ok == 1 && strlen(c) % 2 == 0) printf("NO\n");
        if(cnt >= 2) printf("NO\n");
        else{
            if(ok != 1 || (ok == 1 && strlen(c) % 2 != 0))
                printf("YES\n");
        }
    }
    return 0;
}