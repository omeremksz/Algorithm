#include <bits/stdc++.h>
using namespace std;

//#define N 1000003
#define inf 1000000009
typedef long long ll;

#include <bits/stdc++.h>

using namespace std;

double f(x);//Given unimodal function.

int main() {
    double left,right,m1,m2;
    double eps=1e-7;//Condition for size between left and right, very small number.

    while(right-left>eps){
        m1=l-(r+l)/3;//Choose m1 and m2 by given formula to avoid complexity increasing.
        m2=r-(r-l)/3;
        if(f(m1)<f(m2))left=m1;
        else right=m2;
    }

    cout<<left;

	return 0;
}

