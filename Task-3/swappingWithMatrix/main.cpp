#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void swap_rows(int rx[],int ry[],int n){
    for(int i=0;i<n;i++){
        swap(rx[i],ry[i]);
    }
}

int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    x--;
    y--;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    swap_rows(arr[x],arr[y],n);
    for(int i=0;i<n;i++){
        swap(arr[i][x],arr[i][y]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
