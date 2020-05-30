#include <iostream>
#include <vector>
#include "strsep.h"
#include "vecout.h"

int main(){
    std::string st;
    std::cout<<"введите строку:\n>";
    std::getline(std::cin, st);
    auto vec = separate(st);
    vecout(vec);
    for(int i=0; i<vec.size(); i++){
        auto temp = vec.at(i);       
    }
}
