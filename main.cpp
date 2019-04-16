#include <iostream>
#include "linkedlist.h"
#include "Location.h"
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;
using namespace UTEC;
int main() {
    //cargar el archivo
    LinkedList ll=LinkedList();
    ll.load_locations(&ll,"Locations.csv");
    //buscar
    string bus;
    ifstream search;
    search.open("Search.txt",ios::in);
    while(!search.eof()){
     getline(search,bus);
     //ll.search(bus);
     (ll.search(bus)->getdata()).print();


   }




//    ifstream arc;
//    int i=0;
//    arc.open("tot.txt",ios::in);
//    string w,tex,t[7];
//    if(arc.fail()){
//        cout<<0;
//    }
//    while(!arc.eof()) {
//
//        i++;
//
//
//        //getline(locations, position_id,',');
//        getline(arc, tex, ',');
//        t[i] = tex;
//        i++;
//        if (i == 6) {
//            Location *x = new Location(t[0], t[1], t[2], t[3], t[4], t[5], t[6]);
//            ll.add_tail(*x);
//            i = 0;
//        }
//    }
//    ll.print();

 //  for(int j=0;j<7;j++){
   //    cout<<t[j]<< " ";
   //}
   // arc.close();
    return 0;
}