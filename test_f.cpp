#include <iostream>
#include <vector>
#include "functions\vectoint.h"
#include "functions\strsep_f.h"
#include "functions\vecout.h"

int main(){
    std::string st;
    std::cout<<" sep is /,enter string:\n>";
    std::cin>>st;
    std::cout<<" entered string:\n"<<st<<"\nseparated vector: \n";
    auto vec = separate(st, "/"); 
    vecout(vec);
}