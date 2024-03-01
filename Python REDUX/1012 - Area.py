import math

def triangulo(base, altura):
    area = (base*altura)/2
    print("TRIANGULO: %.3f" % area)

def circulo(raio):
    pi = 3.14159
    area = pi*math.pow(raio,2)
    print("CIRCULO: %.3f" % area)
    
def trapezio(base_1, base_2, altura):
    area = ((base_1+base_2)*altura)/2
    print("TRAPEZIO: %.3f" % area)

def quadrado_ou_retangulo(lado_1, lado_2, tipo):
    area = lado_1*lado_2
    print("%s: %.3f" % (tipo, area))

if __name__ == "__main__":
    nums = input().split() # A, B, C
    nums = [float(num) for num in nums]
    
    triangulo(nums[0], nums[2])
    circulo(nums[2])
    trapezio(nums[0], nums[1], nums[2])
    quadrado_ou_retangulo(nums[1],nums[1], "QUADRADO")
    quadrado_ou_retangulo(nums[0],nums[1], "RETANGULO")