#include<iostream>
#include<vector>

using namespace std;

class Solution{
  public:   
    int singleNumber(vector<int>& nums){
      int result=0;
      for(int i=0; i<nums.size(); i++)
      {
        result^=nums[i];

      }
      return result;
    }

};

int main(void)
{
  Solution sol;
  vector<int> a={4,1,2,1,2};
  cout<<sol.singleNumber(a) <<endl;
  return 0;
}
