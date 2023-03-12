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
    ll t; scanf("%lld", &t);
    getchar();
    for(ll i = 1; i <= t; i++){
        
        char s1[1000];
        char s2[1000];
        fgets(s1, 1000, stdin);
        s1[strlen(s1) - 1] = '\0';
        fgets(s2, 100, stdin);
        s2[strlen(s2) - 1] = '\0';
        char *token = strtok(s1, " ");
        char a[1000][300];
        ll n = 0;
        while(token != NULL){
            char tmp[1000];
            strcpy(tmp, token);
            lower(tmp);
            char tmp2[1000];
            strcpy(tmp2, s2);
            lower(tmp2);
            if(strcmp(tmp, tmp2) != 0){
                strcpy(a[n], token);
                n++;
            }
            else{
                strcat(a[n - 1], " ");
            }
            token = strtok(NULL, " ");
        }
        printf("Test %lld: ", i);
        for(ll i = 0; i < n; i++){
            printf("%s ", a[i]);
        }
        printf("\n");
    }
}