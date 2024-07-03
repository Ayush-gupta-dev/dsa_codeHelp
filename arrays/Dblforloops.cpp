// // i=0,n j=0,n all elem
// // i=0,n j=0,i => lower triangle
// // i=0,n j=i,n  => upper triangle
// // i=0,n j=n-1,0 j-- => 
// // i=0,n j=n-1,,i j-- =>

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << "(" << i << "," << j << ") ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// (0,0) (0,1) (0,2) (0,3) 
// (1,0) (1,1) (1,2) (1,3) 
// (2,0) (2,1) (2,2) (2,3) 
// (3,0) (3,1) (3,2) (3,3) 

// ===

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j <= i; j++) {
//             cout << "(" << i << "," << j << ") ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// (0,0) 
// (1,0) (1,1) 
// (2,0) (2,1) (2,2) 
// (3,0) (3,1) (3,2) (3,3) 
// ===


// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;
//     for (int i = 0; i < n; i++) {
//         for (int j = i; j < n; j++) {
//             cout << "(" << i << "," << j << ") ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// (0,0) (0,1) (0,2) (0,3) 
// (1,1) (1,2) (1,3) 
// (2,2) (2,3) 
// (3,3) 
// ===
// Reverse order (i=0,n j=n-1,0 j--):
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;
//     for (int i = 0; i < n; i++) {
//         for (int j = n-1; j >= 0; j--) {
//             cout << "(" << i << "," << j << ") ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// (0,3) (0,2) (0,1) (0,0) 
// (1,3) (1,2) (1,1) (1,0) 
// (2,3) (2,2) (2,1) (2,0) 
// (3,3) (3,2) (3,1) (3,0) 
// ===
// Reverse lower triangle (i=0,n j=n-1,i j--):
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;
//     for (int i = 0; i < n; i++) {
//         for (int j = n-1; j >= i; j--) {
//             cout << "(" << i << "," << j << ") ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// (0,3) (0,2) (0,1) (0,0) 
// (1,3) (1,2) (1,1) 
// (2,3) (2,2) 
// (3,3) 

// ==