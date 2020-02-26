#include <iostream>
#include <set>
#include <iterator>

template <typename T>
void vecout(const T& vec){
    std::cout<<"[";
    for(int i=0; i<vec.size();i++){
        std::cout<<vec.at(i);
        if(i!=vec.size()-1) std::cout<<", ";
    }
    std::cout<<']';
}                   // just outputs vector to console

template <typename T>
auto unity(const T& set1, const T& set2){
    set<T>::iterator it = set1.begin();
    vecout(st);
}

int main(){
    std::set<char> A{'h','t','w','d','x','e'};
    std::set<char> B{'j','d','q','y','w'};
    std::cout<<"объединение: "<<unity(A, B)<<std::endl;
    return 0;
}