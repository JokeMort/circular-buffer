//
// Created by epsilion on 15.08.22.
//

#ifndef BUFOR_KOLOWY_BUFOR_H
#define BUFOR_KOLOWY_BUFOR_H

#include <iostream>

class Bufor {
    int size;
    int *pointer_array;
    int left_cursor;
    int right_cursor;
    int create_array(int);
public:
    int add_value(int);
    int get_value();
    Bufor(int);
    ~Bufor();
};


#endif //BUFOR_KOLOWY_BUFOR_H
