#include "vectorFunctions.hpp"

#include <iostream>


std::vector<std::shared_ptr<int>> generate(const int count)
{
    if(count < 1)
        return {};

    std::vector<std::shared_ptr<int>> vec(count);

    for(int i = 0; i < count; i++){
        vec[i] = std::make_shared<int>(i);    
    }

    return vec;
}

void print(const std::vector<std::shared_ptr<int>>& vec)
{
    for(const auto& el : vec) {
        std::cout << *el << '\t'; 
    }
}

void add10(const std::vector<std::shared_ptr<int>>& vec)
{
   for (const auto& el : vec) {
       if(el){
            *el += 10;
       }
   }

}
void sub10(int * const ptr)
{
    if(ptr){
        *ptr -= 10;
    }
}
void sub10(const std::vector<std::shared_ptr<int>>& vec)
{
    for (const auto& el : vec) {
        sub10(el.get());
    }
}
