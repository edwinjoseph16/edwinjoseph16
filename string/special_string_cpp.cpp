#include <bits/stdc++.h>

using namespace std;

long substrCount(int n, string s) {

    long ans = n; 
    
    for(int i=0 ;i<n;i++){
        
        int repeat =0;
        while(i<n && s[i]==s[i+1]){
            repeat++;
            i++;
        }
        ans += (repeat*(repeat+1))/2;
        
        int ptr=1;
        while(i-ptr>=0 && i+ptr<n && s[i+ptr] == s[i-1] && s[i-ptr] == s[i-1]){
            ptr++;
            ans++;
        }
    }

    return ans;
}

int main()
{
    
    int n;
    string s;
    cin>>n;
    cin>>s;

    long result = substrCount(n, s);

    cout << result << "\n";

    return 0;
}
