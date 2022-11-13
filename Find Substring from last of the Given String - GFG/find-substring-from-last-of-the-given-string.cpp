//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:		

	int search(string X, string Y)
	{
	    int n=X.length();
	    int m=Y.length();
	    
	    int index=-1;
	    
	    for(int i=0;i<=n-m;i++){
	        int flag=true;
	        int temp_index=i;
	        for(int j=0;j<m;j++){
	            if(X[i+j]!=Y[j]){
	                flag=false;
	                break;
	            }
	        }
	        if(flag==true){
	            index=temp_index;
	           //return 1;
	        }
	    }
	    if(index==-1)return -1;
	    return index+1;
	   //return 0;
	}
};

//{ Driver Code Starts.

int main() 
{


   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string x, y;
   		cin >> x >> y;
        Solution ob;

   		cout << ob.search(x, y) << "\n";
   	}

    return 0;
}
// } Driver Code Ends