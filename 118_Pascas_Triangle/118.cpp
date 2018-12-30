#include<vector>
#include<iostream>

using namespace std;

class Solution {
public:
	vector<vector<int>> generate(int numRows){
	
	vector<int> inv;
	vector<vector<int>> invv;
	
	if(numRows<3){
	for(int i=0;i<numRows; i++)
	{
	    for(int j=0;j<i+1;j++)
	    {
		inv.push_back(1);	    
	    }

	    invv.push_back(inv);
	    inv.clear();
	}
	}

	else{
	for(int i=0;i<2; i++)
        {   
            for(int j=0;j<i+1;j++)
            {   
                inv.push_back(1);
            }
            
            invv.push_back(inv);
            inv.clear();
        }

	for(int i=2;i<numRows; i++)
        {
	    int k=0;
            for(int j=0;j<i+1;j++)
            {
		
		if(j==0||j==i)
		{
		    inv.push_back(1);
		}
		else	
		{
		    int tmp=invv[i-1][k]+invv[i-1][k+1];
                    inv.push_back(tmp);
		    k++;
		}
            }

            invv.push_back(inv);
            inv.clear();
        }


	}
	
	vector<vector<int>> ans{	
	{1},
	{1,1},
	{1,2,1},
	{1,3,3,1},
	{1,4,6,4,1},
	};

	return invv;
	}
					
};


int main(void)
{

	Solution sol;
	vector<vector<int>> ans;
	ans=sol.generate(5);
	
	for(int i=0;i<ans.size();i++)
	{
	    for(int j=0;j<ans[i].size();j++)
	    {
	        cout<<ans[i][j];
		if(j==ans[i].size()-1) cout<<'\n';	
	    }
	}

	return 0;
}
