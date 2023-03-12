#include<stdio.h>
#define ll long long
#include<math.h>
ll max(ll a, ll b){
    if(b > a) return b;
    return a;
}
int main(){
    ll t; scanf("%lld", &t);
    for(ll m = 1; m <= t; m++){
        ll n; scanf("%lld", &n);
        ll a[n];
        ll max_fre = -1;
        for(ll i = 0; i < n; i++){
            scanf("%lld", &a[i]);
        }
        ll cnt = 1;
        ll cnt1 = 1;
        for(ll i = 1; i < n; i++){
                if(a[i] > a[i - 1]){
                    cnt++;
                    max_fre = max(max_fre, cnt);
                }
                else{
                    cnt = 1;
                    continue;
                }
        }
        printf("Test %lld:\n", m);
        printf("%lld\n", max_fre);
        for(ll i = 1; i < n; i++){
            ll tmp = i;
            if(a[i] > a[i - 1]){
                ++cnt1;
            }
            else{
                cnt1 = 1;
            }
            if(cnt1 == max_fre){
                ll b[max_fre];
                for(ll j = 0; j < max_fre; j++){
                    b[j] = a[tmp - max_fre + 1];
                    tmp++;
                }
                for(ll k = 0; k < max_fre; k++){
                    printf("%lld ", b[k]);
                }
                printf("\n");
            }
        }
    }
    return 0;
}