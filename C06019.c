#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define ll long long
void lower(char c[]){
    for(ll i = 0; i < strlen(c); i++){
        c[i] = tolower(c[i]);
    }
}
int main(){
    char c[1000];
    char a[1000][100];
    ll n = 0;
    fgets(c, 1000, stdin);
    c[strlen(c) - 1] = '\0';
    char *token = strtok(c, " ");
    while(token != NULL){
        lower(token);
        strcpy(a[n], token);
        n++;
        token = strtok(NULL, " ");
    }
    for(ll i = 0; i < n - 1; i++){
        printf("%c", a[i][0]);
        if(i == n - 2){
            printf("%s", a[n - 1]);
            printf("@ptit.edu.vn");
        }
    }
    printf("\n");
}