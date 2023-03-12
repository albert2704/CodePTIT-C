#include<stdio.h>
#define ll long long
#include<math.h>

int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll a, b, c, d; scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
        if(c - a == d - b) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}