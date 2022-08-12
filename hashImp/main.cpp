#include <bits/stdc++.h>
using namespace std;

//#define N 1000003
#define inf 1000000009
typedef long long ll;

long long int hash_f(string text){
    int p=271;
    ll result_hash=0;
    long long int m=1e9 + 7;
    long long int p_pow=1;

    for(long i=text.size()-1;i>=0;i--){
        result_hash+=(s[i]*p_pow)%m;
        result_hash=result_hash%m;
        p_pow=p_pow*p_pow;
    }

    return result_hash;

}

int main(){


    return 0;
}
