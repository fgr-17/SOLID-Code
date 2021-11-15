#include <iostream>
using namespace std;

class undirected_graph {};
class directed_graph {};

template <typename Graph>
struct graph_algorithm {
    const Graph graph;

    void search() {
        cout << "Some search algorithm graphs\n";
    }
};

template <>
struct graph_algorithm<directed_graph> {
    const directed_graph graph;

    void search() {
        cout << "search alg for directed grph\n";
    }
};

template<typename Graph>
void run(const Graph & graph) {
    graph_algorithm<Graph> algo{graph};
    algo.search();
}


int main () {
    run(undirected_graph{});
    run(directed_graph{});
}
