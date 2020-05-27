#include <bits/stdc++.h>
using namespace std;

bool binary_search(int num,int pre[],int n){
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(pre[mid]==num)
            return 1;
        else if(pre[mid]<num)
            low=mid+1;
        else
            high=mid-1;
    }
    return 0;
}

int main() {
	int n;
	cin>>n;
	int a[n],x;
	for(int i=0;i<n;i++)
	    cin>>a[i];
	cin>>x;
	int pre[n];
	pre[0]=a[0];
	for(int i=1;i<n;i++){
	    pre[i]=pre[i-1]+a[i];
	}  
	if(a[0]==x)
	    cout<<1;
	else{
	    int c=0;
    	for(int i=0;i<n;i++){
    	    if(binary_search(pre[i]+x,pre,n))
    	        c++;
	    }
	    cout<<c;
	}
}
