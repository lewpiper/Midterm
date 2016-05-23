//Grade Lab
//Lew Piper III | Palomar ID 011263249

#include <stdio.h>
#include <math.h>
int calculateAverage();
FILE *fp;

//Provided main function from the textbook
int main (void) {
	int i;
	
	fp = fopen("csis.txt", "w");
	for (i =1; i <=4; ++i) {
		calculateAverage();
	}
	fclose(fp);
	return 0;
}

//Called function that will take an arbitrary number of test scores and will calculate the average of those scores. 
int calculateAverage(void) {
	int score = 0;
	int total = 0;
	double average = 0;
	int i = 0;
	
	//Prompts user to type in test score and explains to end the program enter -1
	printf("Enter test score, -1 to end: ");
	scanf("%d", &score);
	
	//Loop that looks for program end and then calculates the average. 
	while (score != -1) {
		total = total + score;
		i++;
		average = (total / i);
		printf("Enter next test score: ");
		scanf("%d", &score);
		fprintf(fp,"Enter next test score: %d\n", score);
	}
	
	printf("Average: %.2f\n\n", average);
	fprintf(fp,"Average: %.2f\n\n", average);
	return 0;
}