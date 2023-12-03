#include <iostream>

using namespace std;

int main()
{
int t;
cin>>t;
string s;
cin>>s;
int counter=0;
char temp;
for(int i=0;i<t;i++){
    if(i==0){
        temp=s[i];
        counter++;
    }else{
        if(s[i]!=temp){
            counter++;
            temp=s[i];
        }
    }

}
cout<<counter;

}
