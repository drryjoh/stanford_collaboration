#!python3
import numpy as np
 
data = []
for name in [ "Cx","Cy"]:
    print(f"processing {name}")
    f = open(f'0/{name}','r')
    reading = False
    read_number_of_points = False
    number_of_points = 0
    points = 0
    d = []
    for line in f:
        if reading and points < number_of_points and "(" not in line:
            d.append(float(line.strip(" ").strip("\n")))
            points+=1
        if "internalField   nonuniform List<scalar>" in line:
            print("start")
            read_number_of_points = True
        elif read_number_of_points:
            number_of_points = int(line.strip(" ").strip("\n"))
            print(number_of_points)
            read_number_of_points = False
            reading = True
    d = np.array(d)
    if len(d) != number_of_points:
        print("error!")
    data.append(d)
data = np.array(data).transpose()
f = open("consolidated_with_xy_znd.csv","w")
f.write("Cx, Cy\n")
for line in data:
   str_line = [str(d) for d in line]
   f.write("{0}\n".format(", ".join(str_line)))

   #Below is to add concetration data of each species, use for getting states for NN when concetrations are required instead of mass fraction.
   # Turn off when pulling a mesh ZND initialization generation
# f = open("consolidated_with_xy_znd.csv","w")
# for line in data:
#     T = line[2]
#     p = line[3]
#     Y = line[range(4, data.shape[1])]
#     gas.TPY = T, p, Y
#     conc = gas.concentrations  # kmol/m^3
#     str_line = [str(d) for d in line[:4]] + [str(c) for c in conc]
#     f.write("{0}\n".format(", ".join(str_line)))



