#include <bits/stdc++.h>
using namespace std;

//#define N 1000003
//#define inf 1000000009
//typedef long long ll;

string longestCommonPrefix(vector<string>& strs) {
    sort(strs.begin(), strs.end());
    int min_length=strs[0].size();
    for(auto it:strs)
        if(it.size()<min_length)
            min_length=it.size();
    string first=strs[0],last=strs[strs.size()-1];
    int i=0;
    while(i<min_length && first[i]==last[i])
        i++;
    return first.substr(0,i);
}

int main(){
    vector<string>strs {"flower","flow","flight"};
    cout<<longestCommonPrefix(strs);
    return 0;
}

