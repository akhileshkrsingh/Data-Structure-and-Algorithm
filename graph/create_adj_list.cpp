// for undirected unweighted adj_List
#include<iostrema>
using namespace std;
const int N=1e3+10;
vector<int>graph1[N];
int main(){
int nodes,edges;
cin>>nodes>>edges;
    for(int i=0;i<N;i++){
        int node,adjnode;
        cin>>node>>adjnode;
        graph1[node].push_back(adjnode);
        graph1[adjnode].push_back(node);
    }
}

/*
comlexcity O(n+e);
space   O(n+e);
*/

// for undirected weighted graph
#include<iostrema>
using namespace std;
const int N=1e3+10;
vector<pair<int,int>>graph1[N];
int main(){
int nodes,edges;
cin>>nodes>>edges;
    for(int i=0;i<N;i++){
        int node,adjnode,weight;
        cin>>node>>adjnode;
        graph1[node].push_back({adjnode,weight});
        graph1[adjnode].push_back({node,weight});
    }
}