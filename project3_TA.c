/*
* project3_TA.c
* This program is designed to find the unassigned TA in a group of TAs.
* The program asks the user to input the number of TAs and a list of the assigned TAs
* The program will then find the unassigned TA
* 
* Author: Zachary Bram
*/

#include <stdio.h>

int main() {

	#define MAX_TAS 100  // Choose an appropriate maximum
	// Make sure to check that numberOfTAs <= MAX_TAS


	int numberOfTAs, assignedTAs, loopCounter;

	//ask user for input of number of TAs
	printf("Enter number of TAs:");
	scanf("%d", &numberOfTAs);

	if (numberOfTAs > MAX_TAS) {
		printf("Too many TAs\n");
		return 1;
	}

	//here we initialize an array to track the assigned TA's
	int TA[MAX_TAS + 1] = { 0 };
	for (loopCounter = 1; loopCounter <= numberOfTAs; loopCounter++) {
		TA[loopCounter] = 0; //0 means that the TA is not assigned
	}

	//Read the assigned TAs and then mark them 
	printf("Enter TAs already assigned:");
	for (loopCounter = 1; loopCounter < numberOfTAs; loopCounter++) {
		scanf("%d", &assignedTAs);
		TA[assignedTAs] = 1; //1 means the TA has been assigned
	}

	//Now find the unassigned TA
	for (loopCounter = 1; loopCounter <= numberOfTAs; loopCounter++) {
		if (TA[loopCounter] == 0) {
			printf("TA has not been assigned: %d\n", loopCounter);
			break;
		}
	}

	return 0;
}