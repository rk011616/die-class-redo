/**
 * Author: Rowan Knutsen
 * Date: 28 Aug 2020
 * Description: Program simulating the rolling of a 6 sided die
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "die.h"
using namespace std;
//function prototype

int main(){

    Die d;
    cout << "Face Value: " << d << endl;
    Die d12(12);
    cout << "Face Value: " << d12 << endl;
    d12.setNumSides(24);
    for(size_t i = 0; i < 6; i++){
        cout << "Roll: " << d12.roll() << endl;
    }
    return 0;
}
