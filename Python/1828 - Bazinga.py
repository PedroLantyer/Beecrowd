def compare_scissors(raj,test_case_number):
    match raj:
        case "papel" | "lagarto":
            print("Caso #%d: Bazinga!" % test_case_number)
            pass
        case "pedra" | "spock":
            print("Caso #%d: Raj trapaceou!" % test_case_number)
            pass
        case _:
            print("Caso #%d: De novo!" % test_case_number)
            pass

def compare_paper(raj,test_case_number):
    match raj:
        case "pedra" | "spock":
            print("Caso #%d: Bazinga!" % test_case_number)
            pass
        case "tesoura" | "lagarto":
            print("Caso #%d: Raj trapaceou!" % test_case_number)
            pass
        case _:
            print("Caso #%d: De novo!" % test_case_number)
            pass

def compare_rock(raj,test_case_number):
    match raj:
        case "lagarto" | "tesoura":
            print("Caso #%d: Bazinga!" % test_case_number)
            pass
        case "papel" | "spock":
            print("Caso #%d: Raj trapaceou!" % test_case_number)
            pass
        case _:
            print("Caso #%d: De novo!" % test_case_number)
            pass

def compare_lizard(raj,test_case_number):
    match raj:
        case "spock" | "papel":
            print("Caso #%d: Bazinga!" % test_case_number)
            pass
        case "tesoura" | "pedra":
            print("Caso #%d: Raj trapaceou!" % test_case_number)
            pass
        case _:
            print("Caso #%d: De novo!" % test_case_number)
            pass

def compare_spock(raj,test_case_number):
    match raj:
        case "tesoura" | "pedra":
            print("Caso #%d: Bazinga!" % test_case_number)
            pass
        case "lagarto" | "papel":
            print("Caso #%d: Raj trapaceou!" % test_case_number)
            pass
        case _:
            print("Caso #%d: De novo!" % test_case_number)
            pass

def get_results(options_chosen,test_case_number):
    sheldon = options_chosen[0].lower()
    raj = options_chosen[1].lower()
    match sheldon:
        case "tesoura":
            compare_scissors(raj,test_case_number)
            #pass
        case "papel":
            compare_paper(raj,test_case_number)
            #pass
        case "pedra":
            compare_rock(raj,test_case_number)
            #pass
        case "lagarto":
            compare_lizard(raj,test_case_number)
            #pass
        case "spock":
            compare_spock(raj,test_case_number)
            #pass
        case _:
            pass

if __name__ == "__main__":
    n = int(input())
    for i in range(n):
        options_chosen = input().split()
        get_results(options_chosen,(i+1))
