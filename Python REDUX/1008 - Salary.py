if __name__ == "__main__":
    number = int(input())
    hours = int(input())
    wage_hour = float(input())
    salary = (hours*wage_hour)
    print("NUMBER = %d\nSALARY = U$ %.2f" % (number, salary))