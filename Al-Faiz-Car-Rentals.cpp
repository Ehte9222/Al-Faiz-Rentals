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

double discountForRoadTrip(double rentalCost, string role) {
    double discount = 0.0;
    if (role == "student" || role == "employee") {
        discount = 0.40;
    }
    double finalCost = rentalCost - (rentalCost * discount);
    return finalCost;
}

double discountForSports(double rentalCost, double sportsRental, string eventType) {
    double discount = 0.0;
    if (eventType == "off-city") {
        discount = 0.50;
    } else if (eventType == "on-city") {
        discount = 0.30;
    }
    double finalCost = sportsRental - (sportsRental * discount);
    return finalCost;
}

double discountForSocialRentals(double rentalCost, double socialRentals, string role, string eventType, string eventLocation) {
    double discount = 0.0;
    if (role == "student") {
        discount = 0.15;
    } else if (role == "faculty") {
        discount = 0.25;
    } else if (role == "employee") {
        discount = 0.20;
    }
    double finalCost = socialRentals - (socialRentals * discount);
    return finalCost;
}

int main() {
    cout << "Welcome to Al-Faiz Car Rentals" << endl;

    // Example usage
    calculateDiscount("parent", 100.0);
    calculateDiscount("spouse", 100.0);
    calculateDiscount("sibling", 100.0);
    calculateDiscount("friend", 100.0);

    double roadTripCost = discountForRoadTrip(200.0, "student");
    cout << "Final Road Trip Cost: $" << roadTripCost << endl;

    double sportsCost = discountForSports(150.0, 100.0, "off-city");
    cout << "Final Sports Rental Cost: $" << sportsCost << endl;

    double socialCost = discountForSocialRentals(300.0, 200.0, "faculty", "conference", "on-campus");
    cout << "Final Social Rental Cost: $" << socialCost << endl;

    string category, role, eventType, eventLocation;
    double rentalCost, socialRentals;

    cout << "Enter the rental category: ";
    cin >> category;

    if (category == "familysocial") {
        cout << "Enter the rental cost: $";
        cin >> rentalCost;
        cout << "Enter the social rentals cost: $";
        cin >> socialRentals;
        cout << "Enter your role (student/faculty/employee): ";
        cin >> role;
        cout << "Is this for community service or charity event? (yes/no): ";
        cin >> eventType;
        if (eventType == "yes") {
            cout << "Enter event location (off-city): ";
            cin >> eventLocation;
        }
        double finalCost = discountForSocialRentals(rentalCost, socialRentals, role, eventType, eventLocation);
        cout << "The total cost after discount is: $" << finalCost << endl;
    }

    return 0;
}

struct Rental {
    string category;
    string rentalType; 
    string university;
    int basePrice;
};

float calculateDiscount(Rental r) {
    float discount = 0.0;

    if (r.category == "Workshops" || r.category == "Conferences") {
        if (r.rentalType == "off-city") {
            discount = 20.0;
        } else if (r.rentalType == "on-city") {
            discount = 10.0;
        }
    } 
    else if (r.category == "Field Trips" && r.university != "Local") {
        discount = 30.0;
    }
    else if (r.category == "Programming Club") {
        discount = 30.0;
    } 
    else if (r.category == "Pharmacy Club" || r.category == "MS Club" || r.category == "Event Society") {
        discount = 20.0;
    }

    return discount;
}