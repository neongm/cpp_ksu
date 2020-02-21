#include <iostream>
#include <string>
#include <vector>

void vecout(std::vector<std::string> vec){
    std::cout<<"[";
    for(int i=0; i<vec.size();i++){
        std::cout<<vec.at(i);
        if(i!=vec.size()-1) std::cout<<", ";
    }
    std::cout<<']';
}

std::vector<std::string> separate(std::string *s, std::string sep=" "){
    int ind1, ind2 = 0;
    std::vector<std::string> vec;
    do{
        ind2 = (*s).find(sep, ind1);
        vec.push_back((*s).substr(ind1, ind2-ind1));
        ind1 = ind2+sep.size();
    }while(ind2!=-1);
    return vec;
}

int main(){
    std::string test("012**45**7");
    std::cout<<"test string: "<<test<<"   separator: **"<<std::endl;
    std::vector<std::string> vec = separate(&test, "**");
    vecout(vec);
    return 0;
}