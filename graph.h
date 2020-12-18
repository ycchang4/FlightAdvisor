#pragma once

#include "vertex.h"
#include "edge.h"

#include <vector>
#include <unordered_map>

using std::vector;
using std::unordered_map;

class Graph {
    public:

        /**
         * create a default constructor
         */
        Graph();

        /**
         * To get the adjacent Vertices 
         * @param serouce - the starting vertex
         * @return - a vector containing all the adjacent vertices
         */

        std::vector<Vertex> getAdjacentVertices(Vertex source) const;

        /**
         * get the edge of two points from the adjacent matrix
         * @param source - the starting vertex
         * @param destination - the ending vertex
         * @return - the edge connecting the two vertices
         */

        Edge getEdge(Vertex source, Vertex destination) const;


        /** 
         * check if a vertex exists in the graph
         * @param v - the vertex to check
         * @return - true or false
         */

        bool vertexExists(Vertex v) const;


        /** 
         * check if an edge exists in the graph
         * @param e - the edge to check
         * @return - true or false
         */

        bool edgeExists(Edge e) const;


        /** 
         * insert a vertex
         * @param v - the vertex to insert
         */

        void insertVertex(Vertex v);


        /** 
         * insert an edge
         * @param e - the edge to insert
         */

        void insertEdge(Edge e);


    private:
        mutable std::unordered_map<Vertex, std::unordered_map<Vertex, Edge>> adjList;
};