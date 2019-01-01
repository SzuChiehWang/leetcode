#include<string>
#include<iostream>

using namespace std;

class Solution {
public:


    int mappingtable(char c){
	//cout<<c<<endl;
	int value;
	switch (c){

	    case 'I':
		value=1;
		break;
	
	    case 'V':
		value=5;
		break;
	
	    case 'X':
		value=10;
		break;
	
	    case 'L':
		value=50;
		break;

	    case 'C':
		value=100;
		break;

	    case 'D':
		value=500;
		break;

	    case 'M':
		value=1000;
		break;

 	    default:
		value=0;
	}
    //cout<<value<<endl;	
    return value;	

    }


    int romanToInt(string s){


	int tmp=0,sum=0,max=1;

	
	for(int i=s.size()-1; i>-1; i--)
	{
	    tmp=mappingtable(s[i]);     	    	    
	    if(tmp>=max){
	    //cout<<s[i]<<tmp<<endl;
	    sum+=tmp;

	    max=tmp;

	    }	

	    else{

	    sum-=tmp;
	    }
	    
	}
	
	
	return sum;
   }
					
};


int main(void)
{

	Solution sol;

	cout<<sol.romanToInt("LVII")<<endl;
	return 0;
}
