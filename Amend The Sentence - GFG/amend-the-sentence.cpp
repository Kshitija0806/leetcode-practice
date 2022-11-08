//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string amendSentence (string s)
    {
        string ans="";
        int i=0;
        
        while(i<s.length()){
            
            if(s[i]>='A' && s[i]<='Z'){
                ans+=tolower(s[i]);
                i++;
            }
            while(s[i]>='a' && s[i]<='z'){
                    ans+=s[i];
                    i++;
                }
            ans+=" ";
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.amendSentence (s) << endl;
	}
}
// } Driver Code Ends