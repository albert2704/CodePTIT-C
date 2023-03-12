#include<stdio.h>
#define ll long long
#include<math.h>
ll max(ll a, ll b){
    if(a < b) return b;
    return a;
}
int main(){
    ll t; scanf("%lld", &t);
    for(ll k = 1; k <= t; k++){
        ll n, m; scanf("%lld %lld", &n, &m);
        ll a[n][m];
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < m; j++){
                scanf("%lld", &a[i][j]);
            }
        }
        printf("Test %lld:\n", k);
        ll max_val = -1e9, max_val1 = -1e9;
        for(int i = 0; i < n; i++){
            ll sum = 0;
            for(ll j = 0; j < m; j++){
                sum += a[i][j];
            }
            max_val = max(max_val, sum);
        }
        ll hang_max = -1, cot_max = -1;
        for(int i = 0; i < n; i++){
            ll sum = 0;
            for(ll j = 0; j < m; j++){
                sum += a[i][j];
            }
            if(sum == max_val) hang_max = i;
        }
        for(int i = 0; i < m; i++){
            ll sum = 0;
            for(ll j = 0; j < n; j++){
                if(j != hang_max)
                    sum += a[j][i];
            }
            max_val1 = max(max_val1, sum);
        }
        for(int i = 0; i < m; i++){
            ll sum = 0;
            for(ll j = 0; j < n; j++){
                if(j != hang_max)
                    sum += a[j][i];
            }
            if(sum == max_val1) cot_max = i;
        }
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < m; j++){
                if(i != hang_max && j != cot_max){
                    printf("%lld ", a[i][j]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}