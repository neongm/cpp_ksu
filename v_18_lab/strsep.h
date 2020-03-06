#pragma once
std::vector<std::string> separate(std::string const &s, std::string sep=" "){
    int ind_begin, ind2_end = 0;
    std::vector<std::string> vec;
    if(sep.size()==0) for(int i=0; i<s.size(); i++) vec.push_back(s.substr(i,1));
    else{
        do{
            ind2_end = s.find(sep, ind_begin);
            vec.push_back(s.substr(ind_begin, ind2_end-ind_begin));
            ind_begin = ind2_end+sep.size();
        }while(ind2_end!=-1);
    }
    return vec;
}