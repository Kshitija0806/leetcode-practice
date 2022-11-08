//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<string> invIsoTriangle(int N) {
        vector<string> ans;
        int x=2*N-1;
        int j=0;
        
        while(x>0){
            string st="";
            for(int i=0;i<j;i++){
                st+=" ";
            }
            for(int i=0;i<x;i++){
                st+='*';
            }
            for(int i=0;i<j;i++){
                st+=" ";
            }
            x=x-2;
            j++;
            ans.push_back(st);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        vector<string> v = ob.invIsoTriangle(N);
        
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<endl;
    }
    return 0;
}
// } Driver Code Ends