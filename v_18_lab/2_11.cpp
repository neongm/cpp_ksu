#include <iostream>
#include "randint.h"
// заадано множество точек на плоскости. Выбрать из них четыре разные точки, 
// которые являются вершинами квадрата наибольшего периметра.
  
int main(){
    int N = 5000;
    int (*a)[2];
    a = new int[N][2];
    for(int i=0; i<N; i++){
         a[i][0]=randint(1,10);
         a[i][1]=randint(1,10);
    }
    for(int i=0; i<N; i++){
        std::cout<<i+1<<"-я точка: x="<<a[i][0]<<" y="<<a[i][1]<<'\n';
    }
    int s_max=0, s_min=20, temp=0, max_index=0, min_index=0;  
    for(int i=0; i<N; i++){
        temp=a[i][0]+a[i][1];
        if(temp>s_max) {
            s_max = temp;
            max_index = i;
        }       
        else if(temp<s_min) {
            s_min = temp;
            min_index = i;
        }
    }
    std::cout<<"\nточки, которые являются вершинами квадрата наибольшего периметра: \n"
             <<"M1("<<a[min_index][0]<<"; "<<a[min_index][1]<<")\n"
             <<"M2("<<a[max_index][0]<<"; "<<a[max_index][1]<<")"<<std::endl;
}