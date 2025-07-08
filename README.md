# Scientific Calculator (C++)

This project is a **console-based scientific calculator** developed in **C++**, capable of performing a variety of arithmetic, algebraic, trigonometric, matrix, and statistical operations. It uses modular and nested `switch` logic for navigating user choices and computing results in real time.

---

## 🧮 Features

### ✅ Arithmetic Operations
- Addition, Subtraction, Multiplication, Division

### ✅ Power and Exponential Functions
- Power of any number
- Exponential `exp(x)`

### ✅ Matrix Operations
- Addition, Subtraction, Multiplication (2x2 and 3x3 support)

### ✅ Trigonometric Functions
- Sine, Cosine, Tangent (input in degrees)

### ✅ Combinatorics
- Permutations (`nPr`)
- Combinations (`nCr`)

### ✅ Other Functions
- Factorial
- Square Root
- Logarithm (base 10 and natural log approximation)

---

## 🛠️ Technologies Used

- **Language**: C++
- **Header Files**: `<iostream>`, `<cmath>`, `<stdlib.h>`, `<math.h>`

---

## 🚀 How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/scientific-calculator-cpp.git
   cd scientific-calculator-cpp
   ````

2. Compile the code:

   ```bash
   g++ calculator.cpp -o calculator
   ```

3. Run the executable:

   ```bash
   ./calculator
   ```

> 📌 Make sure you have a C++ compiler installed (e.g., `g++`)

---

## 🧠 Example Usage

```text
1. Arithmetic Operations
   - Choose addition (1), enter values: 10, 5 → Output: Add = 15

2. Matrix Multiplication
   - Select 2x2 order, enter matrices X and Y
   - Output: Product matrix displayed

3. Trigonometry
   - Choose Sine, enter 30 → Output: sin(30°) = 0.5

4. Factorial
   - Enter value: 5 → Output: Factorial = 120
```

---

## 📌 Notes

* The calculator uses `3.14159` as an approximation for π.
* Trigonometric calculations convert degrees to radians internally.
* Log base e (`ln`) is approximated using the relation: `ln(x) ≈ 2.3 * log10(x)`.
* Input validation is basic; this version is built for educational purposes.

---

## 👨‍💻 Author

* **Haasitha Kodali**
  [Email](mailto:kodalihaasitha@gmail.com) | [LinkedIn](https://linkedin.com/in/KodaliHaasitha)

---

## 📜 License

This project is released for academic and personal use. For commercial applications, additional optimizations and exception handling may be required.

