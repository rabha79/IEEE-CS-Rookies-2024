#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        int length=s.length();
        bool flag=0;
        for(int i=1;i<length-1;i++){
            if(s[i]=='0'&& s[i-1]=='1'&& s[i+1]=='1'){
                cout<<"Good\n";
                flag=1;
                break;
            }
            else if(s[i]=='1'&&s[i-1]=='0'&&s[i+1]=='0'){
                cout<<"Good\n";
                flag=1;
                break;
            }

        }
        if(flag==0)
            cout<<"Bad\n";
    }
    return 0;
}
