#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long
ll check(char c[]){
    for(ll i = 0; i < strlen(c) - 3; i++){
        if(c[i] != c[i + 1]) return 0;
    }
    for(ll i = strlen(c) - 2; i < strlen(c) - 1; i++){
        if(c[i] != c[i + 1]) return 0;
    }
    return 1;
}
ll check1(char b[]){
    for(ll i = 0; i < strlen(b) - 1; i++){
        if(b[i] != b[i + 1]) return 0;
    }
    return 1;
}
ll check2(char b[]){
    for(ll i = 0; i < strlen(b) - 1; i++){
        if(b[i] - '0' >= b[i + 1] - '0') return 0; 
    }
    return 1;
}
ll check3(char b[]){
    for(ll i = 0 ; i < strlen(b); i++){
        if(b[i] - '0' != 6 && b[i] - '0' != 8) return 0;
    }
    return 1;
}
int main(){
    ll t; scanf("%lld", &t);
    getchar();
    while(t--){
        char c[10001];
        fgets(c, 10001, stdin);
        c[strlen(c) - 1] = '\0';
        char a[100][100];
        char b[1000];
        ll n = 0;
        char *token = strtok(c, " ");
        while(token != NULL){
            strcpy(a[n], token);
            n++;
            token = strtok(NULL, " ");
        }
        char *token1 = strtok(a[n - 1], ".");
        while(token1 != NULL)
        {
            strcpy(a[n], token1);
            n++;
            token1 = strtok(NULL, ".");
        }
        strcpy(b, a[2]);
        strcat(b, a[3]);
        if(check(b) || check1(b) || check2(b) || check3(b)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}