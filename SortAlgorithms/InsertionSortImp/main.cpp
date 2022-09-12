#include <bits/stdc++.h>
using namespace std;

//#define N 1000003
#define inf 1000000009
typedef long long ll;

#include <bits/stdc++.h>

using namespace std;

void insertion(int *arr, int arr_size){
    for(int i=1;i<arr_size;i++)
        for(int j=i-1;0<=j and arr[j]>arr[j+1];j--)
            swap(arr[j],arr[j+1]);
}

int main() {
    int arr[]={1,4,7,5,3,5,7,9,0,4,2};
    insertion(arr,11);

    for(int i=0;i!=11;i++)
        cout<<arr[i];
	return 0;
}

