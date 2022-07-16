#include <bits/stdc++.h>
using namespace std;

//#define N 1000003
//#define inf 1000000009
//typedef long long ll;

int lengthOfLongestSubstring(string s) {
        int i=0,j=0,max_length=0;
        set<char>sub_string;
        while(i<s.length()){
            char temp=s[i];
            while(sub_string.count(temp)){
                sub_string.erase(s[j]);
                j++;
            }
            sub_string.insert(temp);
            max_length=max(max_length,i-j+1);
            i++;
        }
        return max_length;
    }

int main(){
    string s="GodDing";
    cout<<lengthOfLongestSubstring(s);
    return 0;
}