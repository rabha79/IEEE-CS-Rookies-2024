#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    string t="hello";
    int i=0,z=0;
    while(true){
    if(i==s.size()||z==t.size()){
        break;
    }
    if(s[i]==t[z]){
        z++;
    }
    i++;
    }
    if(z==5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
