//
//  stringWork.hpp
//  ASPS
//
//  Created by Constantine VI on 2021/10/14.
//  Copyright © 2021 CSRSR. All rights reserved.
//

#ifndef stringWork_h
#define stringWork_h

#include <vector>
#include <string>

// 分割std::string字串, splitstring(std::string 輸入字串, std::string 分隔字元)
std::vector<std::string> splitstring(std::string Inputstring, std::string Separate, bool KeepSpace = false);
std::string replacestring(std::string Inputstring, std::string replaceTarget, std::string replacestring);

#endif /* stringWork_h */
