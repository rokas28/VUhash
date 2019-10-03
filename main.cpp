#include "hash.h"
#include "main.h"

int main( int argc, char *argv[])
{
    string input;
    string file = "test2.txt";

    input = readData(file);
    cout << "data: " << input << endl;
    cout << "hash: " << hash(seedGen(input)) << endl;

    return 0;
}