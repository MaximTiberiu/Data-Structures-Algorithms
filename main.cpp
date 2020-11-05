#include "./Data Structures/include/linkedList.h"

int main() {
    linkedList l;
    l.createNode(1);
    l.insertStart(0);
    l.insertEnd(4);
    l.display();
    l.insertEnd(2);
    l.insertEnd(3);
    l.insertEnd(4);
    l.display();
    l.deletePosition(3);
    l.display();
    l.insertPosition(2, 11);
    l.deletePosition(2);
    l.display();
    std::cout << l.getNth(3);
    return 0;
}
