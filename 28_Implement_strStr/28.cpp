#include<string>
#include<iostream>
using namespace std;

class Solution{
public:
	int strStr(string haystack, string needle) {

	if (needle=="") return 0;
	
	int pos;
	pos=haystack.find(needle,0);


	return pos;
   }

};

int main()
{
  Solution sol;
  cout<<sol.strStr("a", "a")<<endl;
  return 0;
}
