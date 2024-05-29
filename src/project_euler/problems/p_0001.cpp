// Function to calculate the sum of all integers divisible by a given divisor up to a given multiple
int sum_divisible(int multiple, int divisor)
{
    int p = (multiple - 1) / divisor; // Integer division equivalent to fld in Julia
    return (divisor * p * (p + 1)) / 2;
}

// Function to calculate the sum of all multiples of 3 or 5 below a given limit
int p_0001(int below)
{
    return sum_divisible(below, 3) + sum_divisible(below, 5) - sum_divisible(below, 15);
}