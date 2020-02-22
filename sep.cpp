#include <iostream>
#include <string>
#include <vector>

void vecout(std::vector<std::string> const &vec){
    std::cout<<"[";
    for(int i=0; i<vec.size();i++){
        std::cout<<vec.at(i);
        if(i!=vec.size()-1) std::cout<<", ";
    }
    std::cout<<']';
}                   // just outputs vector to console

std::vector<std::string> separate(std::string const &s, std::string sep=" "){
    int ind_begin, ind2_end = 0;
    std::vector<std::string> vec;
    if(sep.size()==0) for(int i=0; i<s.size(); i++) vec.push_back(s.substr(i,1));
    else{            // empty separator fix  
        do{
            ind2_end = s.find(sep, ind_begin);
            vec.push_back(s.substr(ind_begin, ind2_end-ind_begin));
            ind_begin = ind2_end+sep.size();
        }while(ind2_end!=-1);
    }   
    return vec;
} 

int main(){
    std::string test("DS*FD-SD");
    std::cout<<"test string: "<<test<<", separator: '*'"<<std::endl;
    std::vector<std::string> vec = separate(test,"*");
    vecout(vec);
    return 0;
}