#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
#define ll long long
ll check(char c[]){
    ll cnt_even = 0;
    ll cnt_odd = 0;
    if(strlen(c) % 2 == 0){
        for(ll i = 0; i < strlen(c); i++){
            if((c[i] - '0') % 2 == 0) ++cnt_even;
            else ++cnt_odd;
        }
        if(cnt_even > cnt_odd) return 1;
        return 0;
    }
    else{
        for(ll i = 0; i < strlen(c); i++){
            if((c[i] - '0') % 2 == 0) ++cnt_even;
            else ++cnt_odd;
        }
        if(cnt_odd > cnt_even) return 1;
        return 0;
    }
}
int main(){
    ll t; scanf("%lld", &t);
    getchar();
    while(t--){
        char c[10000];
        fgets(c, 10000, stdin);
        c[strlen(c) - 1] = '\0';
        ll ok = 1;
        if(c[0] == '0'){
            ok = 0;
        }
        for(ll i = 0; i < strlen(c); i++){
            if(!isdigit(c[i])) ok = 0;
        }
        if(ok == 0){
            printf("INVALID\n");
        }
        if(ok == 1){
            if(check(c)) printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;
}