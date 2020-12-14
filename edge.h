#pragma once

#include "vertex.h"


class Edge {
    public:
        Vertex source;
        Vertex destination;
        double weight;
        int stop;
        
        Edge() :
            source(), destination(), weight(0), stop(0){}

        Edge(Vertex a, Vertex b, double w, int s) : 
            source(a), destination(b), weight(w), stop(s){}

        Edge(Vertex a, Vertex b) :
            source(a), destination(b), weight(1), stop(0){}


        // return true if this edge's weight is less than the other's weight
        bool operator<(const Edge &other) {
            return weight < other.weight;
        }

        //compare if two edges are the same
        bool operator==(const Edge &other) {
            if(source != other.source || destination != other.destination || weight != other.weight) {
                return false;
            }
            return true;
        }

};