#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("=== Quiz Application ===\n");

    printf("\n1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("\n2. Which language is used for C programming?\n");
    printf("1. High Level\n2. Assembly\n3. Machine\n4. Binary\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("\n3. 5 + 10 = ?\n");
    printf("1. 12\n2. 15\n3. 20\n4. 25\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("\nYour Final Score = %d/3\n", score);

    if(score == 3)
        printf("Excellent!\n");
    else if(score == 2)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}