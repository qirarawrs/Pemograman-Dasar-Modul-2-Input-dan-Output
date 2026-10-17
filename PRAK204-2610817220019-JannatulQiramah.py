input_data = []

while len(input_data) < 2:
    line = input()
    input_data.extend(line.split())

r = float(input_data[0])
t = float(input_data[1])

phi = 22.0 / 7.0

volume = phi * (r ** 2) * t
luas = 2 * phi * r * (t + r)
keliling = 2 * phi * r

print(f"Volume={volume:.2f}")
print(f"Luas={luas:.2f}")
print(f"Keliling={keliling:.2f}")