#include <iostream>

int main(){
    int dates[6];
    int out;
    std::string answers[3] = {"��ࢠ� ��� ���� ��ࢮ�", "���� ��� ���� ��ࢮ�","���� ���������"};
    std::cout<<"������ ��᫥����⥫쭮 ���� � �ଠ�: ���1, �����1, ����1, ���2, �����2, ����2"<<std::endl;
    for(int i=0; i<6; i++) std::cin>>dates[i];
    if(dates[0]<dates[3]) out = 0;
    else if(dates[1]<dates[4]) out = 0;
    else if(dates[2]<dates[5]) out = 0;
    else if(dates[2]==dates[5]) out = 2;
    else out = 1;
    std::cout<<answers[out]<<std::endl;
    return 0;
}
