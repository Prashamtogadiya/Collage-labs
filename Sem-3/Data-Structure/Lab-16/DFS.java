import java.util.*;

class Graph{
    public HashMap<Integer, ArrayList<Integer>> list;

    Graph() {
        list = new HashMap<>();
    }

    public void addEdge(int u, int v) {
        list.putIfAbsent(u, new ArrayList<Integer>());
        list.putIfAbsent(v, new ArrayList<Integer>());
        list.get(u).add(v);
        list.get(v).add(u);
    }

    public void Dfs(int start) {
        DFShelper(start, new HashSet<Integer>());
    }

    public void DFShelper(int vertex, HashSet<Integer> visited) {
        System.out.println(vertex);
        visited.add(vertex);

        for (int i : list.getOrDefault(vertex, new ArrayList<Integer>())) {
            if (!visited.contains(i)) {
                DFShelper(i, visited);
            }
        }
    }
}

public class DFS {
    public static void main(String[] args) {
        Graph g = new Graph();

        g.addEdge(0, 1);
        g.addEdge(0, 2);
        g.addEdge(0, 3);
        g.addEdge(3, 4);

        g.Dfs(3);
    }
}