input_data = []

while len(input_data) < 6:
    line = input()
    input_data.extend(line.split())

a = float(input_data[0])
b = float(input_data[1])
i = float(input_data[2])
j = float(input_data[3])
x = float(input_data[4])
y = float(input_data[5])
    
hasil = ((a - b) * i / j) - (x + y)
print(f"{hasil:.3f}")