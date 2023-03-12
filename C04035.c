#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define ll long long
ll min(ll a, ll b){
    if(a < b) return a;
    return b;
}
int main(){
    ll n; scanf("%lld", &n);
    ll time_up = 0, time_down = 0;
    ll min_up = 1e9, min_down = 1e9;
    ll final;
    ll up[30000], down[30000];
    for(ll i = 0; i < n; i++){
        scanf("%lld %lld", &up[i], &down[i]);
        time_up += up[i];
        time_down += down[i];
        min_up = min(min_up, up[i]);
        min_down = min(min_down, down[i]);
    }
    if(time_up > time_down) final = time_up + min_down;
    else final = time_down + min_up;
    printf("%lld\n", final);
    return 0;
}