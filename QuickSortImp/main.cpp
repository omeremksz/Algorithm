#include <bits/stdc++.h>
using namespace std;

//#define N 1000003
#define inf 1000000009
typedef long long ll;

#include <bits/stdc++.h>

using namespace std;

void quickSort(int *arr, int arr_size){
    if(arr_size<=1)
        return;
    int position=1;
    swap(arr[0],arr[rand()%arr_size]);//Initialize random number to the zeroth element in array.

    //cout<<arr[0]<<endl;//To see random selected element.

    for(int i=1;i<arr_size;i++)
        if(arr[0]>arr[i])
            swap(arr[i],arr[position++]);
    swap(arr[0],arr[position-1]);

    /*To see array after each iteration*/
    /*for(int i=0;i<arr_size;i++)
        cout<<arr[i]<<" ";
    cout<<'\n';*/

    quickSort(arr,position-1);
    quickSort(arr+position,arr_size-position);
}

int main() {
    int arr[10]={1,5,7,9,5,3,7,0,2,-8};
    quickSort(arr,10);
    for(int i=0;i<10;i++)
        cout<<arr[i];
	return 0;
}

