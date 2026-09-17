# Print a Fibonacci series up to n
def questionOne():
    print("Running Question 1")
    n = int(input("Enter n: "))
    a, b = 0, 1
    while a <= n:
        print(a, end='　') 
        a, b = b, a+b
    print()

# Print item price per pound or too expensive or non
def questionTwo():
    print("Running Question 2")
    fruits = ['apples', 'oranges', 'pears', 'bananas']
    fruitPrices = {'apples': 2.00, 'oranges': 1.50, 'pears': 1.75}
    for fruit in fruits:
        if fruit in fruitPrices:
            if fruitPrices[fruit] >= 2:
                print(f"{fruit} item is too expensive.")
            else:
                print(f"{fruit} item price per pound is {fruitPrices[fruit]:.2f}.")
        else:
            print(f"{fruit}: Not found.")

# Print numbers at specific indices
def questionThree():
    print("Running Question 3")
    nums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    print("Picked numbers:", [nums[i] for i in range(0, len(nums), 3)])

# Print prime numbers or their factors
def questionFour():
    print("Running Question 4")
    from math import sqrt
    n = int(input("Enter n: "))
    nums = list(range(2, n + 1))
    for n in nums:
        factor = next((i for i in range(2, int(sqrt(n)) + 1) if n % i == 0), None)
        if factor is not None:
            print(f"{n} can be factorised by {factor} * {n // factor}")
        else:
            print(f"{n} is a prime number")

# Function
def questionFive():
    print("Running Question 5")
    # Your logic here

# Function
def questionSix():
    print("Running Question 6")
    # Your logic here

# Function
def questionSeven():
    print("Running Question 7")
    # Your logic here

# Function
def questionEight():
    print("Running Question 8")
    # Your logic here

# Function
def questionNine():
    print("Running Question 9")
    # Your logic here

# Function
def questionTen():
    print("Running Question 10")
    # Your logic here

# Main entry point that runs all questions sequentially
def main():
    print("1: Fibonacci")
    print("2: Item algorithm")
    print("3: Pick numbers")
    print("4: Prime or factors")
    print("5: Question 5")
    print("6: Question 6")
    print("7: Question 7")
    print("8: Question 8")
    print("9: Question 9")
    print("10: Question 10")
    choice = input("Select a question to run: ")

    if choice == "1":
        questionOne()
    elif choice == "2":
        questionTwo()
    elif choice == "3":
        questionThree()
    elif choice == "4":
        questionFour()
    elif choice == "5":
        questionFive()
    elif choice == "6":
        questionSix()
    elif choice == "7":
        questionSeven()
    elif choice == "8":
        questionEight()
    elif choice == "9":
        questionNine()
    elif choice == "10":
        questionTen()
    else:
        print("Invalid choice. Please select a number from 1 to 10.")
    print("-　- " * 10)

if __name__ == "__main__":
    main()