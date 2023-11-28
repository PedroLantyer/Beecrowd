s = input()
l1 = s.split()
code, quantity = int(l1[0]),int(l1[1])
price_table = [4.00,4.50,5.00,2.00,1.50]
match code:
    case 1:
        price = (quantity*price_table[0])
        print("Total: R$ %.2f" % price)
    case 2:
        price = (quantity*price_table[1])
        print("Total: R$ %.2f" % price)
    case 3:
        price = (quantity*price_table[2])
        print("Total: R$ %.2f" % price)
    case 4:
        price = (quantity*price_table[3])
        print("Total: R$ %.2f" % price)
    case 5:
        price = (quantity*price_table[4])
        print("Total: R$ %.2f" % price)