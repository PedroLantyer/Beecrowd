if __name__ == "__main__":
    name = input()
    salary = float(input())
    total_sold = float(input())
    
    pay = salary+(total_sold*0.15)
    print("TOTAL = R$ %.2f" % pay)