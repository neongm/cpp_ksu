#include <iostream>
#include <vector>
#include "strsep.h"
//даны два слова. Найдите только те символы слов, которые встречаются в обоих словах только один раз.

std::vector<std::string> input(std::string const &message, std::size_t const &words_amount){
    std::string input;           // функция ввода c проверкой, удобней вынести её из main()
    std::vector<std::string> sep_input;
    do{
        std::cout<<message<<std::endl;
        std::getline(std::cin, input);
        sep_input = separate(input);
    }while(sep_input.size()!=words_amount);
    return sep_input;
}

std::size_t letter_counter(std::string const &word, char const &letter){  // счетчик вхождений символа в строку
    std::size_t counter = 0;
    for(std::size_t i=0; i<word.length(); i++){
        if (word[i] == letter) counter++;
    }
    return counter;
}

int main(){
    std::vector<std::string> vec = input("введите два слова: ", 2);
    std::string temp_words_letters[2];   
    std::string answer = "";
    // нахождение всех символов в каждом слове, которые повторяются 1 раз
    for(std::size_t word=0; word<2; word++){
        for(std::size_t i=0; i<vec.at(word).length(); i++){
            if (letter_counter(vec.at(word), vec.at(word)[i])==1){
                temp_words_letters[word]+=vec.at(word)[i];
            }
        }
    }
    
    char letter_buffer;
    // проверка на входение в оба слова
    for(std::size_t i=0; i<temp_words_letters[0].length(); i++){
        letter_buffer=temp_words_letters[0][i];
        if(letter_counter(temp_words_letters[0]+temp_words_letters[1], letter_buffer)==2){
            answer+=letter_buffer;
        }
    }
    // Вывод ответа
    if(answer.length()!=0){                         
        std::cout<<"символы, соответствующие условию: "<<answer<<std::endl;
    }else{
        std::cout<<"нет символов, соответсутвующих условию"<<std::endl;
    }
}