#pragma once
template <typename T>
int count(const T& str, const char& und){
    int counter=0;
    for(int i=0; i<str.size(); i++){
        if(str[i]==und) counter+=1;
    }
    return counter;
}