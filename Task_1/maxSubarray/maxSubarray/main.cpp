#include <iostream>

using namespace std;

int main()
{
int subarry;
cin>>subarry;
while(subarry--){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        cout<< arr[i]<<" ";
    }
    for(int i=0;i<size;i++){
        int maxi =arr[i];
        for(int j=i+1;j<size;j++){
            maxi= max(maxi,arr[j]);
            cout<<maxi<<" ";
        }
    }
    cout<<endl;
}
return 0;
}
