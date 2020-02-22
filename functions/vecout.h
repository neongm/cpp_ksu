#pragma once
void vecout(std::vector<std::string> const &vec){
    std::cout<<"[";
    for(int i=0; i<vec.size();i++){
        std::cout<<vec.at(i);
        if(i!=vec.size()-1) std::cout<<", ";
    }
    std::cout<<']';
}                   // just outputs vector to console