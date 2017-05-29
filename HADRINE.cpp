/*


Cloud Return, Data Size;
Addresses using bool as integer type and other types.
Float to Int comparison and convert.


*/

#include <iostream>
using namespace std;
struct Ajax {
    float hadrine = 0.0; //to add a string value breakdown, use another file for indexing.
    int app = 0;
    char index = '\0';
    bool type = false;
    string input;
    int api[1000];
};
int main()
{
    Ajax ajax;
    string hadrine;
    int $ = 0.0;
    int type;
    string output;
    int boolean = 0;
    char get[3] = {'a', 'b', 'c'};
    bool cache = false;
    bool dataType = false;
    ajax.hadrine = 3.1415;

    cin >> hadrine;
    cout << ajax.hadrine << endl;

    $ = ajax.hadrine; //now float
    cout << $ << endl;

    for (int index = 0; index < 3; index++)
    {
        type = get[index];
        ajax.app = type;
        boolean = type;
        ajax.index = boolean; //conversion
        cout << boolean << endl;
    }

        cout << endl;
        cout << "$: " << $ << endl;
        dataType = true;
        boolean = boolean - boolean + dataType; //making a boolean
        cout << "BOOLEAN: " << boolean << endl;
        boolean = $ * 0;
        cout << boolean << endl; // boolean
        ajax.type = boolean;

        if (ajax.type == false)
        {
            if (boolean == false)
                cout << "FALSE" << endl;
        }
        cout << ajax.hadrine << endl;
        ajax.hadrine = dataType + 1;

        cout << ajax.hadrine << endl;
        ajax.hadrine = ajax.hadrine + $;

        cout << ajax.hadrine << endl;

        for (int index = 3; index < 4; ++index){
            output = get[0];
            cout << output << endl;
            output = get[1];
            cout << output << endl;
            output = get[2];
            cout << output << endl;
        }
        for (int index = 5; index < 6; ++index){
            ajax.api[0] = get[0];
            ajax.api[1] = get[1];
            ajax.api[2] = get[2];

            cout << "MEMORY SIZE: " << ajax.api[index] << endl; //index;

            hadrine = ajax.api[index];
            cout << hadrine << endl;
        }

        for (int index = 5; index < 6; ++index){
            ajax.api[index] = get[0];
            ajax.api[index] = get[1];
            ajax.api[index] = get[2];

            cout << ajax.api << endl;
            ajax.input = ajax.api[index];

            cout <<"LETTER C: " << ajax.input << endl << "VALUE: " << ajax.api[index] << "  MEMORY ADDRESS: " << ajax.api << endl;
        }
    return 0;
}
