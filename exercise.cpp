#include <iostream>
#include <string>
using namespace std;


// Define a structure for a Coffee product
struct Coffee {
    string name;
    int stock;
};

// Global variable to store a single coffee product record
Coffee coffee;
bool isStockAvailable = false;  // Flag to indicate if a record exists

// Function to insert new coffee stock data
void insertStock() {
    cout << "Enter Coffee Name: ";
    cin.ignore();  // Clear any leftover newline from previous input
    getline(cin, coffee.name);
    cout << "Enter initial stock quantity: ";
    cin >> coffee.stock;
    isStockAvailable = true;
    cout << "Coffee stock record inserted successfully!\n";
}

// Function to display the current coffee stock
void displayStock() {
    if (!isStockAvailable) {
        cout << "No coffee stock record available. Please insert a record first.\n";
        return;
    }
    cout << "\n=== Coffee Stock Record ===\n";
    cout << "Coffee Name: " << coffee.name << "\n";
    cout << "Stock Quantity: " << coffee.stock << "\n";
}

// Function to search for the coffee by name
void searchStock() {
    if (!isStockAvailable) {
        cout << "No coffee stock record available. Please insert a record first.\n";
        return;
    }
    
    string searchName;
    cout << "Enter Coffee Name to search: ";
    cin.ignore(); // Clear the newline
    getline(cin, searchName);
    
    // For simplicity, we perform a case-sensitive search for the exact name.
    if (coffee.name == searchName) {
        cout << "Coffee found! Name: " << coffee.name 
             << ", Stock Quantity: " << coffee.stock << "\n";
    } else {
        cout << "No coffee found with the name \"" << searchName << "\"\n";
    }
}

// Function to update the stock quantity
void updateStock() {
    if (!isStockAvailable) {
        cout << "No coffee stock record available. Please insert a record first.\n";
        return;
    }
    
    string updateName;
    cout << "Enter Coffee Name to update: ";
    cin.ignore();
    getline(cin, updateName);
    
    if (coffee.name == updateName) {
        cout << "Enter new stock quantity: ";
        cin >> coffee.stock;
        cout << "Coffee stock updated successfully!\n";
    } else {
        cout << "No coffee found with the name \"" << updateName << "\"\n";
    }
}

int main() {
    system("cls");
    int choice;
    
    do {
        // Display the menu
        cout << "\n=== Coffee Stock Management System ===\n";
        cout << "1. Insert Coffee Stock\n";
        cout << "2. Display Coffee Stock\n";
        cout << "3. Search Coffee Stock by Name\n";
        cout << "4. Update Coffee Stock\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                insertStock();
                break;
            case 2:
                displayStock();
                break;
            case 3:
                searchStock();
                break;
            case 4:
                updateStock();
                break;
            case 5:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
        
    } while (choice != 5);
    
    return 0;
}
