#pragma once
int randint(int const  &start, int const &end){
    return rand()%((end+1)-start)+start;
}