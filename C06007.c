#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define ll long long

int main(){
    char c[1000];
    char d[1000];
    fgets(c, 1000, stdin);
    c[strlen(c) - 1] = '\0';
    scanf("%s", d);
    ll n = 0;
    char a[20000][100];
    char *token = strtok(c, " ");
    while(token != NULL){
        strcpy(a[n], token);
        ++n;
        token = strtok(NULL, " ");
    }
    for(ll i = 0; i < n; i++){
        if(strcmp(a[i], d) == 0){
            printf(" ");
        }
        else printf("%s ", a[i]);
    }
    printf("\n");
    return 0;
}