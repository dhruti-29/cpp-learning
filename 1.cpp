#include <iostream>
#include <vector>
#include <string>
using namespace std;

// OrderBookEntry class
class OrderBookEntry {
public:
    string timestamp;
    string product;
    string orderType; // bid / ask
    double price;
    double amount;

    // Constructor
    OrderBookEntry(string _timestamp, string _product, string _orderType, double _price, double _amount)
        : timestamp(_timestamp), product(_product), orderType(_orderType), price(_price), amount(_amount) {}
};

// ----------- STAT FUNCTIONS ------------

// Average Price
double computeAveragePrice(vector<OrderBookEntry>& entries) {
    double sum = 0;
    for (OrderBookEntry& e : entries) {
        sum += e.price;
    }
    return sum / entries.size();
}

// Lowest Price
double computeLowPrice(vector<OrderBookEntry>& entries) {
    double minPrice = entries[0].price;
    for (OrderBookEntry& e : entries) {
        if (e.price < minPrice) {
            minPrice = e.price;
        }
    }
    return minPrice;
}

// Highest Price
double computeHighPrice(vector<OrderBookEntry>& entries) {
    double maxPrice = entries[0].price;
    for (OrderBookEntry& e : entries) {
        if (e.price > maxPrice) {
            maxPrice = e.price;
        }
    }
    return maxPrice;
}

// Price Spread
double computePriceSpread(vector<OrderBookEntry>& entries) {
    return computeHighPrice(entries) - computeLowPrice(entries);
}

// ---------------- MAIN -----------------

int main() {

    // Create vector
    vector<OrderBookEntry> entries;

    // Add sample data (like CSV row)
    entries.push_back(OrderBookEntry("2020/03/17 17:01:24", "ETH/BTC", "bid", 0.02186, 0.1));
    entries.push_back(OrderBookEntry("2020/03/17 17:02:24", "ETH/BTC", "ask", 0.02200, 0.2));
    entries.push_back(OrderBookEntry("2020/03/17 17:03:24", "ETH/BTC", "bid", 0.02150, 0.15));

    // Print data
    cout << "Order Book Entries:\n";
    for (OrderBookEntry& e : entries) {
        cout << e.timestamp << " | "
             << e.product << " | "
             << e.orderType << " | "
             << e.price << " | "
             << e.amount << endl;
    }

    // Compute stats
    cout << "\nStatistics:\n";
    cout << "Average Price: " << computeAveragePrice(entries) << endl;
    cout << "Lowest Price: " << computeLowPrice(entries) << endl;
    cout << "Highest Price: " << computeHighPrice(entries) << endl;
    cout << "Price Spread: " << computePriceSpread(entries) << endl;

    return 0;
}