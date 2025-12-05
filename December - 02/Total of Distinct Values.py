N = int(input("enter the number:"))
width = len(bin(N)) - 2   
for i in range(1, N + 1):
    deci = str(i)
    octa = oct(i)[2:]         
    hexa = hex(i)[2:].upper()  
    bina = bin(i)[2:]         
    print(deci.rjust(width), octa.rjust(width), hexa.rjust(width), bina.rjust(width))
