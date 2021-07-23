import sys

phrase = "Hola mundo como estas"
reverse = None

if __name__ == "__main__":
    reverse =' '.join(reversed(phrase.split()))
    print("\nInput:", phrase)
    print("Output:",reverse) 