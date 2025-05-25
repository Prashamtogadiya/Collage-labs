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

    public void Bfs(int start) {
        BFShelper(start);
    }

    public void BFShelper(int start) {
        HashSet<Integer> visited = new HashSet<>();
        Queue<Integer> q = new LinkedList<>();

        q.add(start);

        while (!q.isEmpty()) {
            int vertex = q.poll();
            System.out.println(vertex);
            visited.add(vertex);
            for (int i : list.getOrDefault(vertex, new ArrayList<Integer>())) {
                if (!visited.contains(i)) {
                    visited.add(i);
                    q.add(i);
                }
            }
        }
    }
}


public class BFS {
    public static void main(String[] args) {
        Graph g = new Graph();

        g.addEdge(0, 1);
        g.addEdge(0, 2);
        g.addEdge(0, 3);
        g.addEdge(3, 4);

        g.Bfs(3);        
    }
}
