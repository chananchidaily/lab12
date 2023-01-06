#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std ;

int main (){
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    int A = rand()%9 ;

    string G ;
    if (A == 0) G = "A" ;
    else if (A == 1) G = "B+" ;
    else if (A == 2) G = "B";
    else if (A == 3) G = "C+" ;
    else if (A == 4) G = "C" ;
    else if (A == 5) G = "D+" ;
    else if (A == 6) G = "D" ;
    else if (A == 7) G = "F" ;
    else if (A == 8) G = "W" ;

     cout << "You will get "<< G << " in this 261102.";
}