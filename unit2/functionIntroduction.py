from sys import argv as ag


def addTwoNumbers(number1, number2):
    return number1 + number2


if __name__ == "__main__":
    print(f'La suma de dos números = {addTwoNumbers(int(ag[1]), int(ag[2]))}')