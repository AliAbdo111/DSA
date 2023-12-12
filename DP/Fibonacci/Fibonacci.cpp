#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll ;
vector <ll> memory ;

 ll fib_v2(){

    const int  MAX {80 +1} ;
    ll fib[MAX] {1,1} ;
 for(int i=2 ; i<= MAX ; i++)
    fib[i]=fib[i -1] + fib[i- 2];

 return fib[80] ;
 }

ll fib(int n ){
    if(n <= 1)
        return 1;

    ll &ret=memory[n];
    if(ret != -1)
        return ret ;

    return ret= fib(n -1 ) + fib(n -2) ;
}

int main() {

    int n ;
    cout<< "Enter number Fibonacci : "<< "\n";
    cin>> n;
    memory.resize(n +1);
    fill(memory.begin(),memory.end() ,-1) ;
    cout << fib(n);
	return 0;
}
