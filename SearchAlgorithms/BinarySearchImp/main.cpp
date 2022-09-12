#include <bits/stdc++.h>
using namespace std;

//#define N 1000003
#define inf 1000000009
typedef long long ll;

#include <bits/stdc++.h>

using namespace std;

int main() {
    int key=10;int arr[100]={0};arr[25]=10;
    int mid,right=100,left=0;
    sort(arr,arr+100);

    while(left<right){
        mid=(left+right)/2;
        if(arr[mid]>=key)
            right=mid;
        else
            left=mid+1;
    }

    arr[left]==key ? cout<<left:cout<<-1;


	return 0;
}

