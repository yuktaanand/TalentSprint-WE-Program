#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    vector<int> beautifulArray(int N) {
        if(N==1)
            return {1};
        vector<int> even=beautifulArray(N/2);
        vector<int> odd=beautifulArray(N-(N/2));
        vector<int> beautiful_array;
 
        for(int i=0;i<odd.size();i++)
            beautiful_array.push_back(odd[i]*2-1);
 
        for(int i=0;i<even.size();i++)
            beautiful_array.push_back(even[i]*2);
      return beautiful_array;
 
 
    }
};
int main() { 
 
    int n;
    cin>>n;
    Solution obj;
	vector <int> beautiful_array = (obj.beautifulArray(n));
	for(int i=0;i<beautiful_array.size();i++)
		cout<<beautiful_array[i]<<" ";
} 