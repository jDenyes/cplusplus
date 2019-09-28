#include <iostream>
#include "link.h"
#include <fstream>

void OpeningStatement();

int main() {

    //we have to have a way for dynamically adding data
    //have a temp text file storing the data we want to access in the program
    //saving we just change the name of that file, or if exists
    //loading we 

    //starts off as a temporary file "temp.txt"
    //when we save it we give the file a new name

    //We do all our operations directly on the files instead of loading in data to the program
    
    while(1) {
        OpeningStatement();
        //take a single character
        
	    _putch('\n');
	    for (char c = _getch(); c != 13; c = _getch()) {
		    _putch(c);
		    out.put(c);
	    }

        //adding
            //enter a name. then enter a value
            //save it only locally for now
        
        //save
            //write all new data to the end of the file specified

        //load
            //interpret all the data from the file and save it in the program

        //print
            //takes all the local data and outputs it on the screen

        //quit
            //ends the program
    }

    // std::ifstream in("boi.dat", std::ios::binary);

    // int data;
    // in.read(reinterpret_cast<char*>(&data), sizeof(int));

    // std::cout << data << std::endl;

    // node* head = createNode(0);
    // appendNode(head, 1);
    // std::cout << head->next->val << std::endl;
    // return 0;

    // const int myInt = 1237489 ;
    // std::ofstream out("boi.dat", std::ios::binary);
    // out.write(reinterpret_cast<const char*>(&myInt), sizeof(int));
}

void OpeningStatement() {
    std::cout << "(l)oad (s)ave (a)dd (q)uit or (p)rint?" << std ::endl;
}