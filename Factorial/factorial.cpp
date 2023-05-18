/******************************************************************************
 
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
 
*******************************************************************************/
 
#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    int x;
    cin >>n ;
    for(int j=1 ;j<=n;j++){
        cin >>x;
         long long total=1;
        for (int i=1; i<=x;i++){
            total=total*i;
        }
            cout << total <<endl;
    }
  return 0;
}


// factorial using recursive ;


int factorila(int n) 
{
// complexty o(n) time and o(n )memory ;

    if( n<= 1)
      return 1;

    int subRis=factorila(n-1);
    return n * subRis;
}