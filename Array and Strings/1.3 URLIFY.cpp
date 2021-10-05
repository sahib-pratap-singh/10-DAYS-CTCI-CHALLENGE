//My approaches for **1.3 URLIFY**
//COUNT the no of spaces then twice this no and add given length
//because we need three space "%" "2""0" to replace ' ', so apcourse you need to increase length

//Time complexity: O(N)
//Space complexity: 0(1)

**#include <bits/stdc++.h>
using namespace std;

int main() {
    string s="Sahib pratap singh      ";
    int truelength=18;
    int spacecount=0;
    for(int i=0;i<truelength;i++){
        if(s[i]==' '){
            spacecount++;
        }
    }
    int index= truelength + 2*spacecount;
    for(int i=truelength-1;i>=0;i--){
        if(s[i]==' '){
            s[index-1]='0';
            s[index-2]='2';
            s[index-3]='%';
            index-=3;
        }
        else{
            s[index-1]=s[i];
            index-=1;
        }
    }
    cout<<s;
    
    return 0;
}
**

//2nd approach simple by using inbuilt method

**#include <bits/stdc++.h>
using namespace std;

int main() {
    
        string s="Sahib pratap singh      ";
        int truelength=18;
        for(int i=0;i<truelength;i++){
            if(s[i]==' '){
                s.replace(i,1,"%20");
            }
        }
        cout<<s;
    
    return 0;
}
**