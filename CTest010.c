#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define ll long long
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        char c[10000];
        scanf("%s", c);
        ll cnt[256] = {0};
        if(strlen(c) == 1){
            printf("%s%d\n", c, 1);
        }
        for(ll i = 0; i < strlen(c) - 1; i++){
            cnt[c[i]]++;
            if(c[i] != c[i + 1]){
                printf("%c%lld", c[i], cnt[c[i]]);
                cnt[c[i]] = 0;
            }
            if(i == strlen(c) - 2){
                if(cnt[c[i + 1]] == 0){
                    printf("%c%d\n", c[i + 1], 1);
                }
                else printf("%c%lld\n", c[i], ++cnt[c[i]]);
            }
        }
    }
}