import sys

a = 10
b = 20
print(f'Initial values: a:{a}, b:{b}')
#Swap ----
# a = 20
# b = 10
#---------
# a = b
# b = a

def swap (param1, param2):
    global a
    global b
    temp = a
    a = b
    b = temp

if __name__ == "__main__":
    print("Swap function")

    temp = a
    a = b
    b = temp
    print(a,b)
    print(f'values: a:{a}, b:{b}')