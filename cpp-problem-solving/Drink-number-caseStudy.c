//Adrian wants to write a program to simulate a drink mixer at a party. 
//Based on the selected drink number 
//(1 for cola, 2 for orange juice, 3 for lemonade, and 4 for Pepsi), 
//help him calculate and print //the total volume of the drink mixed with ice cubes. 
//Use the switch and break statement to solve the problem.
//Total volume = volume of the drink + volume of an ic
#include <stdio.h>

int main() {
    int drinkNumber;
    scanf("%d", &drinkNumber);

    int drinkVolume, iceVolume, totalVolume;

    switch (drinkNumber) {
        case 1: 
            scanf("%d", &drinkVolume); 
            scanf("%d", &iceVolume);
            totalVolume = drinkVolume + iceVolume;
            printf("Total volume of Cola: %d ml", totalVolume);
            break;
        case 2:
            scanf("%d", &drinkVolume); 
            scanf("%d", &iceVolume);
            totalVolume = drinkVolume + iceVolume;
            printf("Total volume of Orange juice: %d ml", totalVolume);
            break;
        case 3: 
            scanf("%d", &drinkVolume); 
            scanf("%d", &iceVolume);
            totalVolume = drinkVolume + iceVolume;
            printf("Total volume of Lemonade: %d ml", totalVolume);
            break;
        case 4:
            scanf("%d", &drinkVolume); 
            scanf("%d", &iceVolume);
            totalVolume = drinkVolume + iceVolume;
            printf("Total volume of Pepsi: %d ml", totalVolume);
            break;
        default:
            printf("Invalid drink choice");
            return 0;
    }

    return 0;
}
