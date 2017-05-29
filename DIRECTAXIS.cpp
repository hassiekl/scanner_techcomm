#include <iostream>
using namespace std;

/* Note: WINDOWS 10 UPDATE:: !! THE PROGRAM NOW IS AN ENCRYPTION USING THE MACHINE LANGUAGE OF THE HARDWARE
THE COMPUTER CANNOT DECRYPT IT ITS A SPECIAL KEY AND THE LETTERS BEING OUTPUTTED CAN BE MAPPED WITH THE PROGRAMMING LANGUAGE
TO MAKE A NEST OF ALL THE PROGRAMS THAT COULD BE CREATED USING LETTERS AND SYMBOLS AS EVENTS AND TRIGGERS FOR BUILDING A PROGRAM
FROM NOTHING AS IMPORTING A KEY INSTEAD OF A TORRENT, THEN BUILDING IT AS A KEY. !!

    Testing "hello world", and "world"
    provides two different outputs
    for the ending string memory size.
    These memory sizes are apart of the string
    they allocate memory and are used for mathematical purposes
    these are random and they hold information.
    I completed apples to oranges in float and integer.
    Back to memory. These are initiated arrays built from
    float data type to a cycle and back to a string to see
    the machine language in ASCII. The integer values are
    encrypted and need to be decrypted, but they are just floating
    memory space and is empty. They do not use anything but a validated
    memory. Notice the initialized Alpha = 0, creates this
    and without it, it is nothing. Therefore it is a stop code.
    dir.Axis = ""; means it is reset, and if you put it back in
    the memory is still random. The if statement in main is the trigger
    and the event for the floating types to integer and string. They are compared
    and are seen as apples to apples, instead of apples to oranges.
    Testing single and double digits, is not correct in mathematical sequences.
    They are just a way of encrypting and have no real sequence.
    Meaning this could be the SHA we are looking for.
    Notice that it builds the ASCII within itself, therefore
    the computer language builds itself. Also notice when converting back to int,
    the computer doesn't recognize the ASCII value anymore, therefore it
    is pure memory and memory is now a string value that changes. Or holds a letter.
    As seen in ajaxtyping.cpp..
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
