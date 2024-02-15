// #include <iostream>
// using namespace std;
// int main() {
//     int rows;
//     cout << "Enter the number of rows: ";
//     cin >> rows;
//     for(int i = 1; i <= rows; ++i) {
//         for(int space = 1; space <=rows-i;++space) {
//             cout << " ";
//         }
//         for(int j = 1; j <= i - 1; ++j) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }




// piramid pattern


#include <stdio.h>

int main() {
    int rows, spaces, stars, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        // Print spaces
        for(spaces = 1; spaces <= rows - i; spaces++) {
            printf(" ");
        }

        // Print stars
        for(stars = 1; stars <= 2 * i - 1; stars++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
