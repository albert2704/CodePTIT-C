#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define ll long long
struct phanSo{
    ll tu, mau;
    ll num;
};
typedef struct phanSo phanSo;
ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b){
    return a * b / gcd(a, b);
}
phanSo rg(phanSo x){
    phanSo res;
    ll uc = gcd(x.tu, x.mau);
    res.tu = x.tu / uc;
    res.mau = x.mau / uc;
    return res;
}
phanSo qd(phanSo x, phanSo y){
    phanSo res;
    ll bc = lcm(y.mau, x.mau) / x.mau;
    res.tu = x.tu * bc;
    res.mau = x.mau * bc;
    return res;
}
phanSo tong(phanSo x, phanSo y){
    phanSo res;
    res.tu = x.tu * y.mau + y.tu * x.mau;
    res.mau = x.mau * y.mau;
    return rg(res);
}
phanSo thuong(phanSo x, phanSo y){
    phanSo res;
    res.tu = x.tu * y.mau;
    res.mau = x.mau * y.tu;
    return rg(res);
}
int main(){
    ll t; scanf("%lld", &t);
    
    getchar();
    for(ll i = 1; i <= t; i++){
        phanSo x[1000];
        ll a, b, c, d; scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
        printf("Case #%lld:\n", i);
        x[0].tu = a;
        x[0].mau = b;
        x[1].tu = c;
        x[1].mau = d;
        phanSo m = rg(x[0]);
        phanSo n = rg(x[1]);
        ll j = qd(m, n).tu;
        ll k = qd(m , n).mau;
        ll p = qd(n, m).tu;
        ll q = qd(n , m).mau;
        printf("%lld/%lld %lld/%lld\n", j, k, p, q);
        printf("%lld/%lld\n", tong(x[0], x[1]).tu, tong(x[0], x[1]).mau);
        printf("%lld/%lld\n", thuong(x[0], x[1]).tu, thuong(x[0], x[1]).mau);
    }
}