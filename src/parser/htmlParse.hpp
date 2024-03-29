//
// Created by shobhit on 1/9/23.
//

#ifndef HTMLENGINE_HTMLPARSE_HPP
#define HTMLENGINE_HTMLPARSE_HPP

#define OPENING_TAG 7
#define CLOSING_TAG 8
#define INNER_TEXT 9

#include "../lexer/htmlTokenise.hpp"
#include "../nTree/treeImplement.hpp"

#include <string>

class htmlParse {
    treeImplement DOM_tree;
    const struct treeNode *DOM_root = DOM_tree.getCurrentNode(); // root node
private:
    void createNodeAndSetPtr();
    int isCloseTagComplementaryToOpenTag(std::string o_tag, std::string c_tag);
public:
    struct treeNode* htmlParser(std::string fPath);
};
#endif //HTMLENGINE_HTMLPARSE_HPP
