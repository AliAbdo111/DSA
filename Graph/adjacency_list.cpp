#include <iostream>
#include <vector>
using namespace std ;
struct edge{
int to;
int cost;
};
typedef vector<vector<edge>> Graph ;

void add_direct_edge(Graph &graph, int from , int to , int cost){
graph[from].push_back({to,cost});
}
void add_undirect_edge(Graph &graph, int from , int to , int cost){
graph[from].push_back({to,cost});
graph[to].push_back({from,cost});
}

void print_adjacency_list(Graph &graph){

for (int i=0 ; i<graph.size(); ++i){
    cout<<"Node is : "<<i <<"has neighbors ";
    for(int j=0 ; j < (int) graph[i].size(); ++j){
        cout <<"(to: "<<graph[i][j]->to<<",cost: "
        << graph[i][j]->cost <<")" <<"\n;
    }
}


}


int main(){

    int nodes ,edges;
    cin>>nodes>> edges;
    Graph graph(nodes);
    for(int e = 0 ; e < edges; ++e){
            int from , to ,cost ;
            cin>> from >> to >>cost ;
            add_direct_edge(graph, from , to , cost);
    }

print_adjacency_list(graph);
return 0;
}
