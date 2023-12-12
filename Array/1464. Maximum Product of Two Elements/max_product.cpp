#include <iostream>
#include <vector>
#include<algorithm>
using namespace std ;
// TC: O(n^2)
    int maxProduct_v1(vector<int>& nums) {
        int res=0 ,n=nums.size();
        if(nums.size()==0 || nums.size()==1){
            return 0;
        };
        for(int i=0 ; i <n ; ++i){
            for (int j=i +1; j <n; ++j)
                res=max(res, (nums[i] - 1) * (nums[j] - 1));

        }
    return res ;
    }

// TC: O(NLOGN)
int maxProduct_v2(vector<int>&nums){
    int n = nums.size();
    sort(nums.begin() , nums.end());
    return (nums[n - 1 ]-1) *(nums[n - 2] - 1);


}
    int main(){
    //test cases
    /*  Case One ={3,4,5,2} expected=12
        Case Two= {1,5,4,5} Expected =16
        Case Three ={3,7} Expected = 12

    */
    vector <int> product={3,7};
    cout<<  maxProduct_v2(product) <<endl;
    cout<<  maxProduct_v1(product) <<endl;

    return 0;}
