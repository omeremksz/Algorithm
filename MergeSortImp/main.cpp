#include <bits/stdc++.h>
using namespace std;

//#define N 1000003
#define inf 1000000009
typedef long long ll;

#include <bits/stdc++.h>

using namespace std;

void mergeSort(int *arr,int arr_size){
    if(arr_size<=1)//Base case.
        return;
    mergeSort(arr,arr_size/2);//Divide array into two almost equal array.
    mergeSort(arr+arr_size/2,arr_size-arr_size/2);//arr+arr_size/2 stands for pointing first element of second of new array.

    int ind=0,left=0,right=arr_size/2;
    int *temp=new int[arr_size];//Creating temporary array which include merged sub arrays.

    while(left<arr_size/2 || right<arr_size)//Merging sub arrays in linear time.
    {
        if(right==arr_size || (left<arr_size/2 && arr[left]<arr[right]))
            temp[ind++]=arr[left++];
        else
            temp[ind++]=arr[right++];
    }
    for(int i=0;i<arr_size;i++)
        arr[i]=temp[i];
    delete [] temp;
}

int main() {
    int arr[]={1,4,7,5,3,5,7,9,0,4,2};
    mergeSort(arr,11);

    for(int i=0;i!=11;i++)
        cout<<arr[i];
	return 0;
}

