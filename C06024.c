#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define ll long long

int main(){
    ll t; scanf("%lld", &t);
    getchar();
    while(t--){
        char c[505];
        char d[505];
        fgets(c, 505, stdin);
        c[strlen(c) - 1] = '\0';
        fgets(d, 505, stdin);
        d[strlen(d) - 1] = '\0';
        ll i = strlen(c) - 1 , j = strlen(d) - 1;
        ll n = 0;
        char res[505][505];
        int nho = 0;
        while(i >= 0 && j >= 0){
            ll ok = 0;
            int k = (int)(c[i] - 48) + (int)(d[j] - 48);
            if(i == 0 && j == 0) sprintf(res[n], "%d", k + nho);
            else{
                if(k + nho < 10){
                    sprintf(res[n], "%d", (k + nho) % 10);
                    ok = 1;
                }
                else if(k + nho == 10){
                    sprintf(res[n], "%d", 0);
                    nho = 1;
                }
                else{
                    sprintf(res[n], "%d", (k + nho) % 10);
                    nho = 1;
                }
            }
            ++n;
            i--;
            j--;
            if(ok == 1){
                nho = 0;
            }
        }
        while(i >= 0){
            int k = (int)(c[i] - 48);
            if(k + nho == 10){
                if(i == 0){
                    sprintf(res[n], "%d", k + nho);
                    ++n;
                }
                else{
                    sprintf(res[n], "%d", 0);
                    ++n;
                }
            }
            else{
                sprintf(res[n], "%d", k + nho);
                ++n;
            }
            i--;
        }
        while(j >= 0){
            int k = (int)(d[j] - 48);
            if(k + nho == 10){
                if(j == 0){
                    sprintf(res[n], "%d", k + nho);
                    ++n;
                }
                else{
                    sprintf(res[n], "%d", 0);
                    ++n;
                }
            }
            else{
                sprintf(res[n], "%d", k + nho);
                ++n;
            }
            j--;
        }
        for(ll h = n - 1; h >= 0; h--){
            printf("%s", res[h]);
        }
        printf("\n");
    }
}