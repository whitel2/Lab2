//Your header here
#include <iomanip>
#include <iostream>

using namespace std;

/* Write a recursive function ‘summable’ that takes an array of integers, a number of
 * terms to use, and a value to sum too. - summable([1,2,3,5], 3, 9) = true
 */
bool summable(const int[], const int&, const int&);

/* Armstrong numbers are equal to the sum of the individual digits raised to the power of the
 * length of the number i.e. a 3 digit each number is cubed, 6 digit number each is raised to the 6th
 * Your task is to write a function to perform this action iteratively and recursively
 * Do not modify main
 */

bool armstrongIter(const int&); // Iterative Armstrong
bool armstrongRecur(const int&); // Recursive Armstrong

int main() {

    /* This is the section for the summable recursive function. You will be asked for several components
     * 1. The number of values in the array
     * 2. The number of terms to use to form the total
     * 3. The sum that must be achieved
     * 4. All the values for the array
     * The array will be dynamically sized using pointers
     */
    int *arr;
    int num_terms;
    int total;

    cout << "How many terms in the list of numbers? ";
    cin >> num_terms;
    arr = new int[num_terms];
    for (int i = 0; i < num_terms; i++) {
        cout << "Enter number " << i+1 << " term : ";
        cin >> arr[i];
    }
    cout << "Enter total to find : ";
    cin >> total;
    cout << endl;

    cout << "The total " << total << " can" << (summable(arr, num_terms, total) ? " " : " not ") <<
            "be formed from the array ";
    for (int i = 0; i < num_terms; i++) {
        cout << "[" << arr[i] << "]"<< endl;
    }
    cout << endl;
    cout << endl;

    /* This is for the execution of the Armstrong numbers. You do not need to add or modify any code
    * as this is designed to run both the iterative and recursive methods. I have included a simple
    * timing system to allow you to see the difference in a "small" scale problem when performing
    * iteration and recursion.
    */

    constexpr int LIMIT = 10000; // Limit for Part 1 - Armstrong numbers
    long double time_taken; // For testing the time used with iterative vs recursive

    auto start = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    // Loop through 10k values to find the first 7 Armstrong numbers
    for (int i = 1; i <= LIMIT; i++) {
        if (armstrongIter(i)) {
           // cout << i << endl;
        }
    }
    auto stop = chrono::high_resolution_clock::now();

    time_taken = chrono::duration_cast<chrono::nanoseconds>(stop - start).count();

    time_taken *= 1e-9;

    cout << "Time taken by iteration is : " << fixed
         << time_taken << setprecision(9);
    cout << " sec" << endl;

    start = chrono::high_resolution_clock::now();
    for (int i = 1; i <= LIMIT; i++) {
        if (armstrongRecur(i)) {
         //cout << i << endl;
        }
    }
    stop = chrono::high_resolution_clock::now();

    time_taken = chrono::duration_cast<chrono::nanoseconds>(stop - start).count();

    time_taken *= 1e-9;

    cout << "Time taken by recursion is : " << fixed
         << time_taken << setprecision(9);
    cout << " sec" << endl;

    return 0;
}

/* Write your function definitions here */
bool summable(const int *arr, const int num_terms, const int total) {

}
bool armstrongIter(const int num_terms) {

}
bool armstrongRecur(const int num_terms) {

}
