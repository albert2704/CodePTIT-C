#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long
void chuanHoa(char c[]){
    c[0] = toupper(c[0]);
    for(ll i = 1; i < strlen(c); i++){
        c[i] = tolower(c[i]);
    }
}
void chuanHoa1(char c[]){
    for(ll i = 0; i < strlen(c); i++){
        c[i] = toupper(c[i]);
    }
}
int main(){
    ll t; scanf("%lld", &t);
    getchar();
    while(t--){
        char a[20000][100];
        char c[10001];
        fgets(c, 10001, stdin);
        c[strlen(c) - 1] = '\0';
        ll n = 0;
        char *token = strtok(c, " ");
        while(token != NULL){
            chuanHoa(token);
            strcpy(a[n], token);
            n++;
            token = strtok(NULL, " ");
        }
        chuanHoa1(a[0]);
        for(ll i = 1; i < n; i++){
            printf("%s", a[i]);
            if(i != n - 1) printf(" ");
            if(i == n - 1) printf(", %s", a[0]);
        }
        printf("\n");
    }
    return 0;
}