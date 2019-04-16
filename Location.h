#ifndef LINKEDLISTVSBINARYTREE_LOCATION_H
#define LINKEDLISTVSBINARYTREE_LOCATION_H
#include <string>
#include <iostream>
using namespace std;
class Location {

public:
    std::string position_id;
    std::string state_code;
    std::string county;
    std::string latitude;
    std::string longitude;
    std::string line;
    std::string construction;
    Location(
            std::string position_id,
            std::string state_code,
            std::string county,
            std::string latitude,
            std::string longitude,
            std::string line,
            std::string construction): position_id{position_id}, state_code{state_code}, county{county}, latitude{latitude}, longitude{longitude}, line{line}, construction{construction}{};

    std::string get_latitude(){return latitude;}
    std::string get_longitude(){return longitude;}
    void print(){
        std::cout << position_id << " " << state_code << " " << county << " " << latitude << " " << longitude << " " << line << " " << construction<<endl;
    }



    // Declare los metodos que crea necesario

    // Cree que sea necesario agregar destructor, justifique

};


#endif //LINKEDLISTVSBINARYTREE_LOCATION_H