#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define ll long long
void turn(char c[]){
    char a[strlen(c)];
    strcpy(a, c);
    for(ll i = 1; i < strlen(c); i++){
        c[i - 1] = a[i];
    }
    c[strlen(c) - 1] = a[0];
}
int main(){
    ll n; scanf("%lld", &n);
    char c[n][100];
    for(ll i = 0; i < n; i++){
        scanf("%s", c[i]);
    }
    ll min = 1e9;
    ll len = strlen(c[0]);
    ll check = 1;
    char res[n][100];
    for(ll i = 0; i < n; i++){
        ll cnt = 0;
        for(ll k = 0; k < n; k++){
            strcpy(res[k], c[k]);
        }
        for(ll j = 0; j < n; j++){
            if(i != j){
                ll tmp = 0;
                for(ll l = 0; l < len; l++){
                    if(strcmp(res[i], res[j]) == 0) break;
                    turn(res[j]);
                    ++cnt;
                    ++tmp;
                    if(tmp == len && strcmp(res[i], res[j]) != 0) check = 0;
                }
            }
        }
        if(cnt < min) min = cnt;
    }
    if(check == 0) printf("-1\n");
    else printf("%lld\n", min);
}