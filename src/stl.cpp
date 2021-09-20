#include "gv.hpp"
#include <iostream>
#include <math.h>
#include <array>
#include <string.h>

int main(){
    gv::mattArray<float,5> grades;
    grades.at(0) = 2.3f;
    grades.at(1) = 9.8f;
    grades.at(2) = 3.4f;
    grades.at(3) = 7.8f;
    grades.at(4) = 99.0f; 
    for(float *itr = grades.begin(); itr != grades.end(); itr++){
        std::cout << *itr << '\t';
    }
    std::cout << '\n';
    gv::Bego <int>mari;
    mari.say(4);
    return EXIT_SUCCESS;
}
