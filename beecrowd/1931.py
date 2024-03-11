# https://www.urionlinejudge.com.br/judge/pt/problems/view/1931

from collections import defaultdict

fset = frozenset

class Graph:
    def __init__(self, v):
        self.nodes = set()
        self.edges = defaultdict(list)
        self.distances = {}
        for i in range(v):
            self.add_node(str(i+1))

    def add_node(self, value):
        self.nodes.add(value)

    def __repr__(self):
        string_to_return = map(lambda a: "Edge: " + str(a), self.edges)
        return "\n".join(string_to_return)

    def add_edge(self, from_node, to_node, distance):
        self.edges[from_node].append(to_node)
        self.edges[to_node].append(from_node)
        self.distances[fset({from_node, to_node})] = distance


def dijkstra(graph, initial):
    visited = {initial: 0}
    path = {}
    nodes = set(graph.nodes)

    while nodes:
        min_node = None
        for node in nodes:
            if node in visited:
                if min_node is None:
                    min_node = node
                elif visited[node] < visited[min_node]:
                    min_node = node

        if min_node is None:
            break

        nodes.remove(min_node)
        current_weight = visited[min_node]

        for edge in graph.edges[min_node]:
            weight = current_weight + graph.distances[fset({min_node, edge})]
            if edge not in visited or weight < visited[edge]:
                visited[edge] = weight
                path[edge] = min_node



    return visited


##########################################################

g = Graph(5)

# g.add_edge('1', '2', 2)
# g.add_edge('2', '3', 1)
# g.add_edge('2', '4', 10)
# g.add_edge('3', '4', 6)

g.add_edge('1', '2', 3)
g.add_edge('2', '3', 5)
g.add_edge('3', '5', 2)
g.add_edge('5', '1', 8)
g.add_edge('2', '4', 1)
g.add_edge('4', '5', 4)

visitados= dijkstra(g,'1')

print(visitados)

'''
1 2 3

2 3 5

3 5 2

5 1 8

2 4 1

4 5 4
'''

