#include<vector>
#include<iostream>

using namespace std;

class Solution {


public:
    void rotate(vector<int>& nums, int k) {
 	
	k%=nums.size();
	for(int i=0; i<k; i++)
	{
	    nums.insert(nums.begin(), nums.back());
	    nums.pop_back();
	}

	return ;
	

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
