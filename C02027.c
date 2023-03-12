#include<stdio.h>
#define ll long long
int main(){
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        int tmp;
        if(i % 2 == 0) tmp = i * (i + 1) / 2;
        else tmp = i * (i + 1) / 2 - i + 1;
        for(int j = 1; j <= i; j++){
            if(i % 2 == 0){
                printf("%c ", tmp + 96);
                tmp--;
            }
            else{
                printf("%c ", tmp + 96);
                tmp++;
            }
        } 
        printf("\n");
    }
}