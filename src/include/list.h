#include <iostream>
#include <vector>
using namespace std;

class List {

    public:

        List(){
            //constructor
        }
        ~List(){
            //destructor
        }
        
        vector<string> list;
        string ten;


        void print_menu();
        void print_list();
        void add_item();
        void delete_item();

};