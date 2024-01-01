<!-- <p align="center"><strong>Lecture Notes • Source Code • Resources • by @Shavkatjon-O</strong></p> -->

<!-- <p align="center">Your must-have cheat sheet on Data Structures and Algorithms! 🚀</p> -->

<!-- > Welcome to the Data Structures and Algorithms repository! This repository contains lecture notes and source code implementations of various data structures and algorithms in C++, Java, and Python. -->

<!-- **Made by** [Shavkatjon-O](https://github.com/Shavkatjon-O) ⚡️ -->

<h1 align="center">Data Structures and Algorithms</h1>

<!-- ![Data Structures and Computer Algorithms](images/dsa-main.png) -->

<!-- ![Line](images/line.png) -->

## Resources

- Data Structures and Algorithms by [Abdul Bari](https://www.youtube.com/watch?v=0IAPZzGSbME&list=PLAXnLdrLnQpRcveZTtD644gM9uzYqJCwr)
- Data Structures by [Neso Academy](https://www.youtube.com/watch?v=xLetJpcjHS0&list=PLBlnK6fEyqRj9lld8sWIUNwlKfdUoPd1Y)

## Table of Contents

- [Data Structures](#data-structures)
  - [Basics of Data Structures](#basics-of-data-structures)
    - [Introduction](#introduction)
    - [Abstract Data Types](#abstract-data-types)
    - [Asymptotic Notation (O, Ω, Θ)](#asymptotic-notation)
    - [Analyzing Time Complexity](#analyzing-time-complexity)
    - [Analyzing Space Compexity](#analyzing-space-complexity)
  - [Searching and Sorting Algorithms](#searching-and-sorting-algorithms)
    - [Linear Search](#linear-search)
    - [Binary Search](#binary-search)
    - [Selection Sort](#selection-sort)
    - [Bubble Sort](#bubble-sort)
    - [Insertion Sort](#insertion-sort)
    - [Merge Sort](#merge-sort)
    - [Quick Sort](#quick-sort)
    - [Heap Sort](#heap-sort)
- [Computer Algorithms](#computer-algorithms)

<!-- ![Line](images/line.png) -->

<h1 align="center">Data Structures</h1>

<!-- ![Data Structures](images/data-structures-1.png) -->

<!-- ![Line](images/line.png) -->

## Basics of Data Structures

### Introduction

What is a data structure?

A **Data Structure** is a way of organizing and storing data to perform operations efficiently. It defines the relationship and operations that can be performed on the data, providing a means to access and manipulate it in a structured and organized manner.

> Examples include **arrays**, **linked lists**, **stacks**, and **queues**.

- **Data** - data are simply value or set of values.
- **Data Structure** - usually refers to an organization of data in main memory.
- **Problem** - is a challenge or obstacle that requires a solution or resolution.
- **Algorithm** - is a step-by-step set of instructions or rules to solve a specific problem or perform a task.
- **Program** - is a set of coded instructions that a computer can execute to perform a specific task or solve a particular problem.

### Abstract Data Types

What is an abstract data type?

An **Abstract Data Type (ADT)** is like a blueprint for handling information. It defines what operations you can do with the data, but it doesn't say exactly how to do them. It's like having a remote control for a TV — you know what buttons (operations) to press, but you don't need to know the inner workings of the TV (implementation details). Examples of ADTs are like different types of remotes for various devices, each with its own set of buttons.

![ADT](images/abstract-data-types.webp)

- **Abstraction** - means focusing on what operations you can do with the data, without worrying about how those operations are done behind the scenes. It's like using a tool without needing to know how it's built.

- **Encapsulation** - in programming encapsulation is like packaging data and the methods that work on that data together. It keeps the inner workings hidden and allows controlled access, making code more organized, secure, and flexible.

### Asymptotic Notation

Watch these videos to better understand the topic - [video-1](https://www.youtube.com/watch?v=A03oI0znAoc&t=427s), [video-2](https://www.youtube.com/watch?v=Nd0XDY-jVHs)

**Asymptotic Notation** is a way of expressing the efficiency or performance of an algorithm by focusing on how its runtime or resource usage grows as the input size increases. It's a mathematical notation that helps computer scientists describe the upper and lower bounds of an algorithm's behavior without getting into the nitty-gritty details.

The term *Asymptotic Notation* comes from **mathematics** and widely used in **computer science** for measuring complexity of an algorithm in terms of **time** and **space**.

![Asymptotic Notation](images/asymptotic-notation.png)

There are three commonly used asymptotic notations:

- **Big O Notation (O)** - This represents the upper bound or worst-case scenario of an algorithm's growth. It gives an upper limit on the rate of growth of the algorithm's running time as the input size increases.

- **Example** - If an algorithm is O(n^2), it means that the worst-case running time grows quadratically with the size of the input.

- **Omega Notation (Ω)** - This represents the lower bound or best-case scenario of an algorithm's growth. It provides a lower limit on the rate of growth of the algorithm's running time.

- **Example** - If an algorithm is Ω(n), it means that the best-case running time grows linearly with the size of the input.

- **Theta Notation (θ)** - This is a combination of Big O and Omega notations, providing both upper and lower bounds. It gives a tight bound on the growth rate of an algorithm.

- **Example** - If an algorithm is θ(n), it means that both the best-case and worst-case running times grow linearly with the size of the input.

### Analyzing Time Complexity
### Analyzing Space Complexity

## Searching and Sorting Algorithms

### Linear Search

```python
# Linear Search implemented in python

def linear_search(array, target):
  for value in array:
    if value is target:
      return True
  return False
```

### Binary Search
### Selection Sort
### Bubble Sort
### Insertion Sort
### Merge Sort
### Quick Sort
### Heap Sort


<!-- ![Line](images/line.png) -->

## License
Have a look at the [license](https://github.com/Shavkatjon-O/dsa-lecture-notes/blob/main/LICENSE) file