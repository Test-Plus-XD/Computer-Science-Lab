import java.util.Scanner;

public class Question {

     public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        short question;
        boolean LoopProgram = true;
         // Loop to keep prompting for questions
        do {
            System.out.print("Enter question number (2 for DisplayTime, 3 for ComputeAverage, or 0 to exit): ");
            if (input.hasNextShort()) {
                question = input.nextShort();
                for (int i = 0; i < 20; i++) { 
                    System.out.println(); 
                }
                // Process based on user input
                switch (question) {
                    case 2:
                        displayTime(input);  // Pass the scanner to the function
                        break;
                    case 3:
                        computeAverage(input);  // Pass the scanner to the function
                        break;
                    case 0:
                        LoopProgram = false; // Exit the program
                        System.out.println("Exiting program...");
                        break;
                    default:
                        System.out.println("Invalid question number.");
                        break;
                }
            } else {
                System.out.println("Invalid input. Please enter a valid number.");
                input.next(); // Clear the invalid input
            }

        } while (LoopProgram); // Continue looping until user enters 0

        input.close(); // Close the scanner
    }
    
    // Function to display time
    public static void displayTime(Scanner input) {

        // Prompt the user for input
        System.out.print("Enter an integer for seconds: ");
        int seconds = input.nextInt();

        // Calculate hours, minutes, and seconds
        int hours = seconds / 3600; // Find hours
        int minutes = (seconds % 3600) / 60; // Find minutes
        int remainingSeconds = seconds % 60; // Remaining seconds

        // Output the result
        System.out.println(seconds + " seconds is " + hours + " hours, " +
            minutes + " minutes, and " + remainingSeconds + " seconds");
    }

    // Function to compute the average of numbers
    public static void computeAverage(Scanner input) {
        boolean repeat = true;
        double number = 0; // Declare number
        double sum = 0; // Declare sum
        int count = 0; // Declare count

        // Loop to keep asking for numbers until 0 is entered
        while (repeat) {
            // Assign a number
            System.out.println("Input a number (enter 0 to stop):");
            number = input.nextDouble(); // New value is a number

            // Stop if the number is 0
            if (number == 0) {
                repeat = false;
            } else {
                sum += number; // Add number to sum
                count++; // Increment count
            }
        }

        // Compute and display the average if at least one valid number was entered
        if (count > 0) {
            double average = sum / count;
            System.out.println("The average number is " + average);
        } else {
            System.out.println("No numbers were entered.");
        }
    }
}