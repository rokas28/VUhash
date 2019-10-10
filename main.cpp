#include "hash.h"
#include "main.h"

int main( int argc, char *argv[])
{
    cout << "hash: " << hash(readData(argv[1])) << endl;
    //hash_k(); //funkcija skirta hash'uoti konstitucija.txt eilutes

    return 0;
}