def get_product():
    product = input().split()
    units = int(product[1])
    price = float(product[2])
    value = (units*price)
    return value

if __name__ == "__main__":
    product_1 = get_product()
    product_2 = get_product()
    total = (product_1+product_2)
    print("VALOR A PAGAR: R$ %.2f" % total)