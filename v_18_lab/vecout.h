#pragma once

template <typename T>
void vecout(const T& vec){
    std::cout<<"[";
    for(int i=0; i<vec.size();i++){
        std::cout<<vec.at(i);
        if(i!=vec.size()-1) std::cout<<", ";
    }
    std::cout<<']';
}                   // just outputs vector to console