# DESIGN AND ANALYSIS OF ALGORITHMS
## Finding Time Complexity Using the Counter Method

This repository contains C implementations for finding the step/operation count and time complexity of various algorithms using the counter method.

---

### Questions & Programs

#### 1. Question 1 (`question1.c`)
- **Algorithm**:
  ```c
  void function (int n){
      int i = 1;
      int s = 1;
      while(s <= n){
          i++;
          s += i;
      }
  }
  ```
- **Description**: Increments `s` by `i` on each iteration where `s` follows triangular number progression $s = \frac{k(k+1)}{2}$.
- **Time Complexity**: $O(\sqrt{n})$

---

#### 2. Question 2 (`question2.c`)
- **Algorithm**:
  ```c
  void func(int n) {
      if(n == 1) {
          printf("*");
      } else {
          for(int i = 1; i <= n; i++) {
              for(int j = 1; j <= n; j++) {
                  printf("*");
                  printf("*");
                  break;
              }
          }
      }
  }
  ```
- **Description**: The inner loop breaks immediately on its first iteration (`j = 1`), so the inner loop runs only once per outer iteration.
- **Time Complexity**: $O(n)$ for $n > 1$, $O(1)$ for $n = 1$.

---

#### 3. Question 3 (`question3.c`)
- **Algorithm**:
  ```c
  void Factor(int num) {
      for (int i = 1; i <= num; ++i) {
          if (num % i == 0) {
              printf("%d ", i);
          }
      }
  }
  ```
- **Description**: Iterates through all integers from $1$ to $num$ checking for divisibility.
- **Time Complexity**: $O(n)$

---

#### 4. Question 4 (`question4.c`)
- **Algorithm**:
  ```c
  void function(int n) {
      int c = 0;
      for(int i = n/2; i < n; i++)
          for(int j = 1; j < n; j = 2 * j)
              for(int k = 1; k < n; k = k * 2)
                  c++;
  }
  ```
- **Description**: Outer loop runs $\approx n/2$ times ($O(n)$). Middle loop runs $\log_2 n$ times. Innermost loop runs $\log_2 n$ times.
- **Time Complexity**: $O(n \log^2 n)$

---

#### 5. Question 5 (`question5.c`)
- **Algorithm**:
  ```c
  void reverse(int n) {
      int rev = 0, remainder;
      while (n != 0) {
          remainder = n % 10;
          rev = rev * 10 + remainder;
          n /= 10;
      }
      printf("%d", rev);
  }
  ```
- **Description**: Divides $n$ by 10 each step until $n$ reaches 0. Number of iterations equals the number of digits in $n$.
- **Time Complexity**: $O(\log_{10} n)$ or $O(d)$ where $d$ is the number of digits.

---

### How to Compile and Run
To compile any of the programs with GCC:
```bash
gcc question1.c -o question1
./question1
```
Enter a positive integer input when prompted.
