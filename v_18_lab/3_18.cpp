// 3.18 Даны два слова. Найдите только те символы слов, которые встречаются в обоих
// словах только один раз.
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

int main(){
    std::set<char> set_char;
    std::string str;
    std::string temp;
    getline(std::cin, str);
    int sep_index = str.find(" ", 0);
    std::string result;
    //std::cout<"str="<<str<<"\nsep_index="<<sep_index<<"\ndelta="<<delta<<std::endl;
    for(int i=0; i<sep_index; i++){
        std::cout<<str[i]<<"  i="<<i<<std::endl;
        for(int j=sep_index+1; j<str.size(); j++){
            std::cout<<"comparing i="<<str[i]<<" to j="<<str[j]<<std::endl;
            if(str[i]==str[j]){
                result+=str[i];
                std::cout<<"adding i="<<str[i]<<" to result, result = "<<result<<std::endl;
            }
        }
    std::cout<<"\n"<<result<<std::endl;
    }
}
