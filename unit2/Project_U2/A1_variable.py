import sys

i = 0
sum = 0
avg = 0
if __name__ == "__main__":
    for i in range (1, len(sys.argv)):
        sum = (sum + float(sys.argv[i]))
    avg = sum/i

    print("The average of the numbers is: ", avg)