#include <iostream>
#include <vector>
#include <cstring>
#include <climits>
using namespace std;

vector<int> weight, value;
const int MAX = 2000 + 1;
int memory[MAX][MAX];

int knapsack(int idx, int remains) {
	if (idx == (int) weight.size())
		return 0;

	auto &ret = memory[idx][remains];
	if (ret != -1)
		return ret;

	int choice1 = knapsack(idx + 1, remains);	// leave
	int choice2 = 0;

	if (remains >= weight[idx])	// can pick it?
		choice2 = value[idx] + knapsack(idx + 1, remains - weight[idx]);

	return ret = max(choice1, choice2);
}



int main() {
    //m_w=15Kg
    //w={ 20,4 ,10,5}  {20 ,10,5,4
    //v={100,19,30,27} {100,30,27.....
    int fun(w, v, m_w){
    if(w=0)
        return 0


    }
    cout<<"Hello world.....!!!";
	return 0;
}


int main__() {
	// https://www.spoj.com/problems/KNAPSACK/
	ios_base::sync_with_stdio(false), cin.tie(nullptr);	// speed reading

	int max_weight, n;
	cin >> max_weight>>n;

	weight.resize(n);
	value.resize(n);

	for (int i = 0; i < n; ++i)
		cin>>weight[i]>>value[i];

	memset(memory, -1, sizeof(memory));
	cout<<knapsack(0, max_weight)<<"\n";

	return 0;
}
