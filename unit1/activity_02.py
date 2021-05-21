bank_account=10000
product = int(input("What is the cost of the product?"))

if(product <= bank_account):
    print("Payment succesful")
else:
    print("Payment rejected")

print("End program")