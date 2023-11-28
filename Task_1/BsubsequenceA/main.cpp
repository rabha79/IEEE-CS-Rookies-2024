#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n,m;
   cin>>n;
   cin>>m;
   long long a[n];
   long long b[n];
   for(int i=0;i<n;i++)
    cin>>a[i];
   for(int i=0;i<m;i++)
    cin>>b[i];
   int counti=0;
   int j=0;
   for(int i=0;i<n;i++){
    if(a[i]==b[j]){
        counti++;
        j++;
    }
   }
   if(counti==m)
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;
    return 0;
}
