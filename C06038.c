#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define ll long long
char w[300][301];
void tong(char c[], char d[], ll x){
    ll n = 0;
    ll i = strlen(c) - 1 , j = strlen(d) - 1;
    char res[105][205];
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
        strcat(w[x], res[h]);
    }
    x++;
}
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        
        char c[201]; scanf("%s", c);
        char d[201]; 
        char e[1001];
        char f[1091];
        strcpy(d, c);
        strcat(d, c);
        if(strlen(c) == 1){
            printf("YES\n");
        }
        else{
            ll x = 2;
            tong(c, c, x);
            strcpy(f, w[x]);
            x++;
            if(strlen(c) == 2){
                if(strstr(d, f) != NULL) printf("YES\n");
                else printf("NO\n");
            }
            else{
                ll ok = 1;
                for(ll i = 3; i <= strlen(c); i++){
                    tong(f, c, x);
                    strcpy(e, w[x]);
                    x++;
                    strcpy(f, e);
                    if(strstr(d, e) == NULL) ok = 0;
                }
                if(ok == 0){
                    printf("NO\n");
                }
                else printf("YES\n");
            }
            for(ll i = 0; i <= x; i++){
                strcpy(w[i], "");
            }
        }
    }
    return 0;
}