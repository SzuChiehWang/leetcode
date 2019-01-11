#include<string>
#include<algorithm>
#include<iostream>

using namespace std;

class Solution{
public:
	string reverseString(string s){

	reverse(s.begin(),s.end());

	return s;
	}
};


int main(void)
{

    Solution sol;
    string test="Hello";
    string test_ret;
    test_ret=sol.reverseString(test);
    for(int i=0; i<test_ret.size();i++)
    {
        cout<<""<<test_ret[i];

    }
	
    return 0;
}
