#include <bits/stdc++.h>
 
int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> A(N);
    int minOperations = INT_MAX;
 
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
        if (A[i] == 0) {
            std::cout << 0 << std::endl;
            return 0;  // No operations needed if a zero exists
        }
        minOperations = std::min(minOperations, std::abs(A[i]));
    }
 
    std::cout << minOperations << std::endl;
}