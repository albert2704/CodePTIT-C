#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#define ll long long

int main(){
    char c[1000];
    char a[20000][100];
    fgets(c, 1000, stdin);
    c[strlen(c) - 1] = '\0';
    char *token = strtok(c, " ");
    ll n = 0;
    while(token != NULL){
        ll check = 1;
        for(ll i = 0; i < n; i++){
            if(strcmp(a[i], token) == 0) check = 0;
        }
        if(check == 1){
            strcpy(a[n], token);
            ++n;
        }
        token = strtok(NULL, " ");
    }
    for(ll i = 0 ; i < n ; i++){
        printf("%s ", a[i]);
    }
    printf("\n");
}