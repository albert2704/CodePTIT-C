#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long
int cmp(const void *a, const void *b){
    char *x = (char*)a;
    char *y = (char*)b;
    return strcmp(x, y);
}
int main(){
    ll t; scanf("%lld", &t);
    getchar();
    while(t--){
        char s1[1000];
        char s2[1000];
        char a[1000][100];
        char b[1000][100];
        ll n = 0, m = 0;
        fgets(s1, 1000, stdin);
        s1[strlen(s1) - 1] = '\0';
        fgets(s2, 1000, stdin);
        s2[strlen(s2) - 1] = '\0';
        char *token1 = strtok(s2, " ");
        while(token1 != NULL){
            strcpy(b[m], token1);
            m++;
            token1 = strtok(NULL, " ");
        }
        char *token = strtok(s1, " ");
        while(token != NULL){
            ll check = 1;
            for(ll i = 0; i < m; i++){
                if(strcmp(b[i], token) == 0){
                    check = 0;  
                    break;
                }
            }
            if(check == 1){
                ll ok = 1;
                for(ll i = 0; i < n; i++){
                    if(strcmp(token, a[i]) == 0) ok = 0;
                }
                if(ok == 1){
                    strcpy(a[n], token);
                    n++;
                }
            }
            token = strtok(NULL, " ");
        }
        qsort(a, n, sizeof(a[0]), cmp);
        for(ll i = 0; i < n; i++){
            printf("%s", a[i]);
            if(i != n - 1) printf(" ");
        }
        printf("\n");
    }
}