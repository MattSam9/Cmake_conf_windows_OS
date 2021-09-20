#include "gv.hpp"
#include <iostream>
#include <limits>

void gv::ignoreBuffer(void){
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
}
int gv::getInt(int min, int max){
    int result{};
    do {
        std::cout << "Enter integer value between [" << min << ", " << max <<"]:";
        std::cin >> result;
        if(std::cin.fail()){
            std::cin.clear();
            gv::ignoreBuffer();
        } else {
            gv::ignoreBuffer();
            break;
        }
    }while(true);
    return result; 
}
float getFloat(float min, float max){
    float result{};
    do {
        std::cout << "Enter a value between [" << min << ", " << max <<"]:";
        std::cin >> result;
    if(std::cin.fail()){
        std::cin.clear();
        gv::ignoreBuffer();
    } else {
        gv::ignoreBuffer();
        break;
    }
    }while(true);
    return result;
}
double getDouble(double min, double max){
    double result{};
    do {
        std::cout << "Enter a value between [" << min << ", " << max <<"]:";
        std::cin >> result;
        if(std::cin.fail()){
            std::cin.clear();
            gv::ignoreBuffer();
        } else {
            gv::ignoreBuffer();
            break;
        }
    }while(true);
    return result;
}

template <typename T>
void gv::Bego<T>::say(T input){
    std::cout << "bego ey yar begoo...!\t" << input << '\n';
}

template class gv::Bego<int>;
template class gv::Bego<double>;
template class gv::Bego<std::string>;

