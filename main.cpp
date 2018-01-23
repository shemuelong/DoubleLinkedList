#include "DList.h"

int main(){
    LList<std::string> b;   //Doubly Link List is instantiated
    std::string x;          //String variable is declared
    int y;                  //Counter variable is declared


    std::cout << "How many strings do you want to type?: ";     //Number of elements to be inputted is asked
    std::cin >> y;                                              //Integer Y is used for subsequent for loop

    for(int i = 0; i < y; i++){   //Each string is stored in x, and then appended to the Linked List
        std::cout << "What is string " << i+1 << "?: ";
        std::cin >> x;
        b.append(x);
    }

    std::cout << "Printing String Linked List in order: ";      //The List is then printed using the printList() function
    b.printList();
    std::cout << "Printing String Linked List in reverse: ";    //The List is then printed using the printReverse() function
    b.printReverse();
    
    return 0;
}
