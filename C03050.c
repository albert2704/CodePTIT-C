#include<stdio.h>
#include<math.h>
#define ll long long
ll cnt[1000001] = {0};
int main(){
    ll n;
    scanf("%lld", &n);
    ll tmp = n;
    n--;
    while(n--){
        ll a, b; scanf("%lld %lld", &a, &b);
        cnt[a]++;
        cnt[b]++; 
    }
    for(ll i = 1; i <= tmp; i++){
        if(cnt[i] == tmp - 1){
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n");
    return 0;
}