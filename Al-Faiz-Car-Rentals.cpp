#include <iostream>
using namespace std;

void calculateDiscount(string relation, double rent) {
    double discount = 0.0;
    double coveredByRiphah = 0.0;

    if (relation == "parent") {
        discount = rent * 0.75;
        coveredByRiphah = discount * 0.50;
    } else if (relation == "spouse" || relation == "child") {
        discount = rent * 0.30;
        coveredByRiphah = discount * 0.15;
    } else if (relation == "sibling") {
        discount = rent * 0.10;
        coveredByRiphah = 0.0;
    } else {
        cout << "No discount available for this relation." << endl;
        return;
    }

    double finalRent = rent - discount;
    cout << "Original Rent: $" << rent << endl;
    cout << "Discount: $" << discount << endl;
    cout << "Covered by RIPHAH: $" << coveredByRiphah << endl;
    cout << "Final Rent to be paid: $" << finalRent << endl;
}

int main() {
    cout << "Welcome to Al-Faiz Car Rentals" << endl;

    // Example usage
    calculateDiscount("parent", 100.0);
    calculateDiscount("spouse", 100.0);
    calculateDiscount("sibling", 100.0);
    calculateDiscount("friend", 100.0);

    return 0;
}

double Dscunt_for_roadtrip(double rentalCost, string role) {
    double discount = 0.0;
    if (role == "student" || role == "employee") {
        discount = 0.40;
    }
    double finalCost = rentalCost - (rentalCost * discount);
    return finalCost;
}

double Dscunt_for_sports(double rentalCost, double sports_rental, string eventType) {
    double discount = 0.0;
    if (eventType == "off-city") {
        discount = 0.50;
    } else if (eventType == "on-city") {
        discount = 0.30;
    }
    double finalCost = sports_rental - (sports_rental * discount);
    return finalCost;
}

double Dscunt_for_socialRentals(double rentalCost, double SocialRentals, string role, string eventType, string eventLocation) {
    double discount = 0.0;
    if (role == "student") {
        discount = 0.15;
    } else if (role == "faculty") {
        discount = 0.25;
    } else if (role == "employee") {
        discount = 0.20;
    }
    if (eventType == "yes") {
        if (eventLocation == "off-city") {
            discount = 0.30;
        }
        if (eventType == "yes") {
            discount = 0.35;
        }
    }
    double finalCost = SocialRentals - (SocialRentals * discount);
    return finalCost;
}

