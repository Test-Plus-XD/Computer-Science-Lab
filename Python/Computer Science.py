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

# Function for question 3: brief description of what it solves
def questionThree():
    print("Running Question 3")
    # Your logic here

# Main entry point that runs all questions sequentially
def main():
    print("1: Fibonacci")
    print("2: Item algorithm ")
    print("3: Question 3")
    choice = input("Select a question to run: ")

    if choice == "1":
        questionOne()
    if choice == "2":
        questionTwo()
    if choice == "3":
        questionThree()
    print("-　- " * 10)

if __name__ == "__main__":
    main()