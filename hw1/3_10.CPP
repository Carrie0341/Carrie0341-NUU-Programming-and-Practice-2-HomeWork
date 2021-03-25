/*
 * 3_10.cpp
 *
 *  Created on: 2021年3月24日
 *      Author: U0924015羅子程
 */

#include <iostream>
#include "Invoice.h"
using namespace std;
int main(int argc, char const *argv[]){
    //create Accounts
    Invoice invoice("0000123", "It is good to drink.", 100, 50);

    //print invoice
    cout << "----------old invoice----------" << endl
         << "Part number:      " << invoice.getPartNumber() << endl
         << "Part description: " << invoice.getPartDescription() << endl
         << "Quantity:         " << invoice.getQuantity() << endl
         << "Item price:       " << invoice.getItemPrice() << endl
         << "VAT rate:         " << invoice.getVatRate() << endl
         << "Discount rate:    " << invoice.getDiscountRat() << endl
         << "Invoice amount:   " << invoice.getInvoiceAmount() << endl;

    //set invoice
    invoice.setPartNumber("98765421");
    invoice.setPartDescription("not real good.");
    invoice.setQuantity(10);
    invoice.setItemPrice(42);
    invoice.setVAT(0.15);
    invoice.setDiscount(0.05);

    //print new invoice
    cout << "\n----------new invoice----------" << endl
         << "Part number:      " << invoice.getPartNumber() << endl
         << "Part description: " << invoice.getPartDescription() << endl
         << "Quantity:         " << invoice.getQuantity() << endl
         << "Item price:       " << invoice.getItemPrice() << endl
         << "VAT rate:         " << invoice.getVatRate() << endl
         << "Discount rate:    " << invoice.getDiscountRat() << endl
         << "Invoice amount:   " << invoice.getInvoiceAmount() << endl;
         
    return 0;
}
