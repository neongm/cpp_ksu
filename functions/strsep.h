std::vector<std::string> separate(std::string &s, std::string sep=" "){
    int ind_begin, ind2_end = 0;
    std::vector<std::string> vec;
    do{
        ind2_end = s.find(sep, ind_begin);
        vec.push_back(s.substr(ind_begin, ind2_end-ind_begin));
        ind_begin = ind2_end+sep.size();
    }while(ind2_end!=-1);
    return vec;
}                    //not working with empty line in separator
