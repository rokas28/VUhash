#include "hash.h"
#include "main.h"

int main( int argc, char *argv[])
{
    string input;
    string file = "tuscias.txt";

    input = readData(file);
    cout << "data: " << input << endl;
    cout << "hash: " << hash(input) << endl;
    //hash_k();

    return 0;
}