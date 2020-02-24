#pragma once

std::vector<int> vectoint(std::vector<std::string> const &src){
    std::vector<int> vec;
    for(int i=0; i<src.size(); i++) vec.push_back(stoi(src.at(i)));
    return vec;
}