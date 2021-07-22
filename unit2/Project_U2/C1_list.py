import sys

tempF = [63,73,-999,91,86,82,72,81,66,77,75,104,-999,84,77,66,82,63,93,72,82,64,75,90,64,-999,99,82,95,82]

i = 0
j = 0
tempC = []


if __name__ == "__main__":
    print("Initial list in Fahrenheit: \n", tempF)
    remover = tempF.count(-999)
    for i in range (0, remover):
        tempF.remove(-999)
    print("Updated list: \n", tempF)

    for j in range(0, len(tempF)):
        tempC.append(round((tempF[j]-32)*(5/9), 2))
    print("The degrees in Celsius are: \n", tempC)

    print("\n The maximum value in Fahrenheit is:", max(tempF))
    print("\n The maximum value in Celsius is:", max(tempC))