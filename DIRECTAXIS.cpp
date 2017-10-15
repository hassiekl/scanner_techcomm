#include <iostream>
using namespace std;

/* Note: WINDOWS 10 UPDATE:: !! THE PROGRAM NOW IS AN ENCRYPTION USING THE MACHINE LANGUAGE OF THE HARDWARE
THE COMPUTER CANNOT DECRYPT IT ITS A SPECIAL KEY AND THE LETTERS BEING OUTPUTTED CAN BE MAPPED WITH THE PROGRAMMING LANGUAGE
TO MAKE A NEST OF ALL THE PROGRAMS THAT COULD BE CREATED USING LETTERS AND SYMBOLS AS EVENTS AND TRIGGERS FOR BUILDING A PROGRAM
FROM NOTHING AS IMPORTING A KEY INSTEAD OF A TORRENT, THEN BUILDING IT AS A KEY. !!

 TESTING HELLO WORLD, PLEASE INPUT A NUMBER BEFOREHAND AND THEN RETYPE THE INPUT SUCH AS "HELLO WORLD", "HELLO, WORLD".
*/


struct Direct{
    double DirectAXIS = 0.0;
    long Alpha = 0;
    bool input = 0;
    string Axis;
    double Cycle[100000];
};
void X(string input) //test double digits, overflow, SHA-4.
{
    Direct dir;
    string output;
    dir.input = 0;
    dir.Alpha = 0;
    dir.Axis = input;
    output = dir.Alpha;

    for (int index = 0; index < input.length(); ++index){
        dir.Cycle[index] = dir.Axis[index]; // string in Cycle float.
        dir.Alpha = dir.Cycle[index]; // float to integer.

        output = dir.Alpha + (dir.Alpha + 1);
        dir.Axis = output;

        cout << dir.Axis << endl;

        dir.Alpha = dir.Axis[index];
        cout << dir.Axis[index] << endl;

        //cout << dir.Alpha << endl;

        //dir.Axis = "";
    }
}
int main()
{
    Direct dir;
    string input;
    while (input != "(directaxis.api)")
    {
    cin >> input;
    dir.Alpha = 0; // decimals are the same within and out of float and int.
    dir.DirectAXIS = dir.Alpha;

    cout << dir.DirectAXIS << endl; // needed.

    if (dir.DirectAXIS == dir.Alpha){
        X(input);
    }
    }
    return 0;
}
