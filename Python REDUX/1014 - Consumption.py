if __name__ == "__main__":
    distance = int(input())
    fuel_spent = float(input())
    consumption = (distance/fuel_spent)
    print("%.3f km/l" % consumption)