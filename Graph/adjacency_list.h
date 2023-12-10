#include <iostream>
#include <vector>
using namespace std ;

typedef vector<vector<int>> Graph ;
struct edge={
to,g
cost
};
void add_direct_edge(Graph graph, int from , int to , int cost){

}
int main(){
    cout<<"hello";
    int nodes ,edges;
    cin>>nodes>> edges;
    Graph graph(nodes);
    for(int e = 0 ; e < edges; ++e){
            int from , to ,cost ;
            cin >> from >> to >>cost ;
            add_direct_edge(graph, from , to , cost)
    }


return 0;
}
