#include <iostream>
#include <iomanip>
using namespace std;

class Product{
private:
    int productId;
    string name;
    double price;
    int quantity;

public:
    void acceptDetails(){

        cout << "enter productid: " << endl;
        cin >> productId;

        cout << "enter productName: " << endl;
        cin >> name;
        
        cout << "enter productPrice: " << endl;
        cin >> price;

        cout << "enter productQuantity: " << endl;
        cin >> quantity;
    }


    void displayDetails() const{
        cout << left
         << setw(10) << productId
         << setw(15) << name
         << setw(12) << fixed << setprecision(2) << price
         << setw(10) << quantity
         << endl;


    }

    double totalValue() const{
        return price * quantity;
    }

    bool isLowStock(int threshold) const{
        return quantity < threshold;
    }

    string getName() const{
        return name;
    }

};

int main()
{
    Product products[2];

    for(int i=0;i<2;i++){
        products[i].acceptDetails();
    }

    cout << left
     << setw(10) << "ID"
     << setw(15) << "Name"
     << setw(12) << "Price"
     << setw(10) << "Qty"
     << endl;

    for(int i=0;i<2;i++){
        products[i].displayDetails();
    }

    for(int i=0;i<2;i++){
        cout << "Total value of products: " << i+1 << " : " << products[i].totalValue() << endl;
        
    }

    int threshold;
    cout << "enter low stock threshold: ";
    cin >> threshold;

    cout << "the following products have low stock threshold: " << endl;
    
    for(int i=0;i<2;i++){
        if(products[i].isLowStock(threshold)){
            cout << products[i].getName() <<endl;
        }
    }


    return 0;
}