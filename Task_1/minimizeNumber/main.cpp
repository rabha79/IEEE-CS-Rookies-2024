#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num=0,mini=INT_MAX;
    for(int i=0;i<n;i++){
        num=0;
        while(arr[i]%2==0){
            num++;
            arr[i]/=2;
        }
        mini=min(num,mini);
    }
   cout<<mini;
   return 0;
    }


