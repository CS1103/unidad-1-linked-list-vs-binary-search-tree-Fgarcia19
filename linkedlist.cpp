#include <iostream>
#include "linkedlist.h"
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

UTEC::LinkedList::LinkedList() {
    head= nullptr;
    tail= nullptr;
}

UTEC::LinkedList::~LinkedList() {

}

int UTEC::LinkedList::size() {
    int count = 0;
    Node* actual = head;
    while(actual != nullptr) {
        count++;
        actual = actual->next;
    }
    return count;
}

bool UTEC::LinkedList::is_empty() {
    return head == nullptr;
}

UTEC::Node *UTEC::LinkedList::get_head() {
    return head;
}

UTEC::Node *UTEC::LinkedList::get_tail() {
    return tail;
}


void UTEC::LinkedList::add_head(const Location& data) {
    Node* temp = new Node(data);
    if (is_empty()) {
        tail = temp;
        head = temp;
    } else {
        temp->next = head;
        head = temp;
    }
}

void UTEC::LinkedList::add_tail(const Location& data) {
    Node* temp = new Node(data);
    if (is_empty()) {
        tail = temp;
        head = temp;
    } else {
        tail->next = temp;
        tail = temp;
    }
}
void UTEC::LinkedList::print() {
    Node* temp = head;
    if (is_empty())
        cout << "No hay nodos" << endl;
    for (int i = 0; i < size(); i++){
        temp->data.print();
        temp = temp -> next;
    }

}

void UTEC::LinkedList::load_locations(UTEC::LinkedList *linked_list, std::string file_name) {
    ifstream arch;
    int i = 0;
    string tex, t[7];
    arch.open(file_name, ios::in);

    //string pos, state, county, lat, lon, line, cons;
    while (!arch.eof()) {
        getline(arch, tex, ',');
        t[i] = tex;
        i++;
        if (i == 6) {
            Location *x = new Location(t[0], t[1], t[2], t[3], t[4], t[5], t[6]);
            linked_list->add_tail(*x);
            i = 0;
        }
//        getline(arch, pos, ',');
//        getline(arch, state, ',');
//        getline(arch, county, ',');
//        getline(arch, lat, ',');
//        getline(arch, lon, ',');
//        getline(arch, line, ',');
//        getline(arch, cons, '\n');
//        linked_list->add_tail(Location(pos, state, county, lat, lon, line, cons));
        //Location *x = new Location(pos, state, county, lat, lon, line, cons);
        //linked_list->add_tail(*x);
    }
    arch.close();
}

UTEC::Node* UTEC::LinkedList::search(std::string positionid){
    Node* aux=head;
    while(aux!= tail){
        if (aux->data.position_id==positionid){
            return aux;
        }
        else{
            aux=aux->next;
        }
    //Node* aux = head;
    //while (true) {
      //  if (aux->data.position_id != positionid && aux->next != nullptr) {
        //    aux = aux->next;
        //} else {
          //  return aux;

        }
    //}
    }



