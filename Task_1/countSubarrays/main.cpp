#include <iostream>

using namespace std;

int main()
{
int t;
cin>>t;
while(t--){
    int counter=0,n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
         cin>>arr[i];
    }
    for(int i=0;i<n;i++){
          counter++;
    for(int j=i+1;j<n;j++){
              if(arr[j]>=arr[j-1])
                    counter++;
                else
                  break;

    }
    }
      cout<<counter<<endl;
    }
    return 0;
}

