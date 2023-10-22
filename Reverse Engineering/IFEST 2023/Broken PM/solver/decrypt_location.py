check = 'IFEST23'

doubletodigitarray = [75,66,77,86,86,52,59]
doubletodigitarray2 = [75,64,64,80,81,59,58]

latitude = []
longitude = []

for i in range(len(check)):
    result = doubletodigitarray[i] ^ ord(check[i])
    latitude.append(result)
    result2 = doubletodigitarray2[i] ^ ord(check[i])
    longitude.append(result2)

print(latitude)
print(longitude)
