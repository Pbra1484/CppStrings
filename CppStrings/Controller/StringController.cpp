//
//  StringController.cpp
//  CppStrings
//
//  Created by Brashear, Patrick on 2/2/17.
//  Copyright © 2017 Brashear, Patrick. All rights reserved.
//

#include "StringController.hpp"
#include <iostream>

using namespace std;

void StringController :: start()
{
    aString = "stuff";
    
    __SIZE_TYPE__ size = aString.size();
    
    cout << "the string is " << aString << endl;
    
    cout << "the size is " << size << endl;
    
    char at = aString.at(3);
    
    cout << "the chareter at 3 is " << at << endl;
    
    if(aString.empty())
    {
        cout << "the string is empty" << endl;
    }
    else
    {
        cout << "the string is not empty" << endl;
    }
    
    string sub = aString.substr(2, 4);
    
    cout << "a substring of it is" << sub << endl;
    
    if(aString.compare(sub))
    {
        cout << "the strings are equal" << endl;
    }
    else
    {
        cout << "the strings are not equal" << endl;
    }
    
    char at2 = aString[2];
    
    cout << "the chareter at 2 is " << at2 << endl;
}
