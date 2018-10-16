#include<iostream>

using namespace std;

class Solution{
public:
  bool isPowerOfThree(int x){
  if(x<=0) return false;
  if(1162261467%x==0)
    return true;
  else 
    return false;  
  }
};


int main()
{
  Solution sol;
  cout<<sol.isPowerOfThree(81)<<endl;
  return 0;
}
