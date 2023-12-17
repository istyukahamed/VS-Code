#include<bits/stdc++.h>
#include<stack>
using namespace std;
const int MAXN = 20; //constant integer to define the maximum number of nodes
int adj[MAXN][MAXN]; //2D array representing the adjacency matrix
bool visited[MAXN]; //boolean array to mark if a node is visited
void bfs(int start, int n){ //function to implement DFS algorithm
stack<int>s; //creating a stack to store the nodes to be processed
s.push(start); //pushing the start node to the stack
visited[start] = true; //marking the start node as visited
while(!s.empty()){ //while there are nodes to be processed
int u = s.top(); //getting the top node from the stack
s.pop(); //removing the top node from the stack
cout<<u<<" "<<endl; //printing the node that has been processed
for(int v = 1; v<=n;v++){ //looping through all the nodes
if(adj[u][v] == 1 && !visited[v]) //if there is an edge between the current node and the next
 //node, and the next node has not been visited yet
{
visited[v] = true; //marking the next node as visited
s.push(v); //pushing the next node to the stack
}
}
}
}
int main(){ //main function
int n,m;
cout<<"Enter the number of nodes and edges "<<endl;
cin>>n>>m; //getting the number of nodes and edges from the user
int u,v;
for(int i = 0; i<m; i++){ //looping through all the edges
cin>>u>>v; //getting the start and end nodes of the edge
adj[u][v] = 1; //marking the edge in the adjacency matrix
adj[v][u] = 1; //marking the edge in the adjacency matrix for an undirected graph
}
bfs(3,n); //calling the DFS function with start node 3 and number of nodes n
return 0;
}
