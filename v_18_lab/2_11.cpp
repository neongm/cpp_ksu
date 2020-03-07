#include <iostream>
#include "randint.h"

int main(){
    int N = 10;
    int (*a)[2];
    a = new int[N][2];
    for(int i=0; i<N; i++){
         a[i][0]=randint(1,10);
         a[i][1]=randint(1,10);
    }
    for(int i=0; i<N; i++){
        std::cout<<i+1<<"-я точка: x="<<a[i][0]<<" y="<<a[i][1]<<'\n';
    }
    int s_max=0, s_min=20, temp=0;  
    for(int i=0; i<N; i++){
        temp=a[i][0]+a[i][1];
        s_max = temp>s_max ? temp:s_max;   // самая правая верхняя через сумму
        if(temp>s_max)
        s_min = temp<s_min ? temp:s_min;   // самая левавя нижняя
    }
    std::cout<<'\n'<<s_max;
    std::cout<<'\n'<<s_min;
}