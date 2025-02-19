# Lab Description: ARM Assembly Data Manipulation in C

## Objective
This lab demonstrates the integration of ARM assembly instructions within a C program to manipulate memory addresses and perform basic arithmetic operations.

## Overview
The program utilizes **inline assembly in C** to perform memory operations and arithmetic using the `LDR` (Load Register), `STR` (Store Register), and `ADD` (Addition) instructions. It showcases how to load values from memory, process them, and store the results back into memory.

## Execution Steps

### **1. Load Addresses into Registers**
- `R1` is loaded with the memory address `0x20001000`.
- `R2` is loaded with the memory address `0x20001004`.

### **2. Fetch Data from Memory**
- The value at the memory address stored in `R1` is loaded into `R0`.
- The value at the memory address stored in `R2` is loaded into `R1`.

### **3. Perform Arithmetic Operation**
- The values in `R0` and `R1` are added, and the result is stored in `R0`.

### **4. Store the Result**
- The result in `R0` is stored back at the memory address in `R2`.

## Expected Outcome
The **sum** of the values stored at addresses `0x20001000` and `0x20001004` is computed and stored back in `0x20001004`.

## Key Concepts
- **Inline Assembly in C:** Embedding ARM assembly instructions within C code.
- **Memory Manipulation:** Loading and storing values using direct memory addressing.
- **Basic Arithmetic in Assembly:** Performing addition using ARM registers.
- **Register Usage:** Directly working with `R0`, `R1`, and `R2` for computation and memory operations.

This lab is useful for understanding **low-level memory manipulation and arithmetic in ARM-based embedded systems**.
