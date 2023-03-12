#include<stdio.h>
#define ll long long
#include<math.h>

int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll i = 0;
        ll chan = 0, le = 0;
        char kt = ' ';
        while(kt != '\n'){
            ll x; scanf("%lld", &x);
            if(x % 2 == 0) ++chan;
            else ++le;
            kt = getchar();
            ++i;
        }
        if(((i) % 2 == 0 && chan > le) ||((i) % 2 != 0 && le > chan)) printf("YES\n");
        else printf("NO\n");
    }
}