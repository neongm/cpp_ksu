#include <iostream>
#include <vector>
#include "functions\vectoint.h"
#include "functions\strsep.h"
#include "functions\vecout.h"

int main(){
    std::string st;
    std::cout<<" sep is /,enter string:\n>";
    std::cin>>st;
    std::cout<<" entered string:\n"<<st<<"\nseparated vector: \n";
    std::vector<std::string> vec = separate(st, "/"); 
    auto intvec = vectoint(vec);
    vecout(vec);
    std::cout<<"\n integrals:\n";
    vecout(intvec);
    std::cout<<"\n multiplied integrals:\n";
    for(int i=0; i<intvec.size(); i++) intvec.at(i)*=2;
    vecout(intvec);
}