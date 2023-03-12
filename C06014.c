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
int main(){
    ll t; scanf("%lld", &t);
    getchar();
    while(t--){
        char c[10001];
        fgets(c, 10001, stdin);
        c[strlen(c) - 1] = '\0';
        char *token = strtok(c, " ");
        while(token != NULL){
            chuanHoa(token);
            printf("%s ", token);
            token = strtok(NULL, " ");
        }
        printf("\n");
    }
    return 0;
}