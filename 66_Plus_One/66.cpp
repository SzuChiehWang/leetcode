#include<vector>
#include<iostream>
using namespace std;

class Solution{

public:
	vector<int> plusOne(vector<int>& digits){

	int  i,carry=1;

	for(i=digits.size()-1;i>-1;i--)
	{
	  digits[i]+=carry;
	  //printf("%d\n",digits[i]);
	  if(digits[i]==10)
	  {
 	    digits[i]=0;
	    carry=1;
	  }
	  else
	  {
	    //carry=0;
	    break;
          }
	}

	if(i==-1 && carry==1)
        {
	  digits.insert(digits.begin(),carry);
        }
	  return digits;
	}
};

int main()
{

	Solution sol;
	vector<int> a={4,4};
	vector<int> ret;
	ret=sol.plusOne(a);
	for(int i=0;i<ret.size();i++)
	{
	  if(i==0)cout<<"[";
	  cout<<ret[i]; 
	  if(i==ret.size()-1) 
	  cout<<"]";
	  else
          cout<<",";
	}
        cout<<"\n";

return 0;
}
