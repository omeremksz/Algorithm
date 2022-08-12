#include <bits/stdc++.h>
using namespace std;

//#define N 1000003
#define inf 1000000009
typedef long long ll;

vector<int>prefix_array;

void calculatePrefixArray(string pattern){
    int len=0;//Length of the current proper prefix
    int i=1;//pointer that traverse on pattern

    prefix_array.resize(pattern.size());//Change the size of vector
    prefix_array[0]=0;

    while(i<(int)pattern.size()){
        if(pattern[i]==pattern[len]){
            prefix_array[i]=++len;
            i++;
        }
        else{
            if(len!=0)
                len=prefix_array[len-1];
            else{
                prefix_array[i]=0;
                i++;
            }
        }
    }
}

bool KMP(string text, string pattern){
    calculatePrefixArray(pattern);
    int i=0;//pointer that traverse on text
    int j=0;//pointer that traverse on pattern

    while(i<text.size()){
        if(j==pattern.size()) return true;
        if(text[i]==pattern[i]){
            i++;
            j++;
        }
        else{
            if(j!=0) j=prefix_array[j-1];//If i had a matching sequence lately don't go to beginning of the proper prefix and don't increment i
            else i++;//increment i
        }
    }
}

int main(){

    return 0;
}
