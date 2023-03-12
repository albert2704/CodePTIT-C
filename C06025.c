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
        char c[1002];
        char d[1002];
        fgets(c, 505, stdin);
        c[strlen(c) - 1] = '\0';
        fgets(d, 505, stdin);
        d[strlen(d) - 1] = '\0';
        if(c[0] - '0' < d[0] - '0' && (strlen(c) <= strlen(d))){
            char tmp[1005];
            strcpy(tmp, c);
            strcpy(c, d);
            strcpy(d, tmp);
        }
        ll i = strlen(c) - 1 , j = strlen(d) - 1;
        ll n = 0;
        char res[1005][1005];
        int nho = 0;
        while(i >= 0 && j >= 0){
            ll ok = 0;
            if((int)(c[i] - 48) < (int)(d[j] - 48) + nho){
                sprintf(res[n], "%d", (int)(c[i] - 48) + 10 - (int)(d[j] - 48) - nho);
                nho = 1;
            }
            else{
                ok = 1;
                sprintf(res[n], "%d", (int)(c[i] - 48) - (int)(d[j] - 48) - nho);
            }
            ++n;
            i--;
            j--;
            if(i >= 0 && j >= 0 && ok == 1){
                nho = 0;
            }
        }
        while(i >= 0){
            ll ok = 0;
            int k = (int)(c[i] - 48);
            if(i != 0){
                if((int)(c[i] - 48) >= nho){
                    sprintf(res[n], "%d", k - nho);
                    ok = 1;
                }
                else{
                    sprintf(res[n], "%d", k + 10 - nho);
                }
            }
            else{
                if(k - nho != 0){
                    sprintf(res[n], "%d", k - nho);
                }
            }
            if(ok == 1) 
                nho = 0;
            i--;
            n++;
        }
        for(ll h = n - 1; h >= 0; h--){
            printf("%s", res[h]);
        }
        printf("\n");
    }
}