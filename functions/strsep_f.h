#pragma once                //not work at all
template <typename s>
std::vector<std::string> separate(const s&, std::string const &sep){
    int ind_begin, ind2_end = 0;
    std::vector<std::string> vec;
    if(sep.size()==0) for(int i=0; i<s.size(); i++) vec.push_back(s.substr(i,1));
    else{
        do{
            ind2_end = s.find_first_of(sep, ind_begin);
            vec.push_back(s.substr(ind_begin, ind2_end-ind_begin));
            ind_begin = ind2_end+sep.size();
                if(ind_begin>100) break;
        }while(ind2_end!=std::string::npos);
    }
    return vec;
}