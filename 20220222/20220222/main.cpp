//
//  main.cpp
//  20220222
//
//  Created by jujube on 2022/2/22.
//

#include <iostream>
#define  PI 3.14





int main(int argc, const char * argv[]) {
    // insert code here...
    #ifdef PI
    std::cout <<  "--------PI was defined-----\n";
    #endif

    std::cout << "Hello, World!\n";
    return 0;
}
