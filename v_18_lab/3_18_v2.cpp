#include <iostream>
#include <string>
// 3.18 ���� ��� ᫮��. ������ ⮫쪮 � ᨬ����, �����
// ����� ��������� � ����� ᫮��� ⮫쪮 ���� ࠧ
template <typename T>
int count(const T& str, const char& und){
    int counter=0;
    for(int i=0; i<str.size(); i++){
        if(str[i]==und) counter+=1;
    }
    return counter;
}                  

int main(){
    std::string str;
    std::cout<<"������ ��� ᫮��, ࠧ�������� �஡����:"<<std::endl;
    getline(std::cin, str);
    int len_firt = str.find(" ", 0);
    std::string result;
    for(int i=0; i<len_firt; i++) if(count(str.substr(0, len_firt), str[i])==1 && count(str.substr(len_firt, str.size()-len_first), str[i])==1) result+=str[i];
    if(result.size()!=0) {std::cout<<"ᨬ����, ᮮ⢥�����訥 �᫮���:\n"<<result<<std::endl;}
    else{std::cout<<"⠪�� ᨬ����� �� �����㦥��"<<std::endl;}
}
