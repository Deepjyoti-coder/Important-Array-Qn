//brute force approach
#include<iostream>
using namespace std;
int main(){
	int arr[]={3,-4,5,4,-1,7,-8};
	int n=7;
	int maxsum=INT_MIN;
	for(int st=0;st<n;st++){
		int currsum=0;
		for(int end=st;end<n;end++){
			currsum+=arr[end];
			maxsum=max(currsum,maxsum);
		}
	}
	return maxsum;
}
