class Solution {
public:
    int fib(int n) {
        if(n==0)return 0;
        if(n==1)return 1;

        long long first = 0, second = 1;
        return fibonacci(first, second, 2, n);
    }
    long long fibonacci(long long first, long long second, int i, int n)
    {
        if(i>=n) 
            return first+second;
        return fibonacci(second, first+second, ++i, n);
    }
};