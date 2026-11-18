kode = input()
pesan = input()

if len(kode) != len(pesan):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    hasil = ""
    bintang = 0
    pagar = 0
    for k, p in zip(kode, pesan):
        if k == " " and p == " ":
            hasil += " "
        elif k == p:
            hasil += "*"
            bintang += 1
        else:
            hasil += "#"
            pagar += 1

    print(hasil)
    print("* =", bintang)
    print("# =", pagar)
    if bintang >= pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")