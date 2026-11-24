with open("input.txt", "r") as f:
    lines = f.readlines()

print("Total Lines:", len(lines))

print("First Two Lines:")
for line in lines[:2]:
    print(line.strip())

with open("output.txt", "w") as f:
    f.writelines(lines[:2])

print("Data written successfully")