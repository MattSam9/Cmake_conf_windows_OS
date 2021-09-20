#pragma once
#include <iostream>

namespace gv {
    template <typename T> void array_print(T &name){
        for(auto &i : name){
            std::cout << i << '\t';
        }
        std::cout << '\n';
    }
    template <typename T, int size>
    class mattArray{
        private:
            T arr[size];
            int length{size};
        public:
            T& at(int index){
                return arr[index];
            }
            T front(void){
                return arr[0];
            }
            T back(void){
                return arr[length-1];
            }
            T *begin(void){
                return arr;
            }
            T *end(void){
                return &arr[length];
            }
            void print(void){
                for(auto &i: arr){
                    std::cout << i << '\t';
                } 
                std::cout << '\n';
            }
    };
    void ignoreBuffer(void);
    int getInt(int min, int max);
    float getFloat(float min, float max);
    double getDouble(double min, double max);
    template <typename U>
    void zari(U message){ std::cout << message << '\n';}

    template <typename T>
    class Bego{
        public:
            void say(T input);
    };

}
