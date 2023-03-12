#include<stdio.h>
#define ll long long
int main(){
    ll t;
    scanf("%lld", &t);
    while(t--){
        ll sum = 0;
        ll n; scanf("%lld", &n);
        while(n){
            sum += n % 10;
            n /= 10;
        }
        if(sum % 10 == 0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}