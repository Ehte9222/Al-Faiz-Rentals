# Al-Faiz Car Rentals

## Overview

Al-Faiz Car Rentals is a program designed to provide various discounts on car rentals based on different categories such as Health and Wellness, Academic and Educational, Recreational and Adventure, Sports, and Family and Social rentals. The program calculates the final rental cost after applying the appropriate discounts.

## Features

- **Health and Wellness Rentals**: Discounts for parents, spouses, children, and siblings of students and employees.
- **Academic and Educational Rentals**: Discounts for workshops, conferences, field trips, and university club events.
- **Recreational and Adventure Rentals**: Discounts for road trips and adventure activities for students and employees.
- **Sports Rentals**: Discounts for sports competitions and events.
- **Family and Social Rentals**: Discounts for personal events, community service, and charity events.

## Usage

To use the program, follow these steps:

1. **Compile the Program**:
   ```sh
   g++ Al-Faiz-Car-Rentals.cpp -o Al-Faiz-Car-Rentals
   ```
2. **Run the Program:**
   ```sh
   ./Al-Faiz-Car-Rentals
   ```
3. **Select the Type of Rental:** The program will prompt you to select the type of rental. Enter the corresponding number for the type of rental you want to calculate the discount for:
   ```
   Select the type of rental:
   1. Health and Wellness Rentals
   2. Academic and Educational Rentals
   3. Recreational and Adventure Rentals
   4. Sports Rentals
   5. Family and Social Rentals
   Enter your choice:
   ```
4. **Enter the Required Information:** Based on your selection, the program will ask for additional information such as relation, rental cost, role, event type, etc. Enter the required information as prompted.

5. **View the Final Cost:** The program will calculate the discount and display the final rental cost after applying the discount.

### Example
Here is an example of how to use the program:

1. Run the program:
   ```sh
   ./Al-Faiz-Car-Rentals
   ```
2. Select the type of rental:
   ```
   Select the type of rental:
   1. Health and Wellness Rentals
   2. Academic and Educational Rentals
   3. Recreational and Adventure Rentals
   4. Sports Rentals
   5. Family and Social Rentals
   Enter your choice: 1
   ```
3. Enter the required information:
   ```
   Enter the relation (parent/spouse/child/sibling): parent
   Enter the rent amount: $100
   ```
4. View the final cost:
   ```
   Original Rent: $100
   Discount: $75
   Covered by RIPHAH: $37.5
   Final Rent to be paid: $25
   ```

## Functions
The program includes the following functions:

- `void calculateHealthAndWellnessDiscount(string relation, double rent)`: Calculates the discount for health and wellness rentals based on the relation.
- `float calculateAcademicAndEducationalDiscount(string category, string rentalType, string university)`: Calculates the discount for academic and educational rentals based on the category, rental type, and university.
- `double calculateRecreationalAndAdventureDiscount(double rentalCost, string role)`: Calculates the discount for recreational and adventure rentals based on the role.
- `double calculateSportsDiscount(double rentalCost, double sportsRental, string eventType)`: Calculates the discount for sports rentals based on the event type.
- `double calculateFamilyAndSocialDiscount(double rentalCost, double socialRentals, string role, string eventType, string eventLocation)`: Calculates the discount for family and social rentals based on the role, event type, and event location.

## License
This project is licensed under the MIT License - see the LICENSE file for details.