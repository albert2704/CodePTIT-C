#include<stdio.h>
#include<math.h>
#define ll long long
int main(){
    ll n; scanf("%lld", &n);
    ll sum = 1;
    for(ll i = 2; i < sqrt(n); i++){
        if(n % i == 0){
            sum += i;
            if(n / i != i) sum += n / i;
        }
    }
    if(sum == n) printf("1\n");
    else printf("0\n");
    return 0;
}