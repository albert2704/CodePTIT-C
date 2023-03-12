#include<stdio.h>
#include<math.h>
#define ll long long
ll P[2000001];
void sieve(){
    for(ll i = 0; i <= 2000001; i++){
        P[i] = i;
    }
    for(ll i = 2; i <= sqrt(2000001); i++){
        if(P[i] == i){
            for(ll j = i * i; j <= 2000001; j += i){
                P[j] = i;
            }
        }
    }
}
int sum(int n){
    int tmp = 0;
    while(n != 1){
        tmp += P[n];
        n /= P[n];
    }
    return tmp;
}
int main(){
    int t; scanf("%d", &t);
    ll res = 0;
    sieve();
    while(t--){
        int n; scanf("%d", &n);
        res += sum(n);
    }
    printf("%lld\n", res);
    return 0;
}