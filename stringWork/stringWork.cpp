//
//  splitstring.cpp
//  Automatic SNAP Interferogram Processing System
//
//  Created by Constantine VI on 2018/12/6.
//  Copyright © 2018 CSRSR. All rights reserved.
//

#include <vector>
#include <string>
#include <iostream>

using namespace std;

std::vector<std::string> splitstring(std::string Inputstring, std::string Separate, bool KeepSpace) {
    vector<string> stringReturn;
    size_t Break = 0;
    size_t stringSize;
    do
    {
        Break = Inputstring.find(Separate, 0);
        stringSize = Inputstring.size();
        string Outputstring = string().assign(Inputstring, 0, Break);
        if (Separate.compare(" ") == 0) {
            if (Outputstring.size() != 0) {
                stringReturn.push_back(Outputstring);
            }
        }
        else {
            if (!KeepSpace) {
                // 去除字串最前方的空格
                while (Outputstring.find(" ") == 0 && Outputstring.size() > 0) {
                    Outputstring.assign(Outputstring, 1, Outputstring.size());
                }
                // 去除字串最後方的空格
                while (Outputstring.rfind(" ") == Outputstring.size() - 1 && Outputstring.size() > 0) {
                    Outputstring.assign(Outputstring, 0, Outputstring.size() - 1);
                }
            }
            stringReturn.push_back(Outputstring);
        }
        
        if (Break != std::string::npos)
        {
            Inputstring.assign(Inputstring, Break + (size_t)1, stringSize - Break);
        }
    } while (Break != std::string::npos);
    return stringReturn;
}
