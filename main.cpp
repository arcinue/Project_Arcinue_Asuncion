#include <iostream>
#include <cstdlib>
#include "Project.h"

using namespace std;
const string problem[]={"Multiples of 3 and 5",
"Even Fibonacci Numbers","Largest prime factor","Largest palindrome product","Smallest multiple","Sum square difference",
"10001st prime","Largest product in a series","Special Pythagorean triplet"," Summation of primes","Largest product in a grid"
,"Highly divisible triangular number","Large sum","Longest Collatz sequence","Diophantine reciprocals A","Power digit sum"
,"Number letter counts","Maximum path sum I","Counting Sundays","Factorial digit sum","Name Scores","1000-digit Fibonacci number","Truncatable primes","Exit"};
const int Num_Problems=23;
const int Exit=Num_Problems+1;

int main()
{
    bool done=false;
    int i=0, ch=0;
    Project proj;

    while (done ==false ){
        system("cls");
        for(i=0; i<(Num_Problems+1); i++){
            cout << (i+1) << " " << problem[i] << endl;
        }
        cout << "Choose Problem: ";
        cin >> ch;
        switch(ch){
            case 1:
                proj.multiples_of_3_and_5();
                break;
            case 2:
                proj.even_fibonacce();
                break;
            case 3:
                proj.largest_prime_factor();
                break;
            case 4:
                proj.largest_palindrome_product();
                break;
            case 5:
                proj.smallest_multiple();
                break;
            case 6:
                proj.sum_square_diff();
                break;
            case 7:
                proj._10001st_prime();
                break;
            case 8:
                proj.largest_product_in_series();
                break;
            case 9:
                proj.special_pytho_triplet();
                break;
            case 10:
                proj.summation_of_primes();
                break;
            case 11:
                proj.largest_product_grid();
                break;
            case 12:
                proj.divisible_triangular_number();
                break;
            case 13:
                proj.largest_sum();
                break;
            case 14:
                proj.longest_collatz_sequence();
                break;
            case 15:
                proj.diophantine_reciprocals_a();
                break;
            case 16:
                proj.power_digit_sum();
                break;
            case 17:
                proj.number_letter_counts();
                break;
            case 18:
                proj.max_path_sum_one();
                break;
            case 19:
                proj.counting_sundays();
                break;
            case 20:
                proj.factorial_digit_sum();
                break;
            case 21:
                proj.name_scores();
                break;
            case 22:
                proj.first_1000_digit_fibonacci();
                break;
            case 23:
                proj.truncable_primes();
                break;
            case Exit:
                done=true;
                break;

        }
        system("PAUSE");

    }

    return 0;
}
