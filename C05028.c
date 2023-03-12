#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define ll long long
char a[15][15];
ll cnt1 = 0;
void duyet_cot(ll c, ll d){
    for(ll i = 0; i <= c; i++){
        for(ll j = 0; j <= d; j++){
            if(a[i][j] == '1'){
                a[i][j] = '0';
            }
            else a[i][j] = '1';
        }
    }
}
ll cnt(ll x, ll y){
    ll res = 0;
    for(ll i = 0; i <= x; i++){
        for(ll j = 0; j <= y; j++){
            if(a[i][j] == '1') ++res; 
        }
    }
    return res;
}
int main(){
    ll n; scanf("%lld", &n);
    for(ll i = 0; i < n; i++){
        scanf("%s", a[i]);
    }
    for(ll i = n - 1; i >= 0; i--){
        for(ll j = n - 1; j >= 0; j--){
            if(a[i][j] == '1'){
                ++cnt1;
                if(i == 0 && j == 0){
                    if(a[i][j] == '1') a[i][j] = '0'; 
                }
                else if(i == 0 || j == 0){
                    if(j == 0){
                        if(a[i][j] == '1'){
                            for(ll k = 0; k <= i; k++){
                                if(a[k][0] == '0') a[k][0] = '1';
                                else a[k][0] = '0';
                            }
                 
                        }
                    }
                    else if(i == 0){
                        if(a[i][j] == '1'){
                            for(ll k = 0; k <= j; k++){
                                if(a[0][k] == '0') a[0][k] = '1';
                                else a[0][k] = '0';
                            }
                    
                        }
                        
                    }
                }
                else{
                    duyet_cot(i, j);
                }
            }
        }
    }
    printf("%lld\n", cnt1);
    return 0;
}