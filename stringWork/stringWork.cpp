//
//  stringWork.cpp
//  stringWork
//
//  Created by Constantine VI on 2021/11/8.
//

#include <iostream>
#include "stringWork.hpp"
#include "stringWorkPriv.hpp"

void stringWork::HelloWorld(const char * s)
{
    stringWorkPriv *theObj = new stringWorkPriv;
    theObj->HelloWorldPriv(s);
    delete theObj;
};

void stringWorkPriv::HelloWorldPriv(const char * s) 
{
    std::cout << s << std::endl;
};

