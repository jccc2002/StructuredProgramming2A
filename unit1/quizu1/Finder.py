##Greatest number within given 3 numbers by the user##

n1 = int(input("Enter a number: "))
n2 = int(input("Enter a number: "))
n3 = int(input("Enter a number: "))

if (n1 > n2) and (n1 > n3):
    val = n1
elif (n2 > n1) and (n2 > n3):
    val = n2
else:
    val = n3
print("This is the largest number: ", val)