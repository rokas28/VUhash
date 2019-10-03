#include "hash.h"
#include "main.h"

int main( int argc, char *argv[])
{
    string file = "skirtingasb.txt";

    cout << "hash: " << hash(readData(file)) << endl;
    //hash_k();

    return 0;
}