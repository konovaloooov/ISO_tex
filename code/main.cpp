struct Graph {
    int V; // количество вершин
    vector< vector<int> > adjList; // список смежности
    
    Graph(int n) {
        V = n;
        adjList.resize(V);
    }
    void add(int u, int v) {
        adjList[u].push_back(v); // для ориентированного графа
    }
    void uni(){
        for (int i = 0; i < V; i++) {
            adjList[i].erase(unique(adjList[i].begin(), adjList[i].end()), adjList[i].end());
        }
    }
};