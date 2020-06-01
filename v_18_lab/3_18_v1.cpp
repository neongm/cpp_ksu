#include <iostream>
#include <vector>
#include "strsep.h"
//���� ��� ᫮��. ������ ⮫쪮 � ᨬ���� ᫮�, ����� ��������� � ����� ᫮��� ⮫쪮 ���� ࠧ.

std::vector<std::string> input(std::string const &message, std::size_t const &words_amount){
    std::string input;           // �㭪�� ����� c �஢�મ�, 㤮���� �뭥�� �� �� main()
    std::vector<std::string> sep_input;
    do{
        std::cout<<message<<std::endl;
        std::getline(std::cin, input);
        sep_input = separate(input);
    }while(sep_input.size()!=words_amount);
    return sep_input;
}

std::size_t letter_counter(std::string const &word, char const &letter){  // ���稪 �宦����� ᨬ���� � ��ப�
    std::size_t counter = 0;
    for(std::size_t i=0; i<word.length(); i++){
        if (word[i] == letter) counter++;
    }
    return counter;
}

int main(){
    std::vector<std::string> vec = input("������ ��� ᫮��: ", 2);
    std::string temp_words_letters[2];   
    std::string answer = "";
    // ��宦����� ��� ᨬ����� � ������ ᫮��, ����� ���������� 1 ࠧ
    for(std::size_t word=0; word<2; word++){
        for(std::size_t i=0; i<vec.at(word).length(); i++){
            if (letter_counter(vec.at(word), vec.at(word)[i])==1){
                temp_words_letters[word]+=vec.at(word)[i];
            }
        }
    }
    
    char letter_buffer;
    // �஢�ઠ �� �室���� � ��� ᫮��
    for(std::size_t i=0; i<temp_words_letters[0].length(); i++){
        letter_buffer=temp_words_letters[0][i];
        if(letter_counter(temp_words_letters[0]+temp_words_letters[1], letter_buffer)==2){
            answer+=letter_buffer;
        }
    }
    // �뢮� �⢥�
    if(answer.length()!=0){                         
        std::cout<<"ᨬ����, ᮮ⢥�����騥 �᫮���: "<<answer<<std::endl;
    }else{
        std::cout<<"��� ᨬ�����, ᮮ⢥�������� �᫮���"<<std::endl;
    }
}