#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define ll long long

int main(){
        while(1){
        ll n; scanf("%lld", &n);
        if(n == 0) break;
        else{
            char a[201], b[201];
            scanf("%s %s", a, b);
            char c[1000];
            char res[1000];
            scanf("%s", res);
            strcpy(c, a);
            strcat(c, b);
            ll cnt = 0;
            ll ok = 0;
            char res1[1000];
            char tmp1[1000];
            char tmp2[1000];
            strcpy(res1, c);
            char res2[1000] = "";
            strcpy(res2, c);
            ll g = 0;
            for(ll j = 0; j <= n - 1; j++){
                tmp1[j] = res2[j];
            }
            for(ll k = n; k <= 2 * n - 1; k++){
                tmp2[g++] = res2[k];
            }
            ll q = 0, r = 0, s = 0;
            
            while(q < n && r < n){
                res2[s++] = tmp2[q++];
                res2[s++] = tmp1[r++];
            }
            for(ll i = 0; ; i++){
                ++cnt;
                ll w = 0;
                for(ll j = 0; j <= n - 1; j++){
                    tmp1[j] = res1[j];
                }
                for(ll k = n; k <= 2 * n - 1; k++){
                    tmp2[w++] = res1[k];
                }
                q = 0; r = 0; s = 0;
                while(q < n && r < n){
                    res1[s++] = tmp2[q++];
                    res1[s++] = tmp1[r++];
                }
                if(strcmp(res1, res2) == 0 && i != 0){
                    break;
                }
                if(strcmp(res1, res) == 0){
                    ok = 1;
                    break;
                }
            }
            if(ok == 0) printf("-1\n");
            else printf("%lld\n", cnt);
        }
    }
}