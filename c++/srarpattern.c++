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


#include<stdio.h>

int main(){
    int rows,dist,i,j;
    printf("Enter the number of rows :");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(dist=1;dist<=rows-i;dist++){
            printf(" ");
        } for(j=1;j<=2*i-1;j++){
            printf("*  ");
        }
        printf("\n");
    }
    return 0;
}
