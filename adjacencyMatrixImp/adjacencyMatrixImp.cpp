#include <bits/stdc++.h>
using namespace std;

//#define N 1000003
//#define inf 1000000009
//typedef long long ll;

int adjMat[10][10];

void displayMatrix(int node_number) {
   for(int i = 0; i < node_number; i++) {
      for(int j = 0; j < node_number; j++) {
         cout << adjMat[i][j] << " ";
      }
      cout << endl;
   }
}

void add_edge(int u,int v){
    adjMat[u][v]=1;
    adjMat[v][u]=1;
}

int main(){
    int node_number=6;
    add_edge(0,0);
    add_edge(0,4);
    add_edge(0,3);
    add_edge(1,2);
    add_edge(1,4);
    add_edge(1,5);
    add_edge(2,3);
    add_edge(2,5);
    add_edge(5,3);
    add_edge(5,4);
    add_edge(5,5);
    displayMatrix(node_number);

    return 0;
}