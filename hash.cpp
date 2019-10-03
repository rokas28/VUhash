#include "hash.h"
#include "main.h"

string readFromFile(string file) {

    string str;
    std::ifstream df(file);
    if (!df) cout << "Duomenu failas nerastas" << endl;
    else {
    str.assign((std::istreambuf_iterator<char>(df) ),(std::istreambuf_iterator<char>()));
    }
    return str;
};

long long int seedGen(string str) {
    long long int seed;
    seed = str.length() * str.length() * 12345;
    for(int i = 0; i < str.length(); i++){
        if(i%3!=0)seed = seed + ((int)str[i]/3*5);
        if(i%5!=0)seed = seed + ((int)str[i]/5*3);
        seed = seed + (int)str[i] + 134679285;
    }
    return seed;
}

string hash(long long int seed){

    mt19937 gen(seed);
    uniform_int_distribution<int> num(48, 57);
    uniform_int_distribution<int> clett(65, 70);
    uniform_int_distribution<int> lett(97, 122);
    uniform_int_distribution<int> type(1,3);
    string hsh(64,0);

    for (int i = 0; i < 64; i++) {
        int sym = type(gen);
        if (sym==1) hsh[i] = num(gen);
        if (sym==2) hsh[i] = clett(gen);
        if (sym==3) hsh[i] = lett(gen);
    }
    return hsh;
}