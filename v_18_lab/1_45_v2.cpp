#include <iostream>
 
int main(){
    int dates[7];
    int out;
    std::string answers[3] = {"���g��� ���� ��ࢮ�", "���� ��� ���� ��ࢮ�","���� ���������"};
    std::cout<<"������ ��᫥����⥫쭮 ���� � �ଠ�: ���1, �����1, ����1, ���2, �����2, ����2"<<std::endl;
    for(int i=0; i<6; i++) std::cin>>dates[i];
    dates[6] = (dates[2]+dates[1]*12+dates[0]*365) - (dates[5]+dates[4]*12+dates[3]*365);
    if (dates[6]) out = dates[6]>0 ? 1:0; else out = 2;
    std::cout<<answers[out]<<std::endl;  
    return 0;
}