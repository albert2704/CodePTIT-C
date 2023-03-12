#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define ll long long

int main(){
    char a[1000];
    scanf("%s", a);
    ll t = strlen(a);
    if(t == 1){
        printf("%s\n", a);
        return 0;
    }
    while(t != 1){
        char c[200] , d[200];
        ll n = 0, m = 0;
        for(ll i = 0; i < t / 2; i++){
            c[n] = a[i];
            n++;
        }
        for(ll i = t / 2; i < t; i++){
            d[m] = a[i];
            m++;
        }
        n--;
        m--;
        char res[505][505];
        int v = 0;
        int nho = 0;
        while(n >= 0 && m >= 0){
            ll ok = 0;
            int k = (int)(c[n] - 48) + (int)(d[m] - 48);
            if(n == 0 && m == 0) sprintf(res[v], "%d", k + nho);
            else{
                if(k + nho < 10){
                    sprintf(res[v], "%d", (k + nho) % 10);
                    ok = 1;
                }
                else if(k + nho == 10){
                    sprintf(res[v], "%d", 0);
                    nho = 1;
                }
                else{
                    sprintf(res[v], "%d", (k + nho) % 10);
                    nho = 1;
                }
            }
            ++v;
            n--;
            m--;
            if(ok == 1){
                nho = 0;
            }
        }
        while(n >= 0){
            int k = (int)(c[n] - 48);
            if(k + nho == 10){
                if(n == 0){
                    sprintf(res[v], "%d", k + nho);
                    ++v;
                }
                else{
                    sprintf(res[v], "%d", 0);
                    ++v;
                }
            }
            else{
                sprintf(res[v], "%d", k + nho);
                ++v;
            }
            n--;
        }
        while(m >= 0){
            int k = (int)(d[m] - 48);
            if(k + nho == 10){
                if(m == 0){
                    sprintf(res[v], "%d", k + nho);
                    ++v;
                }
                else{
                    sprintf(res[v], "%d", 0);
                    ++v;
                }
            }
            else{
                sprintf(res[v], "%d", k + nho);
                ++v;
            }
            m--;
        }
        char tmp[1000] = "";
        ll p = 0;
        if(strcmp(res[v - 1], "0") != 0) strcat(tmp, res[v - 1]);
        for(ll h = v - 2; h >= 0; h--){
            // printf("%s", res[h]);
            strcat(tmp, res[h]);
        }
        t = strlen(tmp);
        printf("%s\n", tmp);
        strcpy(a, tmp);
    }
}