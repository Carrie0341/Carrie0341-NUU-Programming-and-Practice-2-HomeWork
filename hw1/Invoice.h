#include <string>
class Invoice
{
public:
    Invoice(std::string _partNumber, std::string _partDescription, int _quantity, int _itemPrice) : vatRate{0.2}, discountRate{0.0}
    {
        partNumber = _partNumber;
        partDescription = _partDescription;
        quantity = _quantity;
        itemPrice = _itemPrice;
    }

    void setPartNumber(std::string _partNumber){
        partNumber = _partNumber;
    }

    void setPartDescription(std::string _partDescription){
        partDescription = _partDescription;
    }

    void setQuantity(int _quantity){
        quantity = _quantity < 0 ? 0 : _quantity;
    }

    void setItemPrice(int _itemPrice){
        itemPrice = _itemPrice < 0 ? 0 : _itemPrice;
    }

    void setVAT(double _vatRate){
        vatRate = _vatRate < 0 ? 0 : _vatRate;
    }

    void setDiscount(double _discountRate){
        discountRate = _discountRate < 0 ? 0 : _discountRate;
    }

    std::string getPartNumber() const
    {
        return partNumber;
    }

    std::string getPartDescription() const
    {
        return partDescription;
    }

    int getQuantity() const
    {
        return quantity;
    }

    int getItemPrice() const
    {
        return itemPrice;
    }

    double getVatRate() const
    {
        return vatRate;
    }

    double getDiscountRat() const
    {
        return discountRate;
    }

    double getInvoiceAmount() const
    {
        return quantity * itemPrice * (1.0 - vatRate - discountRate);
    }

private:
    std::string partNumber;
    std::string partDescription;
    int quantity;
    int itemPrice;
    double vatRate;
    double discountRate;
};