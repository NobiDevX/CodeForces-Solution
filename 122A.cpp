#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int arr [15]={4,7,44,47,74,77,444,447,474,477,474,744,774,777,747};
    bool istrue=false;
    for(int i=0; i<15;i++){
        if(n%arr[i]==0){
            istrue=true;
            break;
        }
    }
        if(istrue)
        {
            cout<<"YES";
        }
        else cout<<"NO";
    
    return 0;
}