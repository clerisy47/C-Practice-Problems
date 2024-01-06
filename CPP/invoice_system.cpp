#include <iostream>
#include <vector>
#include <string>

class Product {
protected:
    std::string name;
    double price;

public:
    Product(const std::string& n, double p) : name(n), price(p) {}

    virtual double calculatePrice() const {
        return price;
    }

    virtual void displayDetails() const {
        std::cout << "Product: " << name << "\tPrice: $" << price << std::endl;
    }
};

class Electronics : public Product {
public:
    std::string brand;
    std::string model;
    int year;

    Electronics(std::string brand, std::string model, int year, double price)
        : Product("", price), brand(brand), model(model), year(year) {}

    void display() {
        std::cout << "Brand: " << brand << "\n";
        std::cout << "Model: " << model << "\n";
        std::cout << "Year: " << year << "\n";
        std::cout << "Price: " << price << "\n";
    }
};

class Clothing : public Product {
public:
    std::string brand;
    std::string type;
    std::string size;

    Clothing(std::string brand, std::string type, std::string size, double price)
        : Product("", price), brand(brand), type(type), size(size) {}

    void display() {
        std::cout << "Brand: " << brand << "\n";
        std::cout << "Type: " << type << "\n";
        std::cout << "Size: " << size << "\n";
        std::cout << "Price: " << price << "\n";
    }
};

class Groceries : public Product {
public:
    std::string brand;
    std::string type;
    double weight;

    Groceries(std::string brand, std::string type, double weight, double price)
        : Product("", price), brand(brand), type(type), weight(weight) {}

    void display() {
        std::cout << "Brand: " << brand << "\n";
        std::cout << "Type: " << type << "\n";
        std::cout << "Weight: " << weight << " kg\n";
        std::cout << "Price: " << price << "\n";
    }
};

class Customer {
    std::string name;
    std::string address;
    std::string phoneNumber;

public:
    Customer(std::string name, std::string address, std::string phoneNumber)
        : name(name), address(address), phoneNumber(phoneNumber) {}

    void display() const {
        std::cout << "Name: " << name << "\n";
        std::cout << "Address: " << address << "\n";
        std::cout << "Phone Number: " << phoneNumber << "\n";
    }
};

class Invoice {
    std::vector<Product*> items;
    Customer customer;

public:
    Invoice(const Customer& c) : customer(c) {}

    void addProduct(Product* product) {
        items.push_back(product);
    }

    double calculateTotal() const {
        double total = 0.0;
        for (const auto* item : items) {
            total += item->calculatePrice();
        }
        return total;
    }

    const std::vector<Product*>& getItems() const {
        return items;
    }

    const Customer& getCustomer() const {
        return customer;
    }
};

class InvoiceSystem {
    std::vector<Customer> customers;
    std::vector<Product*> products;
    std::vector<Invoice> invoices;

public:
    void createInvoice() {
        std::cout << "Enter customer details:\n";
        std::string name, address, phoneNumber;
        std::cout << "Name: ";
        std::getline(std::cin, name);
        std::cout << "Address: ";
        std::getline(std::cin, address);
        std::cout << "Phone Number: ";
        std::getline(std::cin, phoneNumber);

        Customer customer(name, address, phoneNumber);
        Invoice invoice(customer);

        char choice;
        do {
            std::cout << "Choose product type (E for Electronics, C for Clothing, G for Groceries, Q to Quit): ";
            std::cin >> choice;
            std::cin.ignore();  // Clear the newline character from the input buffer

            switch (choice) {
                case 'E': {
                    std::string brand, model;
                    int year;
                    double price;
                    std::cout << "Enter Electronics details:\n";
                    std::cout << "Brand: ";
                    std::getline(std::cin, brand);
                    std::cout << "Model: ";
                    std::getline(std::cin, model);
                    std::cout << "Year: ";
                    std::cin >> year;
                    std::cout << "Price: ";
                    std::cin >> price;

                    Electronics* electronics = new Electronics(brand, model, year, price);
                    invoice.addProduct(electronics);
                    break;
                }
                case 'C': {
                    std::string brand, type, size;
                    double price;
                    std::cout << "Enter Clothing details:\n";
                    std::cout << "Brand: ";
                    std::getline(std::cin, brand);
                    std::cout << "Type: ";
                    std::getline(std::cin, type);
                    std::cout << "Size: ";
                    std::getline(std::cin, size);
                    std::cout << "Price: ";
                    std::cin >> price;

                    Clothing* clothing = new Clothing(brand, type, size, price);
                    invoice.addProduct(clothing);
                    break;
                }
                case 'G': {
                    std::string brand, type;
                    double weight, price;
                    std::cout << "Enter Groceries details:\n";
                    std::cout << "Brand: ";
                    std::getline(std::cin, brand);
                    std::cout << "Type: ";
                    std::getline(std::cin, type);
                    std::cout << "Weight: ";
                    std::cin >> weight;
                    std::cout << "Price: ";
                    std::cin >> price;

                    Groceries* groceries = new Groceries(brand, type, weight, price);
                    invoice.addProduct(groceries);
                    break;
                }
                case 'Q':
                    break;
                default:
                    std::cout << "Invalid choice. Please try again.\n";
                    break;
            }

        } while (choice != 'Q');

        invoices.push_back(invoice);
        std::cout << "Invoice created successfully!\n";
    }

    void displayMenu() {
        char choice;
        do {
            std::cout << "Menu:\n";
            std::cout << "1. Create Invoice\n";
            std::cout << "2. Display Invoices\n";
            std::cout << "3. Quit\n";
            std::cout << "Enter your choice: ";
            std::cin >> choice;

            switch (choice) {
                case '1':
                    createInvoice();
                    break;
                case '2':
                    // Implement logic to display invoices
                    for (const auto& invoice : invoices) {
                        // Display invoice details
                        invoice.getCustomer().display();
                        for (const auto* item : invoice.getItems()) {
                            item->displayDetails();
                        }
                        std::cout << "Total: $" << invoice.calculateTotal() << "\n\n";
                    }
                    break;
                case '3':
                    std::cout << "Exiting...\n";
                    break;
                default:
                    std::cout << "Invalid choice. Please try again.\n";
                    break;
            }

        } while (choice != '3');
    }
};

int main() {
    InvoiceSystem invoiceSystem;
    invoiceSystem.displayMenu();
    return 0;
}
