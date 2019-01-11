#include<vector>
#include<iostream>

using namespace std;

class Solution {


public:
    void rotate(vector<int>& nums, int k) {
 	
	int tmp;
	for(int i=0;i<k;i++)
	{
	    tmp=nums.back();
	    for(int j=nums.size()-1;j>0;j--)
	    {
	        nums[j]=nums[j-1];
	    }
	    nums[0]=tmp;
	
	}
}
					
};


int main(void)
{
	vector<int> a={1,2,3,4,5,6,7};
	Solution sol;
	sol.rotate(a,3);

	for(int i=0;i<a.size();i++)
	{

	  cout<<a[i];
	  if(i==a.size()-1) cout<<"\n";
	}

	return 0;
}
