#include<stdio.h>
#define ll long long
#include<math.h>
ll check(ll n){
    ll cnt = 0;
    while(n % 2 == 0){
        n /= 2;
        ++cnt;
    }
    return cnt;
}
int main(){
    ll sum = 0; 
    ll n, k; scanf("%lld %lld", &n, &k);
    for(ll i = 2; i <= n; i++){
        sum += check(i);
    }
    if(sum >= k) printf("Yes\n");
    else printf("No\n");
    return 0;
}