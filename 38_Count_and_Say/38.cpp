#include<string>
#include<iostream>

using namespace std;

class Solution {
public:
	string countAndSay(int n) {
        
	
	if (n<1) return "";
	
	string ret="1";
        string pre="1";
	char tmp; 
	tmp=pre[0];
        int count=1;
	
	for(int i=2;i<=n;i++)
	{
	    ret.clear();
	
  	    for(int j=1; j<pre.size();j++)
	    {
	       
	       if(pre[j]==tmp)
	       {
		    count++;

  		}
		else
		{
		    ret=ret+(to_string(count));
		    ret.push_back(tmp);		   
		    count=1;
		    tmp=pre[j];
		    
		 	
		}		
	
	    }

	ret=ret+(to_string(count));	
        ret.push_back(tmp);
        count=1; 
	pre=ret;    		
	tmp=pre[0];
	cout<<pre[0]<<endl;
	}	

	return ret;
    }
					
};


int main(void)
{

	Solution sol;
	cout<<sol.countAndSay(4)<<endl;
	return 0;
}
