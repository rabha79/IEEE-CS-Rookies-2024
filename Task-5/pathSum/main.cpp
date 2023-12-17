#include <iostream>

using namespace std;
int row ,column;
int arr[11][11];
int path(int start,int endd){
if(start==row-1&&endd==column-1){
    return arr[start][endd];
}else if(start==row+1||endd==column+1){
    return -1000000;
}
int right=path(start,endd+1);
int down =path(start+1,endd);
return arr[start][endd]+max(right,down);
}

int main()
{
    cin>>row>>column;
    for(int i=0;i<row;i++){
        for(int z=0;z<column;z++){
            cin>>arr[i][z];
        }
    }

    cout<<path(0,0);
}
