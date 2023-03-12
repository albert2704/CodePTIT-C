#include<stdio.h>
#include<math.h>
#define ll long long 
ll max(ll a, ll b){
    if(b > a) return b;
    return a;
}
void swap(ll *a, ll *b){
    ll tmp = *a;
    *a = *b;
    *b = tmp;
}
ll canh(ll s){
    ll t = sqrt(s);
    if(t * t == s) return t;
    return 0;
}
int main(){
    ll a, b, c, d, e, f;
    scanf("%lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f);
    ll dt = a * b + c * d + e * f;
    ll y = canh(dt);
    if(y == 0) printf("NO\n");
    else{
        if(a > b) swap(&a, &b);
        if(c > d) swap(&c, &d);
        if(e > f) swap(&e, &f);
        if(b == d && d == f && f == y) printf("YES\n");
        else{
            if(d > b){
                swap(&b, &d);
                swap(&a, &c);
            }
            if(f > b){
                swap(&b, &f);
                swap(&a, &e);
            }
            if(b == y){
                if(c + e == y || d + f == y || c + f == y || d + e == y) printf("YES\n");
                else printf("NO\n");
            }
            else printf("NO\n");
        }
    }
    return 0;
}