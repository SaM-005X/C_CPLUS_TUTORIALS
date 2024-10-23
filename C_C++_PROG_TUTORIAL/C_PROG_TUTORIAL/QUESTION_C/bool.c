// check whether the user input is true or false in boolean. //
#include <stdio.h>

int main() {
  int userInput;
  int booleanValue;

  // Prompt the user to enter a boolean value (0 or 1)
  printf("Enter a boolean value (0 for false, 1 for true): ");
  scanf("%d", &userInput);

  // Validate the input to ensure it's a boolean value
  if (userInput == 0 || userInput == 1) {
    booleanValue = userInput;
    // Print the boolean value
    printf("You entered: %s\n", booleanValue ? "true" : "false");
  } else {
    printf("Invalid input! Please enter 0 or 1.\n");
  }

  return 0;
}