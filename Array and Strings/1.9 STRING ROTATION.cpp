// My approach for **1.9 STRING ROTATION**

// SIMPLE ADD S2=S2+S2 AND THEN CHECK S1 ISSUBSET OF S2
//Time complexity: O(length(b)+length(b)) -> O(N)
//Space complexity: O(1)

`#include <bits/stdc++.h>
using namespace std;

bool issubstring(string a, string b){
    int n=a.length();
    int m=b.length();
    for(int i=0;i<=m-n;i++){
        int j=0;
        for(j=0;j<n;j++){
            if(a[j]!=b[i+j]){
                break;
            }
        }
        if(j==n){
            return true;
        }
    }
    return false;
}
int main() {
    int q;
    cin>>q;
    while(q--){
        //String rotation
        string s1,s2;
        cin>>s1>>s2;
        cout<<issubstring(s1,s2+s2);
    }
    return 0;
}
`