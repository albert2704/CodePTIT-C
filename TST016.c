#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define ll long long

int main(){
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;
    char c[10000];
    scanf("%s", c);
    for(ll i = 0; i < strlen(c); i++){
        if(c[i] == '(') ++c1;
        else if(c[i] == ')') --c1;
        else if(c[i] == '{') ++c2;
        else if(c[i] == '}') --c2;
        else if(c[i] == '[') ++c3;
        else if(c[i] == ']') --c3;
        else if(c[i] == (char)39) ++c4;
        else if(c[i] == '"') ++c5;
        if(c1 < 0 || c2 < 0 || c3 < 0){
            printf("0\n");
            return 0;
        }
    }
    if(c1 == 0 && c2 == 0 && c3 == 0 && c4 % 2 == 0 && c5 % 2 == 0)
        printf("1\n");
    else printf("0\n");
    return 0;
}