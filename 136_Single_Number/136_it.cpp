#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution{
  public:   
    int singleNumber(vector<int>& nums){
	int mycount;

	for(int i=0; i<nums.size(); i++)
	{	
            mycount=count(nums.begin(), nums.end(), nums[i]);
	    if (mycount==1) return nums[i];
	}
	return -1;

    }

};

int main(void)
{
  Solution sol;
  vector<int> a={4,1,2,1,2};
  cout<<sol.singleNumber(a) <<endl;
  return 0;
}
