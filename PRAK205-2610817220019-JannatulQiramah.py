import math

input_data = []

while len(input_data) < 2:
    line = input()
    input_data.extend(line.split())

a = float(input_data[0])
b = float(input_data[1])

alas = round(math.sqrt((b ** 2) - (a ** 2)))
tinggi = a
sisi_miring = b
keliling = alas + tinggi + sisi_miring
luas = 0.5 * alas * tinggi

print(f"Alas = {int(alas)} cm")
print(f"Tinggi = {int(tinggi)} cm")
print(f"Keliling = {int(keliling)} cm")
print(f"Luas = {int(luas)} cm^2")