#include <bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                int n;
                int k;
                cin>>n >>k;
                int a[n];
                for(int i=0;i<n;i++){
                        cin>>a[i];
                }
                int c=0;
                for(int i=0;i<n;i++){
                        if(a[i]==k){
                                cout<<"YES"<<endl;
                                 c++;
                                 break;
                        }

                }
                if(c==0) cout<<"NO"<<endl;
                      
        }
 
        return 0;
}