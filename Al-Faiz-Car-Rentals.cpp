#include <iostream>
using namespace std;

void calculateHealthAndWellnessDiscount(string relation, double rent) {
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

float calculateAcademicAndEducationalDiscount(string category, string rentalType, string university) {
    float discount = 0.0;

    if (category == "Workshops" || category == "Conferences") {
        if (rentalType == "off-city") {
            discount = 20.0;
        } else if (rentalType == "on-city") {
            discount = 10.0;
        }
    } else if (category == "Field Trips" && university != "Local") {
        discount = 30.0;
    } else if (category == "Programming Club") {
        discount = 30.0;
    } else if (category == "Pharmacy Club" || category == "MS Club" || category == "Event Society") {
        discount = 20.0;
    }

    return discount;
}

double calculateRecreationalAndAdventureDiscount(double rentalCost, string role) {
    double discount = 0.0;
    if (role == "student" || role == "employee") {
        discount = 0.40;
    }
    double finalCost = rentalCost - (rentalCost * discount);
    return finalCost;
}

double calculateSportsDiscount(double rentalCost, double sportsRental, string eventType) {
    double discount = 0.0;
    if (eventType == "off-city") {
        discount = 0.50;
    } else if (eventType == "on-city") {
        discount = 0.30;
    }
    double finalCost = sportsRental - (sportsRental * discount);
    return finalCost;
}

double calculateFamilyAndSocialDiscount(double rentalCost, double socialRentals, string role, string eventType, string eventLocation) {
    double discount = 0.0;
    if (role == "student") {
        discount = 0.15;
    } else if (role == "faculty") {
        discount = 0.25;
    } else if (role == "employee") {
        discount = 0.20;
    }
    if (eventType == "community service" && eventLocation == "off-city") {
        discount = 0.30;
    } else if (eventType == "charity" && eventLocation == "off-city") {
        discount = 0.35;
    }
    double finalCost = socialRentals - (socialRentals * discount);
    return finalCost;
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

int main() {
    cout << "Welcome to Al-Faiz Car Rentals" << endl;

    int choice;
    cout << "Select the type of rental:" << endl;
    cout << "1. Health and Wellness Rentals" << endl;
    cout << "2. Academic and Educational Rentals" << endl;
    cout << "3. Recreational and Adventure Rentals" << endl;
    cout << "4. Sports Rentals" << endl;
    cout << "5. Family and Social Rentals" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            string relation;
            double rent;
            cout << "Enter the relation (parent/spouse/child/sibling): ";
            cin >> relation;
            cout << "Enter the rent amount: $";
            cin >> rent;
            calculateHealthAndWellnessDiscount(relation, rent);
            break;
        }
        case 2: {
            string category, rentalType, university;
            cout << "Enter the category (Workshops/Conferences/Field Trips/Programming Club/Pharmacy Club/MS Club/Event Society): ";
            cin >> category;
            cout << "Enter the rental type (off-city/on-city): ";
            cin >> rentalType;
            cout << "Enter the university: ";
            cin >> university;
            Rental r = {category, rentalType, university, 0};
            float discount = calculateDiscount(r);
            cout << "Discount: " << discount << "%" << endl;
            break;
        }
        case 3: {
            double rentalCost;
            string role;
            cout << "Enter the rental cost: $";
            cin >> rentalCost;
            cout << "Enter your role (student/employee): ";
            cin >> role;
            double finalCost = calculateRecreationalAndAdventureDiscount(rentalCost, role);
            cout << "Final Recreational and Adventure Rental Cost: $" << finalCost << endl;
            break;
        }
        case 4: {
            double rentalCost, sportsRental;
            string eventType;
            cout << "Enter the rental cost: $";
            cin >> rentalCost;
            cout << "Enter the sports rental cost: $";
            cin >> sportsRental;
            cout << "Enter the event type (off-city/on-city): ";
            cin >> eventType;
            double finalCost = calculateSportsDiscount(rentalCost, sportsRental, eventType);
            cout << "Final Sports Rental Cost: $" << finalCost << endl;
            break;
        }
        case 5: {
            double rentalCost, socialRentals;
            string role, eventType, eventLocation;
            cout << "Enter the rental cost: $";
            cin >> rentalCost;
            cout << "Enter the social rentals cost: $";
            cin >> socialRentals;
            cout << "Enter your role (student/faculty/employee): ";
            cin >> role;
            cout << "Enter the event type (community service/charity): ";
            cin >> eventType;
            cout << "Enter the event location (off-city): ";
            cin >> eventLocation;
            double finalCost = calculateFamilyAndSocialDiscount(rentalCost, socialRentals, role, eventType, eventLocation);
            cout << "The total cost after discount is: $" << finalCost << endl;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}