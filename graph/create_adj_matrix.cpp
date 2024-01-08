//for undeirected graph unweighted graph
#include<iostream>
using namespace std;

int main(){
    int nodes,edges;
    cin>>nodes>>edges;
    int graph[nodes+1][edges+1];
    for(int i=0;i<edges;i++){
        int node,adjnode;
        cin>>node>>adjnode;
        graph[node][adjnode]=1;
        graph[adjnode][node]=1;
    }
}

// for weighted undirected graph
#include<iostream>
using namespace std;

int main(){
    int nodes,edges;
    cin>>nodes>>edges;
    int graph[nodes+1][edges+1];
    for(int i=0;i<edges;i++){
        int node,adjnode,weight;
        cin>>node>>adjnode>weight;
        graph[node][adjnode]=weight;
        graph[adjnode][node]=weight;
    }
}


// complexcity t.c. == O(n)
  // space complexcity ==O(n^2)

  /*advantage of adjecency matrix method*
  1. can retrive the link in O(1) 
  2.delete link in O(1)
  */ 
  /* Disadvantage of adjcency matrix method
  1.it takes O(n^2) space to store the adjecency matrix*/
  
  