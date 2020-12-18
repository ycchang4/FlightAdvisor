#include "graph.h"

#include <iostream>

Graph::Graph() {};

vector<Vertex> Graph::getAdjacentVertices(Vertex source) const{

    // @todo - clear all the below
    vector<Vertex> res;
    if(!vertexExists(source)) {
        return res;
    }
    unordered_map<Vertex, Edge> &map = adjList[source];
    for(auto it = map.begin(); it != map.end(); it++) {
        res.push_back(it->first);
    }
    return res;
}


Edge Graph::getEdge(Vertex source, Vertex destination) const{

    // @todo - clear all the below
    Edge e;
    return e;
}

bool Graph::vertexExists(Vertex v) const{
    return false;
}

bool Graph::edgeExists(Edge e) const{
    return false;
}


void Graph::insertVertex(Vertex v) {
    return;
}

void Graph::insertEdge(Edge e) {
    return;
}