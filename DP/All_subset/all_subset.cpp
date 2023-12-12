#include <iostream>
#include <vector>
#include <cstring>
#include <climits>
using namespace std;

string res ="    ";

void All_subset(int index){

    if(index == (int) res.size())
    {
        cout<<res <<endl;
        return ;
    }
    res[index]='0';
    All_subset(index +1);

    res[index]='1';
    All_subset(index +1);
    res[index]= ' ';

}




int main (){

All_subset(0);

return 0;}
