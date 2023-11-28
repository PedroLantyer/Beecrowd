wage = float(input())
if wage <= 2000:
    print("Isento")
elif wage <= 3000:
    wage -= 2000
    tax = (wage)*(8/100)
    print("R$ %.2f" % tax)
elif wage <= 4500:
    wage -= 2000
    tax = 1000*(8/100)
    wage -= 1000
    tax = tax + (wage*(18/100))
    print("R$ %.2f" % tax)
else:
    wage -= 2000
    tax = 1000*(8/100)
    wage -= 1000
    tax = tax + (1500*(18/100))
    wage -= 1500
    tax = tax + (wage*(28/100))
    print("R$ %.2f" % tax)