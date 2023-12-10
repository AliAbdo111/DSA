#include <iostream>
#include <vector>
using namespace std;
typedef vector<vector<int>> Graph;

void add_directed_edge(Graph &graph, int from ,int to ,int waght){
graph[from][to] =waght;
}
void add_undirected_edges(Graph &graph, int from ,int to,int waght ){
graph[from][to] +=1 ;
graph[to][from] +=1 ;
}

void print_adjacency_mAtric(Graph &graph){
 for(int i=0 ; i < graph.size() ; ++i){
    for(int j=0 ;j<graph.size() ; ++j){
        if(graph[i][j] > 0)
            cout <<"from : " <<i <<" to : "<<j
      << " there are wghit"<<graph[i][j]<<" edges \n" ;
    }
};

}

int main()
{
    int nodes,edges;
    cin >>nodes>>edges;
    Graph graph(nodes ,vector<int>(nodes));
    for (int e=0; e<edges ;++e){
        int from, to,wghit ;
    cin>> from>> to >>wghit;
    add_directed_edge(graph, from , to, wghit);
    add_undirected_edges(graph, from , to, wghit);
    }
    print_adjacency_mAtric(graph);
    return 0;
}
