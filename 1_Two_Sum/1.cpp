#include<vector>
#include<iostream>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

	vector<int> nums_rt;
        for(int i=0;i<nums.size();i++)
	{	
		for(int j=i+1;j<nums.size();j++)
		{	
			if((nums[i]+nums[j])==target)
			{	
				nums_rt.push_back(i);
				nums_rt.push_back(j);
				//cout<<i<<j<<endl;	
	
			}	
					
		}
				
	}

        return nums_rt;
    }
};


int main(void)
{
	vector<int> nums={3,2,4};
	int target=6;
	Solution sol;
	vector<int> nums_rt;
	nums_rt=sol.twoSum(nums,target);
	for(int i=0;i<nums_rt.size();i++)
	{
		cout<<nums_rt[i];
		if(i==nums_rt.size()-1){break;}
		cout<<",";
	}
	cout<<"\n";
	return 0;
}
