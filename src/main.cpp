#include "include/list.h"


int main(int arg_length, char *args[]){

    if(arg_length > 1){
        List simpleList;
        simpleList.ten = string(args[1]);
        simpleList.print_menu();
    }
    else{
        cout << "Username not found.. exiting the program" << endl;
    }

    return 0;

}

