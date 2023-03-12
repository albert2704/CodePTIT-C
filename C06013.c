#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#define ll long long

int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll cnt[10] = {0};
        char c[1001];
        ll check = 1;
        scanf("%s", c);
        for(ll i = 0; i < strlen(c); i++){
            if(c[0] == '0'){
                printf("INVALID\n");
                check = -1;
                break;
            }
            cnt[c[i] - '0']++;
            if(!isdigit(c[i])){
                printf("INVALID\n");
                check = -1;
                break;
            }
        }
        if(check != -1){
            for(ll i = 0; i <= 9; i++){
                if(cnt[i] == 0){
                    check = 0;
                }
            }
            if(check == 1)
                printf("YES\n");
            else if(check == 0) printf("NO\n");
        }
        
    }
}