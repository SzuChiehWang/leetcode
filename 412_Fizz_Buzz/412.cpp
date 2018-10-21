#include<vector>
#include<string>
#include<iostream>

using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
	
	vector<string> a;
	for(int i=1; i<n+1; i++)
	{
   	  if((i%3==0) && (i%5!=0))
	  a.push_back("Fizz");

	  else if ((i%3!=0) && (i%5==0))
 	  a.push_back("Buzz");
	  
	  else if ((i%3==0)&&(i%5==0))
	  a.push_back("FizzBuzz");

	  else
	  a.push_back(to_string(i));
	}
        return a;
    }
};


int main(void)
{
	vector<string> a;
	int n=15;
	Solution sol;
	a=sol.fizzBuzz(n);

	for(int i=0;i<n;i++)
	{
	  cout<<a[i]<<endl;
 	}
	
	return 0;
}
