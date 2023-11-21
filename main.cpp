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
/**
 * Retrieve the value stored in three selected Cells
 *
 * @param a numeric id representing the 1st desired cell
 *
 * @return value stored in the Cell
 *
 * @pre (cell1Id > 0 && cell1Id < 10) &&
 *      (cell2Id > 0 && cell2Id < 10) &&
 *      (cell3Id > 0 && cell3Id < 10)
 */
int display(int a) {
    // doxygen
    std::cout << a << std::endl;
    return a + 1;
}
