#include <bits/stdc++.h>
using namespace std;

//#define N 1000003
//#define inf 1000000009
//typedef long long ll;

void displayAdjList(list<int> adjList[], int node_number) {
   for(int i = 0; i<node_number; i++) {
      cout << i << "--->";
      list<int> :: iterator it;
      for(it = adjList[i].begin(); it != adjList[i].end(); ++it) {
         cout << *it << " ";
      }
      cout << endl;
   }
}

void add_edge(list<int> adjList[], int u, int v) {
     //add v into the list u, and u into list v
    adjList[u].push_back(v);
    adjList[v].push_back(u);
}

int main(){
    int node_number=6;//Number of node is equal to 6.
    list<int> adjList[node_number];//Create array of lists that number of element equals to the node number.
    add_edge(adjList,0,4);
    add_edge(adjList,0,3);
    add_edge(adjList,1,2);
    add_edge(adjList,1,4);

    displayAdjList(adjList,node_number);

    return 0;
}

