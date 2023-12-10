#include <iostream>
#include <vector>
#include <cstring>
#include <climits>
using namespace std;

vector<int> weight= {10, 4 ,  6, 5, 1};
vector<int> value = {10, 15, 2 , 8, 2};
const int MAX = 2000 + 1;
int memory[MAX][MAX];

int knapsack(int idx, int remains) {


	if (idx == (int) weight.size())
		return 0;

int ret = memory[idx][remains];
	if (ret != -1){
        return ret;
	}else{


	int choice1 = knapsack(idx + 1, remains);	// leave
	int choice2 = 0;

	if (remains >= weight[idx])	// can pick it?
		choice2 = value[idx] + knapsack(idx + 1, remains - weight[idx]);

	return memory[idx][remains] = max(choice1, choice2);


	}



}

int main() {

	int max_weight = 21;

	cout<<knapsack(1, max_weight)<<"\n";

	return 0;
}



