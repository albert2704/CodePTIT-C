#include<stdio.h>
#define ll long long
#include<math.h>
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        while(n--){
            ll a; scanf("%lld", &a);
            if(a % 2 == 0) printf("%lld ", a);
        }
        printf("\n");
    }
    return 0;
}