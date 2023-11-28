#include <iostream>

using namespace std;

int main()
{
    int sizee;
    cin>>sizee;
    int arr[sizee];
    int maxi=INT_MIN;
    int mini=INT_MAX;
    for(int i=0;i<sizee;i++){
        cin>>arr[i];
        maxi=max(maxi,arr[i]);
        mini=min(mini,arr[i]);
    }
    int posMaxi,posMini;
    for(int i=0;i<sizee;i++){
        if(arr[i]==maxi)
            posMaxi=i;
        else if(arr[i]==mini)
            posMini=i;
    }
    int temp=arr[posMaxi];
    arr[posMaxi]=arr[posMini];
    arr[posMini]=temp;
    for(int i=0;i<sizee;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
