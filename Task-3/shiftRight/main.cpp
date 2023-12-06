#include <iostream>

using namespace std;
void shiftarr(int arr[],int n,int s){
    for(int i=n-s;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n-s;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n; cin>>n;
    int arr[n];
    int shift;cin>>shift;
    for(int i=0;i<n;i++)
       cin>>arr[i];
    shift%=n;
    shiftarr(arr,n,shift);
    return 0;
}
