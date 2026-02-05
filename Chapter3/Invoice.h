#include <string>
using std::string;
class Invoice{
  private:
    string partNumber;
    string partDescription;
    int quantity;
    int priceUnit;
  public:
    Invoice(string number, string description, int itemQuantity, int itemPrice){
      setPartNumber(number);
      setPartDescription(description);
      setQuantity(itemQuantity);
      setPrice(itemPrice);
    }

    //setters
    void setPartNumber(string number){
      partNumber = number;
    }
    void setPartDescription(string description){
      partDescription = description;
    }
    void setQuantity(int itemQuantity){
      quantity = (itemQuantity > 0) ? itemQuantity : 0;
    }
    void setPrice(int itemPrice){
      priceUnit = (itemPrice > 0) ? itemPrice : 0;
    }
    //getters
    string getPartNumber() const{
      return partNumber;
    }
    string getPartDescription() const{
      return partDescription;
    }
    int getItemQuantity() const{
      return quantity;
    }
    int getItemPrice() const{
      return priceUnit;
    }
    //getInvoiceAmount
    int getInvoiceAmount() const{
      return (quantity*priceUnit);
    }
};
