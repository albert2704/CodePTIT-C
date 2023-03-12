#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define ll long long

int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll n, m;
        ll cnt = 0;
        scanf("%lld %lld", &n, &m);
        char a[n][m];
        ll tong1[1000] = {0}, tong2[1000] ={0};
        for(ll i = 0; i < n; i++){
            scanf("%s", a[i]);
        }
for(ll i = 0; i < n; i++){
            for(ll j = 0; j < m; j++){
                if(a[i][j] == '1') tong1[j] += 1;
                if(a[i][j] == '2') tong2[j] += 1;
            }
}
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < m; j++){
                for(ll k = 0; k < m; k++){
                    if(a[i][j] != '0' && a[i][k] != '0' && a[i][j] != a[i][k] && j !=k ){
                        if(a[i][j] == '1') cnt += tong2[j];
                        else cnt += tong1[j];
                    }
                  
                }
                
            }
        }
        printf("%lld\n", cnt);
    }
}