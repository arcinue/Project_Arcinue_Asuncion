#include <iostream>
#include <cstdlib>
#include "math.h"
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <string.h>
#include <iomanip>
#include <set>
#ifndef PROJECT_H
#define PROJECT_H



using namespace std;

class Project
{
    public:
        Project();
        virtual ~Project();
        void multiples_of_3_and_5();
        void even_fibonacce();
        void largest_prime_factor();
        void largest_palindrome_product();
        void smallest_multiple();
        void sum_square_diff();
        void _10001st_prime();
        void largest_product_in_series();
        void special_pytho_triplet();
        void summation_of_primes();
        void largest_product_grid();
        void divisible_triangular_number();
        void largest_sum();
            int charToInt(char line);
        void longest_collatz_sequence();
        void diophantine_reciprocals_a();
        void seive(int n);
        void power_digit_sum();
        void number_letter_counts();
        void max_path_sum_one();
        void counting_sundays();
        void factorial_digit_sum();
            int sumDigits(string s);

    protected:
    private:
};

#endif // PROJECT_H
