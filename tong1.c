#include  <stdio.h>

void myCombination(int score);

int main() {
	int score;
	printf("Enter the NFL score (Enter 1 to stop): ");
	scanf("%d", &score);
	
	while (score != 1) {
		myCombination(score);
		printf("Enter the NFL score (Enter 1 to stop): ");
        	scanf("%d", &score);
	}

	return 0;
}

void myCombination(int score) {
	int touchdown = 6;
	int fieldGoal = 3;
	int safety  = 2;
	int td2 = 8;
	int td1 = 7;

	for (td2 = 0; td2 <= score/8; td2++) {
		for (td1 = 0; td1 <= score/7; td1++) {
			for (safety = 0; safety <= score/2; safety++) {
				for (touchdown = 0; touchdown <= score/6; touchdown++) {
					for (fieldGoal = 0; fieldGoal <= score/3; fieldGoal++) {
						int total = td2*8 +td1*7 + safety*2 + fieldGoal*3 + touchdown*6;
						
						if (score == total) {
							printf("%d TD+2pt, %d TD+1pt, %d TD, %d FG, %d Safety\n", td2, td1, safety, touchdown, fieldGoal);
						}


					}
				}
			}
		}
	}
}
