#include<iostream>
using namespace std;
bool isAllequal(string a, string b){
    for(int i=0;i<a.length();i++){
        if(a[i]=!b[i]){
            return false;
        }
    }
    return true;
}

bool canBeEdited(string a, string b){
    int i=0;
    int j=0;
    while(i<a.length()){
        if(a[i]!=b[i]){
            if(i!=j){
                return false;
            }
            j++;
        }
        else{
            i++;
            j++;
        }
    }
    return true;
}

bool isOneway(string a, string b){
    if(a.length()==b.length()){
        return isAllequal(a,b);
    }
    else if(a.length()<b.length()){
        return canBeEdited(a,b);
    }
    else if(a.length()>b.length()){
        return canBeEdited(b,a);
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef Sahib_pratap
    freopen("Input.txt","r",stdin);
    freopen("Output.txt","w",stdout);
    #endif
    // ---------------------------------------//


    int test;
    cin>>test;
    while(test--){
        string s1,s2;
        cin>>s1>>s2;
        cout<<isOneway(s1,s2)<<endl;;
    }
    return 0;
}

