#pragma once

#include <string>

using namespace std;
/** 
 * the Vertex class stores informatoin from the airport data
 * @param airportID - stores the specific openFlight airports indetification
 * @param IATA - the airport specific IATA (for user's input)
 */
class Vertex {
    private:
        double latitude;
        double longitude;
        string airportID;
        string IATA;
    public:
        Vertex() {
            latitude = 0;
            longitude = 0;
            airportID = "";
            IATA = "";
        }

        Vertex(double lat, double log, string id, string iata) : 
        latitude(lat), longitude(log), airportID(id), IATA(iata) {}

        string getID() const {
            return airportID;
        }

        string getIATA() const {
            return IATA;
        }

        double getLongitude() const {
            return longitude;
        }

        double getLatitude() const {
            return latitude;
        }

        bool operator== (const Vertex &other) const {
            return airportID == airportID;
        } 
    
        bool operator!= (const Vertex &other) const {
            return airportID != other.airportID;
        }

};