#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int findSecondLArgestNum(vector <int >arr){
int n= arr.size();
    sort(arr.begin(), arr.end());
    return arr[n -2] ;

}


int main (){

    vector <int> arr={122, 3, 77, 80 -1,0,1000,1902,11111};
   cout<<"The Second Largest Num Is : "<< findSecondLArgestNum(arr) ;

  return 0;
}
