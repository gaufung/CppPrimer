#include <iostream>
#include <string>
class Sales_item{
public:
    std::istream& operator>>(std::istream& in, Sales_item& s){
    double price;
    in >> s.bookNo >> s.units_sold >> price;
    if (in)
        s.revenue = s.units_sold * price;
    else 
        s = Sales_item();  // input failed: reset object to default state
    return in;
    }
    std::ostream& operator<<(std::ostream& out, const Sales_item& s){
    out << s.isbn() << " " << s.units_sold << " "
        << s.revenue << " " << s.avg_price();
    return out;
    }
public:
    Sales_item(): units_sold(0), revenue(0.0) { }

    Sales_item(const std::string &book):
              bookNo(book), units_sold(0), revenue(0.0) { }
    Sales_item(std::istream &is) { is >> *this; }
public:
    /*
    Sales_item& operator+=(const Sales_item& s){        
        this.units_sold++;
        this.revenue+=s.revenue;
        retur this;
    } 
    Sales_item operator+(const Sales_item& lhs, const Sales_item& rhs){
        Sales_item ret(lhs);  // copy (|lhs|) into a local object that we'll return
        ret += rhs;           // add in the contents of (|rhs|) 
        return ret;           // return (|ret|) by value
    } 
    bool operator==(const Sales_item &lhs, const Sales_item &rhs){
    // must be made a friend of Sales_item
        return lhs.units_sold == rhs.units_sold &&
            lhs.revenue == rhs.revenue &&
            lhs.isbn() == rhs.isbn();
    } 
    bool operator!=(const Sales_item &lhs, const Sales_item &rhs){
        return !(lhs == rhs); // != defined in terms of operator==
    }
    */
    std::string isbn() const { return bookNo; }
    double avg_price() const{
        if (units_sold) 
        return revenue/units_sold; 
    else 
        return 0;
    }
private:
    std::string bookNo;      // implicitly initialized to the empty string
    unsigned units_sold = 0; // explicitly initialized
    double revenue = 0.0;    
};