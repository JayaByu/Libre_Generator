## task name

Tone (Forensic, Baby)

## task description

Ha! Sepertinya orang ini lupa mematikan streaming videonya dan memasukkan kata sandi di ponselnya! 

[youtu.be/11k0n7TOYeM](https://youtu.be/11k0n7TOYeM)

## solution

Deskripsi tugas tidak menyisakan ruang untuk pertanyaan - dalam video Anda dapat dengan jelas mendengar seorang pria mengetik sesuatu di teleponnya dan membuat beberapa bunyi bip saat menekan tombol. bip ini adalah nada sinyal keypad DTFM yang terkait dengan tombol yang berbeda. Ternyata bunyi bip ini dapat dengan mudah diidentifikasi dan diterjemahkan dengan mencocokkannya ke frekuensi yang sesuai seperti yang pertama kali diuraikan dalam makalah oleh Liu pada tahun 2012.

Untuk melihat spektogram dengan frekuensi dengan jelas, pertama-tama kita perlu mendapatkan audio dari video dan mengubahnya menjadi PCM (modulasi kode-pulsa) bertanda 24 bit mono wav. 

```
youtube-dl https://youtu.be/11k0n7TOYeM 

ffmpeg -i twitch_saved_video_clip_@thesecretguy98191_2019-07-20-11k0n7TOYeM.mp4 -vn -acodec pcm_s24le -ar 44100 -ac 1 output.wav
```

Setelah file siap, kita dapat membukanya di Audacity, mengubah mode tampilan ke Spectogram dan mengubah skala menjadi 650 Hz sebagai frekuensi minimum dan 1700 Hz sebagai frekuensi maksimum sehingga kita dapat lebih baik melihat frekuensi untuk setiap penekanan tombol. 

![imgAdd](https://raw.githubusercontent.com/ianknives/ctfwriteups/master/Cybrics%20CTF%202019/Tone/audacity_settings.png)

![imgAdd](https://raw.githubusercontent.com/ianknives/ctfwriteups/master/Cybrics%20CTF%202019/Tone/audacity.png)

Ini akan terlihat seperti ini di Audacity. Apa yang dapat Anda lakukan selanjutnya adalah membandingkan secara manual setiap penekanan tombol dengan tabel frekuensi di kertas oleh Liu, atau Anda dapat memilih cara peretas dan mencoba mengatur sesuatu untuk mengkategorikan dan mengidentifikasi frekuensi untuk Anda.

Saya memilih pendekatan manual terlebih dahulu dan mengidentifikasi semua nada, yang memberi saya serangkaian angka yang panjang. 

```
222999227774442227777777733222777338866666255533355524
```

Saya ingin memeriksa ulang hasilnya dan juga mendapatkan beberapa alat baru, jadi saya mencoba menggunakan beberapa alat yang tersedia di Github, tetapi tidak dapat mencapai hasil yang konsisten.

Apa yang berhasil bagi saya adalah aplikasi iPhone bernama DTMFdecode yang mengidentifikasi nada dengan cukup baik dan memberi saya kesempatan untuk memeriksa ulang apa yang saya parsing secara manual. Anda dapat melihat pada tangkapan layar di bawah bahwa hanya ada kesalahan kecil dalam pengenalan untuk aplikasi ini. 

![imgAdd](https://raw.githubusercontent.com/ianknives/ctfwriteups/master/Cybrics%20CTF%202019/Tone/decoder_app.jpg)

Dengan melihat deretan angka, Anda mungkin telah menyadari bahwa hanya angka dari 2 hingga 9 yang muncul, yang menunjukkan fakta bahwa angka-angka ini mewakili huruf yang dapat Anda lihat di papan tombol ponsel Anda, misalnya A, B, dan C menjadi di bawah 2 kunci.

Ini berarti bahwa 222 mungkin singkatan dari C, atau misalnya B dan A dan secara umum itu adalah sesuatu yang disebut Multi-tap Cipher (SMS Mode ABC). Mencari situs dekoder, saya dapat menemukannya di sini dan menempelkan angka memberi kita string berikut. 

```
CYBRICSSECREUONALFLAG
```

Saya mencoba bruteforcing lebih banyak untuk kemungkinan kombinasi lain setelah bagian CYBRICS yang ditebak dengan benar. 

![imgAdd](https://raw.githubusercontent.com/ianknives/ctfwriteups/master/Cybrics%20CTF%202019/Tone/decoder.png)

SECRETTONA di sini terlihat seperti yang kami cari, yang menjadikan seluruh string sebagai berikut: 

```
CYBRICSSECRETTONALFLAG
```
