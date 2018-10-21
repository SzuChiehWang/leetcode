#include<string>
#include<math.h>
#include<iostream>

using namespace std;

class Solution{
  public:
    int titleToNumber(string s){
    int j=0,tmp=0,sum=0;

    for(int i=s.length()-1;i>=0;i--)
    {
      tmp=int(s.at(i))-64;
      //printf("tmp=%d\n",tmp);
      sum+=tmp*pow(26,j);
      j++;
      //printf("sum=%d\n",sum);
      
    }
    
    return sum;
    }

};


int main(void)
{
  Solution sol;
  cout<<sol.titleToNumber("AB")<<endl; 

  return 0;
}
