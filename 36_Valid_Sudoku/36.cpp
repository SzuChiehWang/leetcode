#include<vector>
#include<string>
#include<iostream>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
    	string golden("0123456789");
        char test[11]={'0'};
	
	int test_size=golden.copy(test, golden.size(), 0);
 	test[test_size]='\0';
	
	//cout<< test<<endl;
	//printf("%d,%d\n",sizeof(test),test_size);
	
	int k=0;
	for(int i=0;i<board.size();i++)
        {
		k=0;
		int test_size=golden.copy(test, golden.size(), 0);
        	test[test_size]='\0';
		
		for(int j=0;j<board[i].size();j++)
		{	//printf("%d",board[i].size());
			for(k=0;k<sizeof(test)-1;k++)
			{
				//printf("%c%d\n",board[i][j],sizeof(test));
				if(board[i][j]==test[k]) {
				    test[k]='.'; 
			  	    break;
				}
				else if (board[i][j]=='.'){
				    break;
				}
				//printf("%d%c\n",k,test[k]); 
			}
			if (k==sizeof(test)-1) return false;	
		}
        }
	
	for(int i=0;i<board.size();i++)
        {
                k=0;
                int test_size=golden.copy(test, golden.size(), 0);
                test[test_size]='\0';

                for(int j=0;j<board[i].size();j++)
                {       //printf("%d",board[i].size());
                        for(k=0;k<sizeof(test)-1;k++)
                        {
                                //printf("%c%d\n",board[i][j],sizeof(test));
                                if(board[j][i]==test[k]) {
                                    test[k]='.';
                                    break;
                                }
                                else if (board[j][i]=='.'){
                                    break;
                                }
                                //printf("%d%c\n",k,test[k]);
                        }
                        if (k==sizeof(test)-1) return false;
                }
        }
	
	int p,q;
	
	for(p=0;p<board.size();p+=3)
	{
	for(q=0;q<board[p].size();q+=3)
	{

 	k=0;
        int test_size=golden.copy(test, golden.size(), 0);
        test[test_size]='\0';
        //cout<< test<<endl;
	for(int i=q;i<q+3;i++)
        {
                for(int j=p;j<p+3;j++)
                {       //printf("%d",board[i].size());
                        for(k=0;k<sizeof(test)-1;k++)
                        {
                                //printf("%c%d\n",board[i][j],sizeof(test));
				//printf("board[%d][%d]\n",i,j);
                                if(board[i][j]==test[k]) {
                                    test[k]='.';
                                    break;
                                }
                                else if (board[i][j]=='.'){
                                    break;
                                }
                                //printf("%d%c\n",k,test[k]);
                        }
                        if (k==sizeof(test)-1) return false;
                }

		//cout<< test<<endl;
       	}
	}
	}

    return true;	
    }
};

int main()
{

 
  Solution sol;
  /*vector<char> c(9);
  c.push_back('5');
  c.push_back('3');
  c.push_back('.');
  c.push_back('.');
  c.push_back('7');
  c.push_back('.');
  c.push_back('.');
  c.push_back('.');
  c.push_back('.');
  vector<vector<char>> C(4, c);
  */  
  
  vector<vector<char>> D{
  {'5','3','.','.','7','.','.','.','.'},
  {'6','.','.','1','9','5','.','.','.'},
  {'.','3','8','.','.','.','.','6','.'},
  {'8','.','.','.','6','.','.','.','3'},
  {'4','.','.','8','.','3','.','.','1'},
  {'7','.','.','.','2','.','.','.','6'},
  {'.','6','.','.','.','.','2','8','.'},
  {'.','.','.','4','1','9','.','.','5'},
  {'.','.','.','.','8','.','.','7','9'}


  };



  vector<vector<char>> C{
{'.','.','.','.','5','.','.','1','.'},
{'.','4','.','3','.','.','.','.','.'},
{'.','.','.','.','.','3','.','.','1'},
{'8','.','.','.','.','.','.','2','.'},
{'.','.','2','.','7','.','.','.','.'},
{'.','1','5','.','.','.','.','.','.'},
{'.','.','.','.','.','2','.','.','.'},
{'.','2','.','9','.','.','.','.','.'},
{'.','.','4','.','.','.','.','.','.'}
};


  
  for(int i=0; i<C.size(); i++)
  {
	for(int j=0; j<C[i].size(); j++)
        {
  		printf("%c", C[i][j]);
  		if(j==C[i].size()-1) printf("\n");
        }
  } 

  /* 
  struct ROW{
  vector<char> A= {'a','b','c','d','e'};
  };

  ROW row;
  vector<ROW> AA;
  AA.push_back(row);
  AA.push_back(row);
  AA.push_back(row);
  AA.push_back(row);
  
  for(int i=0;i<AA.size();i++)
  {
	for(int j=0;j<(AA[i].A.size());j++)
	{
  		printf("%c",AA[i].A[j]);
  		if (j==AA[i].A.size()-1) printf("\n");
	}
  }
  */
  /*
  //vector<vector<char>> C(4, vector<char>(5));
	  
  struct B{
	char a[3]={'a','b','c'};
  };

  B b;
  vector<B> D;
  D.push_back(b);
  printf("%d",D.size());
  for(int i=0;i<D.size();i++)
  {   
      for(int j=0; j<sizeof(D[i]);j++)
      {
     	printf("%c\n",D[i].a[j]);
      }

  }

  */	
      
 
  
  cout<<sol.isValidSudoku(C)<<endl;
  return 0;
}
