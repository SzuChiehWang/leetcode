#include<iostream>

using namespace std;

class Solution {
public:

	int trailingZeroes(int n) {
     		
		int ans=0;

		while(n>0){
		ans+=n/5;
		n=n/5;
			
		}
		
		return ans;   
    }
					
};


int main(void)
{
	Solution sol;
	int n=26;
	cout<<sol.trailingZeroes(n)<<endl;
	return 0;
}
