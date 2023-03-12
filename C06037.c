#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define ll long long

int main(){
    char c[53];
    scanf("%s", c);
    ll cnt = 0;
    for(char i  = 'A'; i <= 'Z'; i++){
        ll ok = 0;
        for(ll j = 0; j < 52; j++){
            if(ok == 1) break;
            if(c[j] == i){
                ok = 1;
                ll cnt1[256] = {0};
                for(ll k = j + 1; k < 52; k++){
                    if(c[k] == i) break;
                    else{
                        cnt1[c[k]]++;
                    }
                }
                for(ll k = j + 1; k < 52; k++){
                    if(c[k] == i) break;
                    if(c[k] > i && cnt1[c[k]] != 2){
                            ++cnt;
                    }
                }
            }
        }
    }
    printf("%lld\n", cnt);
}