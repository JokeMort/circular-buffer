//
// Created by epsilion on 15.08.22.
//

#include "bufor.h"

int Bufor::create_array(int rozmiar) {
    pointer_array = (int*)malloc(rozmiar);
    return 0;
}
int Bufor::add_value(int value) {
    if (left_cursor == right_cursor+1 || (left_cursor == 0 && right_cursor == size)){
        std::cout << "Stack full\n";
        return 1;
    }
    *(pointer_array + right_cursor) = value;
    right_cursor += 1;
    if (right_cursor == size){
        right_cursor = 0;
    }
    return 0;
}
int Bufor::get_value() {
    if (left_cursor == right_cursor){
        std::cout << "Stack empty\n";
        return 1;
    }
    std::cout << *(pointer_array+left_cursor) << "\n";
    left_cursor+=1;
    if (left_cursor == size){
        left_cursor = 0;
    }
    return 0;
}
Bufor::Bufor(int rozmiar){
    create_array(rozmiar);
    size = rozmiar;
    left_cursor = 0;
    right_cursor = 0;
}
Bufor::~Bufor(){
    free(pointer_array);
}