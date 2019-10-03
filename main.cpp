#include "hash.h"
#include "main.h"

int main( int argc, char *argv[])
{
    string input;
    string file;
    file = "test.txt";

    input = readFromFile(file);
    cout << seedGen(input)<< endl;
    cout << hash(seedGen(input)) << endl;

    cout << hash(seedGen("testas2")) << endl;
    cout << hash(seedGen("Testas2")) << endl;

    return 0;
}