#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Product {
    string name;
    int quantity;
};

int main() {
    vector<Product> products = {
        {"Laptop", 5},
        {"Keyboard", 12},
        {"Mouse", 20}
    };

    cout << "Inventory:" << endl;

    for (const Product& product : products) {
        cout << product.name
             << " - "
             << product.quantity
             << " units" << endl;
    }

    return 0;
}
