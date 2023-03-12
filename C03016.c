#include<stdio.h>
#define ll long long
ll F[65];
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        F[0] = 0;
        F[1] = 1;
        ll tmp = 0;
        if(n == 0 || n == 1){
            printf("YES\n");
            tmp = 1;
            continue;
        }
        for(ll i = 2; i <= 100; i++){
            F[i] = F[i - 1] + F[i - 2];
            if(n == F[i]){
                printf("YES\n");
                tmp = 1;
            }
        }
        if(tmp == 0) printf("NO\n");
    }
}