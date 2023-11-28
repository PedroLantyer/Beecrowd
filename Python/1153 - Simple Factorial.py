if __name__ == "__main__":
    N = int(input())
    factorial = N
    for i in reversed(range(1,N)):
        factorial *= i
    print(factorial)