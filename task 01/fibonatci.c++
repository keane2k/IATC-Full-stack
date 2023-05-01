#include <iostream>
using namespace std;

int fibonacci(int n) {
   if (n == 0 || n == 1)
      return n;
   else
      return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
   int n;
   cout << "fibonatci ededinin nomresini girin: ";
   cin >> n;

   cout << "Fibonacci reqemi : ";
   for (int i = 0; i < n; i++) {
      cout << fibonacci(i) << " ";
   }

   return 0;
}
