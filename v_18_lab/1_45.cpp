#include <iostream>

int main(){
    int dates[6];
    int out;
    std::string answers[3] = {"перва€ дата идЄт первой", "втора€ дата идЄт первой","даты одинаковы"};
    std::cout<<"введите последовательно даты в формате: год1, мес€ц1, день1, год2, мес€ц2, день2"<<std::endl;
    for(int i=0; i<6; i++) std::cin>>dates[i];
    if(dates[0]<dates[3]) out = 0;
    else if(dates[1]<dates[4]) out = 0;
    else if(dates[2]<dates[5]) out = 0;
    else if(dates[2]==dates[5]) out = 2;
    else out = 1;
    std::cout<<answers[out]<<std::endl;
    return 0;
}
