#include <iostream>
#include <string>
#include "List.h"

using namespace std;

int main() {
    List<int> list;

    cout << "Insert" << endl;

    list.insert(5);
    list.insert(10);
    list.insert(15);

    list.print();

    cout << endl;

    cout << "Get Data" << endl;
    cout << list.getData(1) << endl;

    cout << endl;

    cout << "Get Size" << endl;
    cout << list.getSize() << endl;

    cout << endl;

    cout << "Get Max" << endl;
    cout << list.getMax() << endl;

    cout << endl;

    cout << "Insert At" << endl;
    list.insertAt(1, 7);
    list.print();

    cout << endl;

    cout << "Remove At" << endl;
    list.removeAt(2);
    list.print();

    cout << endl;

    cout << "Remove Last" << endl;
    list.removeLast();
    list.print();

    cout << endl;

    cout << "Invalid Position" << endl;
    list.removeAt(20);

    cout << endl;

    cout << "Empty List" << endl;

    List<int> emptyList;
    emptyList.removeLast();

    cout << endl;

    cout << "String List" << endl;

    List<string> things;

    things.insert("Laptop");
    things.insert("Phone");
    things.insert("Tablet");

    things.print();

    return 0;
}