# <center>Doğu Karadeniz Plaka Ödevi</center>

Verilen dosyadan plakaları ve şehir isimlerini okuyarak istenilen plakanın hangi şehire ait olduğunu bulan bir projedir.

## Proje Gereksinimleri

### Kod derleme araçları

```
gcc
```

## Desteklenen İşletim Sistemleri

- Windows
- Linux

## El ile Koşturma

### Windows

```
./dogukaradeniz.exe
```

### Linux

```
./dogukaradeniz.o
```

## El ile Derleme

### Gereksinimleri İndirme

#### Fedora

```
sudo dnf install gcc
```

#### Ubuntu

```
sudo apt-get install gcc
```

#### Windows

```
Mingw64-gcc
```

### Kodu Derleme

#### Windows
```
gcc -o dogukaradeniz.exe dogukaradeniz.c
```

#### Windows
```
gcc -o dogukaradeniz.o dogukaradeniz.c
```

## Dosya Formatı

Örnek dosya formatı

```
(Plaka Kodu) (Şehrin adı)
(Plaka Kodu) (Şehrin adı)
(Plaka Kodu) (Şehrin adı)
(Plaka Kodu) (Şehrin adı)
```

## Dikkat Edilmesi Gerekenler

- Şehir adı girerken Türkçe karakter kullanmayın.
