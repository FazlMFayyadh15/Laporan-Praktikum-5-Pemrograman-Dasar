baris, kolom = map(int, input().split())
angka = list(map(int, input().split()))

for i in range(baris):
    print(*angka[i * kolom:(i + 1) * kolom])