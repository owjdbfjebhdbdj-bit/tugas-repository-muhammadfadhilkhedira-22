print("=======================================")
print("         HALAMAN LOGIN - FLEXCALC      ")
print("=======================================")

username = input("Masukkan Username : ")
password = input("Masukkan Password : ")

if username == "admin" and password == "12345":

    print("\n[SUCCESS] Login berhasil! Selamat datang,", username, "!!!")
    print("=======================================\n")

    print("=======================================")
    print("      INPUT TARGET & KEMAMPUAN         ")
    print("=======================================")

    target_kalori = float(input("Masukkan target kalori harian (kcal) : "))
    kalori_sarapan = float(input("Masukkan kalori sarapan (kcal)       : "))
    kalori_siang = float(input("Masukkan kalori makan siang (kcal)   : "))
    
    set_rutin = int(input("\nBerapa set push-up rutin kamu?       : "))
    rep_per_set = int(input("Berapa repetisi push-up per set?     : "))
    
    target_pullup = int(input("\nMasukkan target total pull-up hari ini: "))
    kemampuan_max = int(input("Batas maksimal pull-up per 1 set     : "))
    
    total_kalori_masuk = kalori_sarapan + kalori_siang
    
    sisa_kalori = target_kalori - total_kalori_masuk
    
    total_pushup = set_rutin * rep_per_set
    
    estimasi_set_pullup = target_pullup // kemampuan_max
    
    sisa_pullup_terakhir = target_pullup % kemampuan_max
 
    print("\n=======================================")
    print("        RINGKASAN LATIHAN HARI INI     ")
    print("=======================================")
    print("Pengguna Akun          :", username)
    print("Total Kalori Masuk     :", total_kalori_masuk, "kcal")
    print("Sisa Target Kalori     :", sisa_kalori, "kcal")
    print("Total Push-up Rutin    :", total_pushup, "repetisi")
    print("Estimasi Set Pull-up   :", estimasi_set_pullup, "set")
    print("Sisa Pull-up Set Akhir :", sisa_pullup_terakhir, "repetisi")
    print("=======================================")

else :
    print("Password yang Anda Masukan Salah")