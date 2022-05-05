#include <bits/stdc++.h>
using namespace std;

//#define N 1000003
#define inf 1000000009
typedef long long ll;

#include <bits/stdc++.h>

using namespace std;

void radixSort(int *arr, int arr_size){
    int base=10;
    int *temp = new int [arr_size];
    int *counter = new int [base]();

    /*Find maximum element of array to know number of digit*/
    int m=arr[0];
    for(int i=1;i<arr_size;i++)
        if(arr[i]>m)
            m=arr[i];

    for(int e=1;m/e>0;e*=10){
        memset(counter,0,sizeof(int)*base);

        for(int i=0;i<arr_size;i++)
            counter[(arr[i]/e)%base]++;

        for(int i=1;i<base;i++)
            counter[i]+=counter[i-1];

        for(int i=arr_size-1;i>=0;i--)
            temp[--counter[(arr[i]/e)%base]]=arr[i];

        /*To update original array*/
        for(int i=0;i<arr_size;i++)
            arr[i]=temp[i];
    }
}

int main() {
    int arr[10]={123,23,4,567,8,4,33,24,15,67};
    radixSort(arr,10);
    for(int i=0;i<10;i++)
        cout<<arr[i]<<" ";
	return 0;
}

