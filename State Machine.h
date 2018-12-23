#include <iostream> //basic input or output
using namespace std; // std::cout stuff

const int no_quarter = 0; //setting the state 0 to no_quarter for reading purposes
const int has_quarter = 1; //setting the state 1 to has_quarter for reviewing purposes
const int sell_gumball = 2;//setting the state 2 to sell_gumball for reviewing purposes
const int outof_gumballs = 3;//setting the state 3 to outof_gumball for reviewing purposes

class gumballmachine { //this is the class that will hold all the functions for the gumball
  public: 
    int getstate() { //getstate is the function that will store the states and return it as the value 'state'
        return state;
  }

    void insert() { // This is the first function of the gumball and is responsible for 
      if (state == no_quarter) { // Asks if the state is 0 set to no__quarter
        std::cout << "Quarter inserted\n"; //Prints "Quarter inserted" if true
        setstate (has_quarter); //After printing, the state will be set to 1
     }
      else { //This is in case the state is not set to 0
        std:: cout << "cannot insert quarter\n"; //Will print "Cannot insert quarter"
     }
   }

    void eject() { // Function name for attempting the ejection of a quarter
     if (state == has_quarter) { //Asks if state is set to 1
      std:cout << "Quarter Ejected\n"; //Print message if true
      setstate(no_quarter); // Set state to 0 if statement is true
   }
    else {
     std::cout << "can't eject, no quarter\n"; //Print message if false
     }
   }

    void crank() {
      if (state == has_quarter) { //Asks if state is set to 1
        std::cout << "you have recieved a gumball\n"; //Print message if true
        setstate(sell_gumball); // Set state to 2 if statement is true
      }
      else {
        std::cout << "no quarter in machine to crank down\n"; //Print message if false
      }
    }

    void out() {
      if (state == sell_gumball) { //Asks if state is set to 1
      std::cout << "you are all out of gumballs sorry\n"; //Print message if true
      setstate(outof_gumballs); // Set state to 3 if statement is true
      }
      else {
        std::cout << "not out of gumballs continue\n"; //Print message if false
      }
    }

    void refill() {
      if (state == outof_gumballs) { //Asks if state is set to 1
        std::cout << "the balls have been refilled\n"; //Print message if true
        setstate(no_quarter); // Set state to 0 if statement is true
      }
      else {
        std::cout << "the balls are not empty yet\n"; //Print message if false
      }
    }

  protected:

  private:
   int state; //Function for holding the values for the states within the program

    void setstate(int newstate) { //Adds Setstate and newstate functions
              state=newstate; //Allows states to be equals to newstate when used.
   }
};


int main() { //Main function where the magic happens
  gumballmachine gumball; //Naming the gumballmachine to known as gumball
  std::cout << "Time for the gumball state machine! \n"; //Prints message at start of program
  std::cout << "Current State: " << gumball.getstate() << std::endl; // Prints current state

// Below is where the program will tell the machine what to do, before using the gumball machine the functions it will call can be in any order and depending on which order and which states are within it, will depend on the reponse you will get.

//Each line will print the current state and then using end line function (endl) it will  then make a new line for the next step of the process
  gumball.refill(); //calling the refill if statement within the gumball function
  std::cout << "Current State: " << gumball.getstate() << std::endl;
  gumball.insert(); //calling the Insert if statement within the gumball function
  std::cout << "Current State: " << gumball.getstate() << std::endl;
  gumball.insert(); //calling the Insert if statement within the gumball function
  std::cout << "Current State: " << gumball.getstate() << std::endl;
  gumball.eject(); //calling the Eject if statement within the gumball function
  std::cout << "Current State: " << gumball.getstate() << std::endl;
  gumball.crank(); //calling the Crank if statement within the gumball function
  std::cout << "Current State: " << gumball.getstate() << std::endl;
  gumball.insert(); //calling the Insert if statement within the gumball function
  std::cout << "Current State: " << gumball.getstate() << std::endl;
  gumball.crank(); //calling the Crank if statement within the gumball function
  std::cout << "Current State: " << gumball.getstate() << std::endl;
  gumball.out(); //calling the out if statement within the gumball function
  std::cout << "Current State: " << gumball.getstate() << std::endl;
  gumball.refill(); //calling the refill if statement within the gumball function
  std::cout << "Current State: " << gumball.getstate() << std::endl;
}; //End of function and program