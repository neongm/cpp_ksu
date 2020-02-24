#include <iostream>
 
int main(){
    int dates[7];
    int out;
    std::string answers[3] = {"первgдата идёт первой", "вторая дата идёт первой","даты одинаковы"};
    std::cout<<"введите последовательно даты в формате: год1, месяц1, день1, год2, месяц2, день2"<<std::endl;
    for(int i=0; i<6; i++) std::cin>>dates[i];
    dates[6] = (dates[2]+dates[1]*12+dates[0]*365) - (dates[5]+dates[4]*12+dates[3]*365);
    if (dates[6]) out = dates[6]>0 ? 1:0; else out = 2;
    std::cout<<answers[out]<<std::endl;  
    return 0;
}