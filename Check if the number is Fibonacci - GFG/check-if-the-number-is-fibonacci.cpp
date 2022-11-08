//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:

bool prefectSquare(int N){
    int x=sqrt(N);
    return(x*x==N);
}
    string checkFibonacci(int N){
        // A number is  fibonacci number if (5*N*N-4) or (5*N+4) are a perfect square 
        
        if(prefectSquare(5*N*N+4) || prefectSquare(5*N*N-4)){
            cout<<"Yes";
        }else{
            cout<<"No";
        }
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.checkFibonacci(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends