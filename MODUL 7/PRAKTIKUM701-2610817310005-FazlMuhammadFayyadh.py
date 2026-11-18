depan = input("Nama Depan : ")
belakang = input("Nama Belakang : ")

lengkap = depan + " " + belakang
panjang = len(lengkap.replace(" ", ""))

print("Nama Lengkap :", lengkap)
print("Panjang Nama (tanpa spasi) :", panjang)