#include<stdio.h>
#include<math.h>
#define ll long long
ll sum(ll n){
    ll res = 0;
    while(n){
        res += n % 10;
        n /= 10;
    }
    return res;
}
ll analyst(ll n){
    ll sum1 = 0;
    for(ll i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            while(n % i == 0){
                sum1 += sum(i);
                n /= i;
            }
        }
    }
    if(n != 1) sum1 += sum(n);   
    return sum1;
}
int main(){
    ll n; scanf("%lld", &n);
    if(analyst(n) == sum(n)) printf("YES\n");
    else printf("NO\n");
    return 0;
}