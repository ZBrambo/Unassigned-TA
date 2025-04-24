# TA Assignment Checker

## Overview
This program helps identify which TA has not been assigned in a teaching assistant group. Given a total number of TAs and a list of already assigned TAs, the program determines the single TA that has not been assigned.

## Author
Zachary Bram

## Problem Description
When managing a large class with thousands of students, TAs are assigned to groups of students for each assignment and exam. This program helps identify the single TA that hasn't been assigned yet when most assignments are complete.

## Program Features
- Accepts the total number of TAs (n)
- Accepts a list of n-1 already assigned TAs
- Identifies and outputs the single unassigned TA

## Compilation Instructions
To compile the program:
```
gcc -std=c99 -Wall project3_TA.c -o project3_TA
```

## Execution Instructions
To run the program:
```
./project3_TA
```

## Input Format
1. Enter the total number of TAs when prompted
2. Enter the list of already assigned TAs (space-separated) when prompted

## Output Format
The program will output the TA number that has not been assigned in the format:
```
TA has not been assigned: X
```
where X is the unassigned TA number.

## Example Usage
```
Enter number of TAs:3
Enter TAs already assigned:1 3
TA has not been assigned: 2
```

## Limitations
- The program can handle a maximum of 100 TAs (defined by MAX_TAS constant)
- The program expects exactly n-1 assigned TAs (where n is the total number)
- TA numbers should be integers ranging from 1 to n
