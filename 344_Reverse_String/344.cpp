#include<string>
#include<iostream>

using namespace std;

class Solution {
public:
    string reverseString(string s) {
        for(int i=0; i<s.size()/2; i++){
            char c;
            c=s[i];
            s[i]=s[s.size()-i-1];
            s[s.size()-i-1]=c;
        }        
	return s;
    }
};

int main(void)
{
	Solution sol;
	cout<<sol.reverseString("Hello")<<endl;
	return 0;
}
