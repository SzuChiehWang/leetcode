#include<iostream>
#include<vector>

using namespace std;

class Solution{
  public:   
    int singleNumber(vector<int>& nums){
      int ret;
      for(int i=0; i<nums.size(); i++)
      {
        int count=0;
        for(int j=0; j<nums.size();j++)
        {
          if(nums[i]==nums[j])
	    count++; 
        }
        if(count==1)
        {
	  ret=nums[i];
	  break;
        } 
      }
      return ret;
    }

};

int main(void)
{
  Solution sol;
  vector<int> a={4,1,2,1,2};
  cout<<sol.singleNumber(a) <<endl;
  return 0;
}
