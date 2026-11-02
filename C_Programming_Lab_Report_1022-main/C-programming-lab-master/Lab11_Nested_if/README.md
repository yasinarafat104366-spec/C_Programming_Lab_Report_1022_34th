# Lab 11 – Nested if

This folder contains the complete solutions for this lab, including C source programs, flowcharts, input specifications, and verified outputs.

---

### <a id='question-32'></a>Question 32: Write a C program to find the largest among three numbers using nested if.

#### Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Input[/Read a, b, c/]
    Input --> CheckAB{"a >= b?"}
    CheckAB -- Yes --> CheckAC{"a >= c?"}
    CheckAC -- Yes --> MaxA[Largest = a]
    CheckAC -- No --> MaxC1[Largest = c]
    CheckAB -- No --> CheckBC{"b >= c?"}
    CheckBC -- Yes --> MaxB[Largest = b]
    CheckBC -- No --> MaxC2[Largest = c]
    MaxA --> Display[/Display Largest/]
    MaxB --> Display
    MaxC1 --> Display
    MaxC2 --> Display
    Display --> End([End])
```

#### C Program (Code)
```c
#include <stdio.h>

int main(void) {
    int a, b, c, largest;

    printf("Enter three numbers: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) return 1;

    // Finding largest using nested if
    if (a >= b) {
        if (a >= c) {
            largest = a;
        } else {
            largest = c;
        }
    } else {
        if (b >= c) {
            largest = b;
        } else {
            largest = c;
        }
    }

    printf("The largest number is: %d\n", largest);

    return 0;
}
```

#### Program Input
```text
25 60 42
```

#### Program Output
```text
Enter three numbers: The largest number is: 60
```

---

### <a id='question-33'></a>Question 33: Write a C program to find the smallest among three numbers using nested if.

#### Flowchart
```mermaid
flowchart TD
    Start([Start]) --> Input[/Read a, b, c/]
    Input --> CheckAB{"a <= b?"}
    CheckAB -- Yes --> CheckAC{"a <= c?"}
    CheckAC -- Yes --> MinA[Smallest = a]
    CheckAC -- No --> MinC1[Smallest = c]
    CheckAB -- No --> CheckBC{"b <= c?"}
    CheckBC -- Yes --> MinB[Smallest = b]
    CheckBC -- No --> MinC2[Smallest = c]
    MinA --> Display[/Display Smallest/]
    MinB --> Display
    MinC1 --> Display
    MinC2 --> Display
    Display --> End([End])
```

#### C Program (Code)
```c
#include <stdio.h>

int main(void) {
    int a, b, c, smallest;

    printf("Enter three numbers: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) return 1;

    // Finding smallest using nested if
    if (a <= b) {
        if (a <= c) {
            smallest = a;
        } else {
            smallest = c;
        }
    } else {
        if (b <= c) {
            smallest = b;
        } else {
            smallest = c;
        }
    }

    printf("The smallest number is: %d\n", smallest);

    return 0;
}
```

#### Program Input
```text
25 60 42
```

#### Program Output
```text
Enter three numbers: The smallest number is: 25
```

---
