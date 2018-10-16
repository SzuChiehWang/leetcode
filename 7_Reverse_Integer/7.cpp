#include<iostream>
#include<limits>

using namespace std;

class Solution{

public:
  int reverse(int x) 
  {
    numeric_limits<int> a;
    long long r=0;
    while(x!=0)
    {
      r=r*10+x%10;
      x=x/10;
      if((r>a.max())||(r<a.min()))
        return 0;		
    }
    return r;
  }
};


int main()
{
  Solution sol;
  cout<< sol.reverse(1534236469)<<endl;
  return 0;
}
