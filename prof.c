#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(!i&&s[i]>'4'&&s[i]<'9') s[i]='9'-s[i]+'0';
        else if(i&&s[i]>'4') s[i]='9'-s[i]+'0';
    }
    cout<<s<<endl;
}
