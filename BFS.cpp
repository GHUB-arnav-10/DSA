#include <iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int>bfs(vector<vector<int>>&graph,int start){
vector<bool> visited(graph.size(),false);
queue<int> q;
vector<int>traversal;

visited[start]=true;
q.push(start);

while(!q.empty()){
    int current=q.front();
    q.pop();
    traversal.push_back(current);

    for(int neigbour : graph[current]){
        if(!visited[neigbour]){
            visited[neigbour]=true;
            q.push(neigbour);
        }
    }
}
return traversal;
}
int main(){
    vector<vector<int>> graph = {{1, 2},
                                 {0, 3, 4},
                                 {0, 5},
                                 {1},
                                 {1},
                                 {2}};

    vector<int> traversal = bfs(graph, 0);

    for (int node : traversal) {
        cout << node << " ";
    }

    return 0;

}
