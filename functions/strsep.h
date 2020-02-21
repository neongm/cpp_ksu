std::vector<std::string> separate(std::string *s, std::string sep=" "){
    int ind1, ind2 = 0;
    std::vector<std::string> vec;
    do{
        ind2 = (*s).find(sep, ind1);
        vec.push_back((*s).substr(ind1, ind2-ind1));
        ind1 = ind2+sep.size();
    }while(ind2!=-1);
    return vec;
}
