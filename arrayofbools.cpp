#include <iostream>

using namespace std;

int main()
{
    bool ajax[32];
    string input;
    int app = 0;
    string output;

    while (input != "0"){
    cin >> input;

    for (int index = 0; index < 32; ++index){
        ajax[index] = input[index];
        app = ajax[index];
        cout << app;
    }
    }
    return 0;
}
