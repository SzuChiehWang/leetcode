#include<string>
#include<stdlib.h> //atoi
#include<limits>
#include<iostream>
using namespace std;

class Solution{
public:

  int myAtoi(string str){
   	long long i;
	i=atol(str.c_str());
	//printf("%lld\n",i);
	numeric_limits<int> a;
	//printf("%d, %d\n",a.max(),a.min());
	if(i>a.max()) {/*printf(">");*/i=a.max();}
	else if(i<a.min()) {/*printf("<");*/i=a.min();}
	else i=i;
	return i;
   }

};

int main()
{
  Solution sol;
  cout<<sol.myAtoi("-91283472332")<<endl;
  return 0;
}
