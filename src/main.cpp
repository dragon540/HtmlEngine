//
// Created by shobhit on 21/7/23.
//
#include <iostream>
#include <string>

#include "lexer/fileRead.hpp"
#include "lexer/htmlFileRead.hpp"
#include "lexer/htmlTokenise.hpp"

int main() {
    std::cout << "Welcome to Coco browser engine" << std::endl;

    htmlTokenise ht;
    std::list<Token> :: iterator it;
    std::list<Token> temp;
    temp = ht.tokeniseHtml("/home/shobhit/Desktop/Coco-BrowserEngine/example/tags.html");

    it = temp.begin();
    while(it != temp.end()) {
        std::cout << it->tok_val << " ---- " << it->tok_attribute << std::endl;
        it++;
    }
    return 0;
}