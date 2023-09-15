#include <iostream>
#include "Sequence/sequence.h"
#include "Associative/associative.h"
#include "Unordered/unordered.h"
#include "Template/template.h"

int main() {
    template_();
    sequence();
    associative();
    unordered();

    // TODO write some code
    std::cout << "Hello, World!" << '\n';
    return 0;
}
