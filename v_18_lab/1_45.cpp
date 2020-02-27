#include <iostream>
// Дано две даты, каждая из которых состоит из трех чисел (день, месяц и год). 
// Определить, какая дата идет первой.
int main()
{
	int dates[6];
	int ans=1;
    std::string answers[3] = {"первая дата была раньше","вторая дата была раньше","даты эквивалентны"};
	std::cout<<"введите последовательно первый год, первый месяц, первый день, второй год, второй месяц, второй день:"<<std::endl;
	for(int i=0; i<6; i++) std::cin>>dates[i];
    if(dates[0]==dates[3] && dates[1]==dates[4] && dates[2]==dates[5]) ans=2;
    else{
        if(dates[0]<dates[3]) ans=0;
        else if(dates[1]<dates[4]) ans=0;
        else if(dates[2]<dates[5]) ans=0;
    }
	std::cout<<answers[ans]<<std::endl;
	return 0;
}
