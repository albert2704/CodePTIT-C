#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define ll long long

int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll sum  = 0;
        char x[10001];
        scanf("%s", x);
        if(strlen(x) == 1){
            if(x[0] == 'X') sum += 10;
            else if(x[0] == 'V') sum += 5;
            else if(x[0] == 'I') sum += 1;
            else if(x[0] == 'L') sum += 50;
            else if(x[0] == 'D') sum += 500;
            else if(x[0] == 'M') sum += 1000;
            else sum += 100;
        }
            for(ll i = 0; i < strlen(x) - 1; i++){
                if(x[i] == 'I' && x[i + 1] == 'V'){
                    sum += 4;
                    ++i;
                }
                else if(x[i] == 'I' && x[i + 1] == 'X'){
                    sum += 9;
                    ++i;
                }
                else if(x[i] == 'X' && x[i + 1] == 'L'){
                    sum += 40;
                    ++i;
                }
                else if(x[i] == 'X' && x[i + 1] == 'C'){
                    sum += 90;
                    ++i;
                }
                else if(x[i] == 'C' && x[i + 1] == 'D'){
                    sum += 400;
                    ++i;
                }
                else if(x[i] == 'C' && x[i + 1] == 'M'){
                    sum += 900;
                    ++i;
                }
                else{
                    if(i == strlen(x) - 2){
                        if(x[i + 1] == 'X') sum += 10;
                        else if(x[i + 1] == 'V') sum += 5;
                        else if(x[i + 1] == 'I') sum += 1;
                        else if(x[i + 1] == 'L') sum += 50;
                        else if(x[i + 1] == 'D') sum += 500;
                        else if(x[i + 1] == 'M') sum += 1000;
                        else sum += 100;
                    }
                    if(x[i] == 'X') sum += 10;
                    else if(x[i] == 'V') sum += 5;
                    else if(x[i] == 'I') sum += 1;
                    else if(x[i] == 'L') sum += 50;
                    else if(x[i] == 'D') sum += 500;
                    else if(x[i] == 'M') sum += 1000;
                    else sum += 100;
                }
            }
            printf("%lld\n", sum);
        }
    }