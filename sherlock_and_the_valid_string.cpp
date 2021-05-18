#include <bits/stdc++.h>

using namespace std;
map<int,int> ::iterator it;
string isValid(string s) {
    
    string ans = "YES";
    int n,no,no2,f=0;
    vector<int> fr(26,0);
    map<int ,int> m;
    for(auto a: s)
        ++fr[a-'a'];

    sort(fr.begin(),fr.end());

    for(auto c: fr){
        if(c == 0)
            continue;
        m[c]++;
        // cout<<c<<" ";
    }

    it=m.begin() ;
        
        n = it->first;
        no = it->second;
        
        ++it;
        if(it==m.end())
            return ans;
        no2 = it->first;
        cout<<no2<<" "<<it->second;
        if(no2 > n){
            if(--no == 0 || --it->second == 0)
               {
                   
               }
            else
                return "NO";
        }
        else
            return "NO";
        ++it;
        if(it!=m.end())
            return "NO";
    
    
    return ans;
}

int main()
{
    
    string s;
    cin>>s;

    string result = isValid(s);

    cout << result << "\n";

    return 0;
}
