#include "Project.h"
int day,month,year;
#define MAX	200000
#define LL	long long
#define LIMIT	1000
bool composite[MAX + 1];
vector<int> primes;
Project::Project()
{
    //ctor
}

Project::~Project()
{
    //dtor
}

void Project::multiples_of_3_and_5(){
    int numbers[1000];
    int store=0;

    for(int i=0; i<999; i++){
        numbers[i] = i+1;
    }

    for(int a=0; a<999; a++){
        if (numbers[a]%3==0 || numbers[a]%5==0){
            store = store+numbers[a];
    }
}
cout <<"The sum of all multiples of 3 and 5 below 1000 is: " <<store<<endl;
}
void Project::even_fibonacce()
{
    int firstNum=1,secondNum=2,nextNum=0,holder=0;
    while (nextNum<4000000)
    {
        nextNum=firstNum+secondNum;
        firstNum=secondNum;
        secondNum=nextNum;
        if(nextNum%2==0)
        holder+=nextNum;
    }
    cout <<"The sum of the even-valued terms is: "<<holder+2<<endl;
}
void Project::largest_prime_factor()
{
    long long num=600851475143LL;
    int largestPrime=0;
    for(int i = 3; ; i += 2)
        if(!(num % i)){
            do { num /= i; } while (!(num % i));
            if(num == 1){
                largestPrime = i;
                break;
            }
        }
    cout <<"The largest prime factor is: "<<largestPrime<< endl;

}
int opposite(int x)
{
    int y = x, z = 0;
    while(y)
        {
            z = z * 10 + (y % 10);
            y /= 10;
        }
    return z;
}

void Project::largest_palindrome_product()
{
    int largestPalindromeProduct= 0;
    for(int i = 999; i > 1; --i)
        for(int j = i; j > 1; --j)
            {
                int x = i * j, z = opposite(x);
                if(x == z && x > largestPalindromeProduct)
                largestPalindromeProduct= x;
            }
cout <<"The largest palindrome product is: " <<largestPalindromeProduct << endl;
}
void Project::smallest_multiple()
{
    int i=0,smallestMultiple=0;
        for(i=0;i<300000000;i++)
        {
            if(i%1==0&&i%2==0&&i%3==0&&i%4==0&&i%5==0&&i%6==0&&i%7==0&&i%8==0&&i%9==0&&i%10==0&&i%11==0&&i%12==0&&i%13==0&&i%14==0&&i%15==0&&i%16==0&&i%17==0&&i%18==0&&i%19==0&&i%20==0)
                        smallestMultiple=i;
        }
    cout <<"The smallest positive number is: "<<smallestMultiple<<endl;
}
void Project::sum_square_diff()
{
    int sumOfSquares=0,squareOfSum=0,diff=0;
    int arr[100];
    int holder=0;
    for(int i=0; i<100; i++)
        {
            arr[i]=i+1;
        }
    for(int j=0; j<100; j++)
        {
            sumOfSquares = pow(arr[j+1],2) + sumOfSquares;
        }
    for(int a=0; a<=100; a++)
        {
            holder=arr[a]+holder;
        }
    squareOfSum=pow(holder,2);
    diff=squareOfSum-sumOfSquares;
    cout<<"The difference is: " << diff<< endl;
}
bool isPrime(int p)
{
        bool result = true;
        for(int i=2; i<p; i++)
        {
                if(p % i == 0)
                    {
                        result = false;
                        break;
                    }
        }
        return result;
}
void Project::_10001st_prime()
{
    int ten001= 2;
    int limit= 10001;

        for(int i=0; i != limit; ten001++)
            {
                if(isPrime(ten001) == true)
                    {
                        i += 1;
                    }
                if(i == limit)
                    break;
        }
    cout <<ten001<< endl;

}
void Project::largest_product_in_series()
{
    int holder=0;
    int arr[1000]= {7,3,1,6,7,1,7,6,5,3,1,3,3,0,6,2,4,9,1,9,2,2,5,1,1,9,6,7,4,4,2,6,5,7,4,7,4,2,3,5,5,3,4,9,1,9,4,9,3,4,
                    9,6,9,8,3,5,2,0,3,1,2,7,7,4,5,0,6,3,2,6,2,3,9,5,7,8,3,1,8,0,1,6,9,8,4,8,0,1,8,6,9,4,7,8,8,5,1,8,4,3,
                    8,5,8,6,1,5,6,0,7,8,9,1,1,2,9,4,9,4,9,5,4,5,9,5,0,1,7,3,7,9,5,8,3,3,1,9,5,2,8,5,3,2,0,8,8,0,5,5,1,1,
                    1,2,5,4,0,6,9,8,7,4,7,1,5,8,5,2,3,8,6,3,0,5,0,7,1,5,6,9,3,2,9,0,9,6,3,2,9,5,2,2,7,4,4,3,0,4,3,5,5,7,
                    6,6,8,9,6,6,4,8,9,5,0,4,4,5,2,4,4,5,2,3,1,6,1,7,3,1,8,5,6,4,0,3,0,9,8,7,1,1,1,2,1,7,2,2,3,8,3,1,1,3,
                    6,2,2,2,9,8,9,3,4,2,3,3,8,0,3,0,8,1,3,5,3,3,6,2,7,6,6,1,4,2,8,2,8,0,6,4,4,4,4,8,6,6,4,5,2,3,8,7,4,9,
                    3,0,3,5,8,9,0,7,2,9,6,2,9,0,4,9,1,5,6,0,4,4,0,7,7,2,3,9,0,7,1,3,8,1,0,5,1,5,8,5,9,3,0,7,9,6,0,8,6,6,
                    7,0,1,7,2,4,2,7,1,2,1,8,8,3,9,9,8,7,9,7,9,0,8,7,9,2,2,7,4,9,2,1,9,0,1,6,9,9,7,2,0,8,8,8,0,9,3,7,7,6,
                    6,5,7,2,7,3,3,3,0,0,1,0,5,3,3,6,7,8,8,1,2,2,0,2,3,5,4,2,1,8,0,9,7,5,1,2,5,4,5,4,0,5,9,4,7,5,2,2,4,3,
                    5,2,5,8,4,9,0,7,7,1,1,6,7,0,5,5,6,0,1,3,6,0,4,8,3,9,5,8,6,4,4,6,7,0,6,3,2,4,4,1,5,7,2,2,1,5,5,3,9,7,
                    5,3,6,9,7,8,1,7,9,7,7,8,4,6,1,7,4,0,6,4,9,5,5,1,4,9,2,9,0,8,6,2,5,6,9,3,2,1,9,7,8,4,6,8,6,2,2,4,8,2,
                    8,3,9,7,2,2,4,1,3,7,5,6,5,7,0,5,6,0,5,7,4,9,0,2,6,1,4,0,7,9,7,2,9,6,8,6,5,2,4,1,4,5,3,5,1,0,0,4,7,4,
                    8,2,1,6,6,3,7,0,4,8,4,4,0,3,1,9,9,8,9,0,0,0,8,8,9,5,2,4,3,4,5,0,6,5,8,5,4,1,2,2,7,5,8,8,6,6,6,8,8,1,
                    1,6,4,2,7,1,7,1,4,7,9,9,2,4,4,4,2,9,2,8,2,3,0,8,6,3,4,6,5,6,7,4,8,1,3,9,1,9,1,2,3,1,6,2,8,2,4,5,8,6,
                    1,7,8,6,6,4,5,8,3,5,9,1,2,4,5,6,6,5,2,9,4,7,6,5,4,5,6,8,2,8,4,8,9,1,2,8,8,3,1,4,2,6,0,7,6,9,0,0,4,2,
                    2,4,2,1,9,0,2,2,6,7,1,0,5,5,6,2,6,3,2,1,1,1,1,1,0,9,3,7,0,5,4,4,2,1,7,5,0,6,9,4,1,6,5,8,9,6,0,4,0,8,
                    0,7,1,9,8,4,0,3,8,5,0,9,6,2,4,5,5,4,4,4,3,6,2,9,8,1,2,3,0,9,8,7,8,7,9,9,2,7,2,4,4,2,8,4,9,0,9,1,8,8,
                    8,4,5,8,0,1,5,6,1,6,6,0,9,7,9,1,9,1,3,3,8,7,5,4,9,9,2,0,0,5,2,4,0,6,3,6,8,9,9,1,2,5,6,0,7,1,7,6,0,6,
                    0,5,8,8,6,1,1,6,4,6,7,1,0,9,4,0,5,0,7,7,5,4,1,0,0,2,2,5,6,9,8,3,1,5,5,2,0,0,0,5,5,9,3,5,7,2,9,7,2,5,
                    7,1,6,3,6,2,6,9,5,6,1,8,8,2,6,7,0,4,2,8,2,5,2,4,8,3,6,0,0,8,2,3,2,5,7,5,3,0,4,2,0,7,5,2,9,6,3,4,5,0};

    for(int i=0; i<1000; i++)
        {
            if(arr[i]*arr[i+1]*arr[i+2]*arr[i+3]*arr[i+4]>holder)
                holder=arr[i]*arr[i+1]*arr[i+2]*arr[i+3]*arr[i+4];
        }
    cout<<"The greatest product of five consecutive digits is: "<<holder<<endl;
}
void Project::special_pytho_triplet()
{
    int product=0;
    for (int a=0;a<1000;a++)
    {
        for (int b=a;b<1000;b++)
            {
                int c=1000-a-b;
                if (a*a+b*b==c*c)
                    product=a*b*c;
            }
    }
    cout<<"The product of abc is: "<<product<<endl;
}

long long is_prime(long long n)
{
	if (n % 2 == 0)
		return 0;
	for (long long i = 3; i <= (pow(n,0.5)); i += 2)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
void Project::summation_of_primes()
{
    unsigned long long sumOfPrimes = 0;

	for (int i=3;i<2000000;i+= 2)
        {
            if (is_prime(i))
                sumOfPrimes += i;
        }

	cout << "The sum of all the primes is: "<<sumOfPrimes+2<< endl;
}
void Project::largest_product_grid()
{
    int arr[20][20] = {
    {8, 2, 22, 97, 38, 15, 0, 40, 0, 75, 4, 5, 7, 78, 52, 12, 50, 77, 91, 8},
    {49, 49, 99, 40, 17, 81, 18, 57, 60, 87, 17, 40, 98, 43, 69, 48, 4, 56, 62, 0},
    {81, 49, 31, 73, 55, 79, 14, 29, 93, 71, 40, 67, 53, 88, 30, 3, 49, 13, 36, 65},
    {52, 70, 95, 23, 4, 60, 11, 42, 69, 24, 68, 56, 1, 32, 56, 71, 37, 2, 36, 91},
    {22, 31, 16, 71, 51, 67, 63, 89, 41, 92, 36, 54, 22, 40, 40, 28, 66, 33, 13, 80},
    {24, 47, 32, 60, 99, 3, 45, 2, 44, 75, 33, 53, 78, 36, 84, 20, 35, 17, 12, 50},
    {32, 98, 81, 28, 64, 23, 67, 10, 26, 38, 40, 67, 59, 54, 70, 66, 18, 38, 64, 70},
    {67, 26, 20, 68, 2, 62, 12, 20, 95, 63, 94, 39, 63, 8, 40, 91, 66, 49, 94, 21},
    {24, 55, 58, 5, 66, 73, 99, 26, 97, 17, 78, 78, 96, 83, 14, 88, 34, 89, 63, 72},
    {21, 36, 23, 9, 75, 0, 76, 44, 20, 45, 35, 14, 0, 61, 33, 97, 34, 31, 33, 95},
    {78, 17, 53, 28, 22, 75, 31, 67, 15, 94, 3, 80, 4, 62, 16, 14, 9, 53, 56, 92},
    {16, 39, 5, 42, 96, 35, 31, 47, 55, 58, 88, 24, 0, 17, 54, 24, 36, 29, 85, 57},
    {86, 56, 0, 48, 35, 71, 89, 7, 5, 44, 44, 37, 44, 60, 21, 58, 51, 54, 17, 58},
    {19, 80, 81, 68, 5, 94, 47, 69, 28, 73, 92, 13, 86, 52, 17, 77, 4, 89, 55, 40},
    {4, 52, 8, 83, 97, 35, 99, 16, 7, 97, 57, 32, 16, 26, 26, 79, 33, 27, 98, 66},
    {88, 36, 68, 87, 57, 62, 20, 72, 3, 46, 33, 67, 46, 55, 12, 32, 63, 93, 53, 69},
    {4, 42, 16, 73, 38, 25, 39, 11, 24, 94, 72, 18, 8, 46, 29, 32, 40, 62, 76, 36},
    {20, 69, 36, 41, 72, 30, 23, 88, 34, 62, 99, 69, 82, 67, 59, 85, 74, 4, 36, 16},
    {20, 73, 35, 29, 78, 31, 90, 1, 74, 31, 49, 71, 48, 86, 81, 16, 23, 57, 5, 54},
    {1, 70, 54, 71, 83, 51, 54, 69, 16, 92, 33, 48, 61, 43, 52, 1, 89, 19, 67, 48}
};
    long largestProduct = 0;
    for(int i=0; i<20;i++)
        {
            for(int j=0;j<20;j++)
            {
                long prod = 0;
                if(j+3 < 20)//checking for horizontal
                    {
                        prod = arr[i][j]*arr[i][j+1]*arr[i][j+2]*arr[i][j+3];
                        if (prod>largestProduct)
                            largestProduct = prod;
                    }

                if(i+3 < 20)//checking for vertical
                    {
                        prod = arr[i][j]*arr[i+1][j]*arr[i+2][j]*arr[i+3][j];
                        if (prod>largestProduct)
                            largestProduct = prod;
                    }

                if(i+3 < 20 && j+3 < 20)//checking for diagonal
                    {
                        prod = arr[i][j]*arr[i+1][j+1]*arr[i+2][j+2]*arr[i+3][j+3];
                        if (prod>largestProduct)
                            largestProduct = prod;
                    }

                if(j > 2 && i+3 < 20)//checking for diagonal
                    {
                        prod = arr[i][j]*arr[i+1][j-1]*arr[i+2][j-2]*arr[i+3][j-3];
                        if (prod>largestProduct)
                            largestProduct = prod;
                    }
            }
    }
    cout <<largestProduct<< endl;

}
int numdiv(long num)
{
    int divs = 0;
    long root = floor(sqrt(num));
    for(long i = root; i > 0; i--) {
        if(num % i == 0)
            divs += 2;
    }
    return divs;
}

void Project::divisible_triangular_number()
{
    int most = 0;
    int divs = 0;
    long num = 0;
    long tri = 1;
    long i = 1;
    while(most <= 500)
    {
        divs = numdiv(tri);
        if(divs > most)
            {
                most=divs;
                num=tri;
            }
        i++;
        tri+=i;
    }
    cout <<num<< endl;
}

void Project::largest_sum()
{
int numbers[100][50];
    string line;
    int sum=0;
    int carry=0,remainder=0;
    vector<int>largenumber;

    ifstream myfile;
    myfile.open("5odigitsnumbers.txt");
    int j=0;
    while(myfile.good())
    {
        getline(myfile,line);
        for(int i=0;i<50;i++)
            numbers[j][i]=charToInt(line[i]);
        j++;
    }
    myfile.close();

    int a=49;
    while(a>=0){
    sum=0;
    for(int b=0; b<100; b++){
        sum =sum + numbers[b][a];}
        sum=sum+carry;
        carry=sum/10;
        remainder=sum-carry*10;
        largenumber.insert(largenumber.begin(),remainder);
        a--;
        }
    largenumber.insert(largenumber.begin(),carry);

    for(int i=0;i<9;i++)
        cout<<largenumber[i];
    cout<<"\n";

}

int Project::charToInt(char line){
    if(line == '0')
        return 0;
    if (line == '1')
        return 1;
    if (line == '2')
        return 2;
    if (line == '3')
        return 3;
    if (line == '4')
        return 4;
    if (line == '5')
        return 5;
    if (line == '6')
        return 6;
    if (line == '7')
        return 7;
    if (line == '8')
        return 8;
    if (line == '9')
        return 9;

    return 0;
}
int chain(long long n)
{
    int terms = 1;
    while(n > 1) {
        if(n % 2 == 0)
            n = n / 2;
        else
            n = 3 * n + 1;
        terms++;
    }
    return terms;
}
void Project::longest_collatz_sequence()
{
    int longest = 0;
    int len = 0;
    long long start = 0;
    for(long long i = 0; i < 1000000; i++) {
        len = chain(i);
        if(len > longest) {
            start = i;
            longest = len;
        }
    }
    cout << start << endl;
}
void Project::diophantine_reciprocals_a()
{
    seive(MAX);
	for (int N = 1000; N < MAX; N++)
	{
		if (!composite[N])
			continue;
		// Compute number of divsiors of N squared
		int numdiv = 1, cn = N;
		for (unsigned i = 0; 1 != cn && i < primes.size(); i++)
		{
			int	count = 0;
			while (cn % primes[i] == 0)
			{
				cn /= primes[i];
				count++;
			}
			numdiv *= (count * 2 + 1);
		}
		int ans = (numdiv + 1) / 2;
		if (ans > LIMIT)
		{
			cout << N << endl;
			break;
		}
	}
}

void Project::seive(int n)
{
	int	i, j;

	for (i = 2; i * i <= n; i++)
	{
		if (composite[i])
			continue;
		for (j = 2 * i; j <= n; j += i)
			composite[j] = 1;
		primes.push_back(i);
	}
	for (; i <= n; i++)
		if (!composite[i])
			primes.push_back(i);
}
void Project::power_digit_sum()
{
    stringstream ss;
    string num = "";
    int answer = 0;
    ss.setf(ios::fixed);
    ss << setprecision(0) << pow(2, 1000);
    ss >> num;
    for(unsigned int i = 0; i < num.length(); i++)
        answer += atoi(num.substr(i,1).c_str());
    cout<<answer<<endl;
}
int ones(int num) {
    int lets = 0;
    if (num == 1 || num == 2 || num == 6)
        lets = 3;
    else if (num == 4 || num == 5 || num == 9)
        lets = 4;
    else if (num == 3 || num == 7 || num == 8)
        lets = 5;
    return lets;
}

int tens(int num) {
    int lets = 0;
    if(num < 20) {
        if (num == 10)
            lets = 3;
        else if (num == 11 || num == 12)
            lets = 6;
        else if (num == 15 || num == 16)
            lets = 7;
        else if (num == 13 || num == 14 || num == 18 || num == 19)
            lets = 8;
        else if (num == 17)
            lets = 9;
    } else {
        lets = 5;                       //40, 50, 60
        if (num % 10 > 0)
            lets += ones(num % 10);
        if (num >= 20 && num <= 39)     //20, 30
            lets++;
        else if (num >= 80 && num <= 99)//80, 90
            lets++;
        else if (num >= 70 && num <= 79)//70
            lets += 2;
    }
    return lets;
}

int letters(int num) {
    int lets = 0;
    int count = 0;
    int number = num;
    for(; number > 0; count++, number /= 10);
    switch(count) {
        case 1:
            lets = ones(num);
            break;
        case 2:
            lets = tens(num);
            break;
        case 3:
            if(num % 100 == 0)
                lets = ones(num / 100) + 7;
            else if (num % 100 < 10)
                lets = ones(num / 100) + 10 + ones(num % 100);
            else
                lets = ones(num / 100) + 10 + tens(num % 100);
            break;
        case 4:
            lets = 11;
            break;
    }
    return lets;
}
void Project::number_letter_counts()
{
    long answer = 0;
    for(int i = 1; i <= 1000; i++)
        answer += letters(i);
    cout << answer << endl;
}
int tri [15][15] = {
    {75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {95, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {17, 47, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {18, 35, 87, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {20, 4, 82, 47, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {19, 1, 23, 75, 3, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {88, 2, 77, 73, 7, 63, 67, 0, 0, 0, 0, 0, 0, 0, 0},
    {99, 65, 4, 28, 6, 16, 70, 92, 0, 0, 0, 0, 0, 0, 0},
    {41, 41, 26, 56, 83, 40, 80, 70, 33, 0, 0, 0, 0, 0, 0},
    {41, 48, 72, 33, 47, 32, 37, 16, 94, 29, 0, 0, 0, 0, 0},
    {53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14, 0, 0, 0, 0},
    {70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57, 0, 0, 0},
    {91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48, 0, 0},
    {63, 66, 4, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31, 0},
    {4, 62, 98, 27, 23, 9, 70, 98, 73, 93, 38, 53, 60, 4, 23}
};

int maxsum (int num1, int num2, int up) {
    int biggest = num1;
    if(num2 > biggest)
        biggest = num2;
    return biggest + up;
}
int path(int num, int tri[][15]) {
    for(int i = num-1; i >= 0; i--) {
        for(int j = 0; j+1 < num && tri[i][j+1] != 0; j++)
            tri[i-1][j] = maxsum(tri[i][j], tri[i][j+1], tri[i-1][j]);
    }
    return tri[0][0];
}
void Project::max_path_sum_one()
{
    cout << path(15, tri) << endl;
}
void setStartDate(int startDay, int startMonth, int startYear)
{
    day = startDay;
    month = startMonth;
    year = startYear;
}

bool isLeapYear()
{
    if(year % 100 == 0) {	//if century
        if(year % 400 == 0)	//if divisible by 400
            return true;
        else
            return false;
    } else if(year % 4 == 0)//else if divisible by 4
        return true;
    else
        return false;
}

int daysInMonth()
{
    if(month == 2) {
        if(isLeapYear())
            return 29;
        else
            return 28;
    } else if((month == 4) || (month == 6) || (month == 9) || (month == 11))
        return 30;
    else
        return 31;
}

/* Variable 'numDays' must not be greater than 27 */
void updateDate(int numDays)
{
    day += numDays;
    if(day > daysInMonth()) {
        day -= daysInMonth();
        month++;
    }
    if(month > 12) {
        month = 1;
        year++;
    }
}

/* Global variable 'day' must be set to a Sunday */
int sundaysOnFirst(int endYear) {
    int sundays = 0;
    for(; year <= endYear; updateDate(7)) {
        if(day == 1)
            sundays++;
    }
    return sundays;
}
void Project::counting_sundays()
{
    setStartDate(6, 1, 1901);
    cout << sundaysOnFirst(2000) << endl;
}
int Project::sumDigits(string s) {
    int answer = 0;
    for(unsigned int i = 0; i < s.length(); i++)
        answer += atoi(s.substr(i,1).c_str());
    return answer;
}

void Project::factorial_digit_sum()
{
    string s = "93326215443944152681699238856266700490715968264381621468592963895217599993229915608941463976156518286253697920827223758251185210916864000000000000000000000000";
    cout << sumDigits(s) << endl;
}
