kata = input()
kecil = kata.lower()

if kecil == kecil[::-1]:
    print(f"Kata '{kata}' adalah palindrom")
else:
    print(f"Kata '{kata}' bukan palindrom")