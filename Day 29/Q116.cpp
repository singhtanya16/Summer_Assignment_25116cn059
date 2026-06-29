#include <iostream>
#include <string>
using namespace std;

class Product {
public:
    int id;
    string name;
    int quantity;
    float price;
};

int main() {
    Product products[100];
    int count = 0, choice, searchId;

    do {
        cout << "\n===== INVENTORY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Product\n";
        cout << "2. Display Products\n";
        cout << "3. Search Product\n";
        cout << "4. Update Quantity\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Product ID: ";
            cin >> products[count].id;
            cin.ignore();

            cout << "Enter Product Name: ";
            getline(cin, products[count].name);

            cout << "Enter Quantity: ";
            cin >> products[count].quantity;

            cout << "Enter Price: ";
            cin >> products[count].price;

            count++;
            cout << "Product Added Successfully!\n";
            break;

        case 2:
            if (count == 0) {
                cout << "No products available.\n";
            } else {
                cout << "\n----- Product List -----\n";
                for (int i = 0; i < count; i++) {
                    cout << "Product ID : " << products[i].id << endl;
                    cout << "Name       : " << products[i].name << endl;
                    cout << "Quantity   : " << products[i].quantity << endl;
                    cout << "Price      : Rs. " << products[i].price << endl;
                    cout << "-----------------------------\n";
                }
            }
            break;

        case 3:
            cout << "Enter Product ID to Search: ";
            cin >> searchId;

            {
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (products[i].id == searchId) {
                        cout << "\nProduct Found!\n";
                        cout << "Product ID : " << products[i].id << endl;
                        cout << "Name       : " << products[i].name << endl;
                        cout << "Quantity   : " << products[i].quantity << endl;
                        cout << "Price      : Rs. " << products[i].price << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Product not found.\n";
            }
            break;

        case 4:
            cout << "Enter Product ID: ";
            cin >> searchId;

            {
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (products[i].id == searchId) {
                        int newQty;
                        cout << "Enter New Quantity: ";
                        cin >> newQty;
                        products[i].quantity = newQty;
                        cout << "Quantity Updated Successfully!\n";
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Product not found.\n";
            }
            break;

        case 5:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}