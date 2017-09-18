#include <iostream>
#include <fstream>
using namespace std;

int main() {

    //we need to get the user input for the name of the file
    string filename;
    //declare the filestream
    ifstream input_file;
    cout << "Please enter a file name: ";
    getline(cin, filename);
    cout << "Opening: " << filename << endl;
    input_file.open(filename);
    //we need to get the size of the file
    int size;
    int z = 0;

    // while statement that is never ending for some reason
    while (!input_file.eof())
        //this works when I put z < 10 but thats cheating because i know how many numbers were in the file
        //
    {
        //this cout test case was to see why the program was stalling and it is a never ending loop
        //cout << "test 2 " << endl;
        z++;
        input_file >> size;
        if (z ==1)
        {
          int num1;
            num1 = size;


        }
         /*
        else if(z == 2)
        {
            int num2;
            num2 = size;
            cout << "the second number is " << num2 << endl;
            return size;
        }
        else
        {
            input_file >> size;
            return size;
        }
    */

    }

    cout << "there are " << z << " numbers in the file" << endl;
    //cout << "the first number of the file is " << num1 << endl;



    input_file.close();
    return 0;


    //  EVERYTHING PAST THIS WAS TRIAL AND ERROR
    // ... MAINLY ERROR
    //  I AM INCLUDING IT IN CASE YOU GUYS FIND SOMETHING THAT MIGHT HAVE MADE THIS WORK
    // BETTER THAN IT CURRENTLY IS
    // A LOT OF IT IS REPETITIVE BUT I WAS TRYING ALMOST ANYTHING TO GET THIS TO WORK

    /*

    //we need to get the user input for the name of the file
    string filename;
    //declare the filestream
    ifstream input_file;
    cout << "Please enter a file name: ";
    getline(cin, filename);
    cout << "Opening: " << filename << endl;
    input_file.open(filename);
    //we need to get the size of the file
    /*if(input_file) {
        input_file.seekg(0, input_file.end);
        int size = input_file.tellg();
        input_file.seekg(0, input_file.beg);
        char * buffer = new char[size];
        input_file.read(buffer,size);
        input_file.close();
        cout.write(buffer,size);
    }

    //while loop to get the size
    int size;
    int z = 0;
    while (z < 10)
    {
        z++;
        input_file >> size;
        if(z == 1)
        {
            int num1;
            num1 = size;
            cout << "the first number is " << num1 << endl;
            input_file >> size;
        }else if(z == 2)
        {
            int num2;
            num2 = size;
            cout << "The second number is " << num2 << endl;
            input_file >> size;
        }
        else
        {
            input_file >> size;
        }

    }

    cout << endl;

    //display how many numbers are in the file
    cout << "There are " << z << " numbers in the file" << endl;


    //retrieve the first number




    //now we need to retrieve the first 2 numbers
    //we know that z is total number of elements
    //seekg

    input_file.close();
    return 0;

    */
}
