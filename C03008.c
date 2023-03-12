#include<stdio.h>
#define ll long long
#include<math.h>
ll sum_uoc(ll n){
    ll sum = 1;
    for(ll i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
                sum += i;
                if(n / i != i) sum += n / i;
        }
    }
    return sum;
}
int main(){
    ll n; scanf("%lld", &n);
    for(ll i = 2; i <= n; i++){
        if(sum_uoc(i) == i) printf("%lld ", i);
    }
    return 0;
}