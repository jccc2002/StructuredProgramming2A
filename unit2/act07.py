import sys

def pal (string):
    str2=string.lower()
    str3=str2.replace("","")
    nstr=str3[::-1]

    if nstr==str3:
        return True
    
    else:
        return False

if __name__ == "__main__":
    a= "Amor a Roma"


    if pal(a)==True:
        print("En efecto, es palíndrome \n", a)
    else:
        print("No es palíndrome \n", a)
