/****************************************************************************
**				        	SAKARYA �N�VERS�TES�
**			         B�LG�SAYAR VE B�L���M B�L�MLER� FAK�LTES�
**				     B�LG�SAYAR M�HEND�SL��� B�L�M�
**				     PROGRAMLAMAYA G�R��� DERS�
**
**				PROJE NUMARASI�...: 1 
**				��RENC� ADI...............: UMUT ARDA VURAL
**				��RENC� NUMARASI.: B231210081
**				DERS GRUBU����: A 
****************************************************************************/


#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>

using namespace std;

class tak�m {

private:

public:
    string Tak�mad�;
    string Tak�mba�kan�ad�;
    string Tak�maderesi;
    int Tak�mno;
    int Oyuncusay�s�;



    ~tak�m() {

    }


    void  tak�mbilgigirme(int tak�mno1) {


        cout << "Tak�m ad�n� giriniz : ";
        cin >> Tak�mad�; cout << endl;
        cout << "Tak�m ba�kan� ad� giriniz : ";
        cin >> Tak�mba�kan�ad�;  cout << endl;

        cout << "Tak�m adresi giriniz : ";
        cin >> Tak�maderesi;  cout << endl;
        Tak�mno = tak�mno1;
        cout << "tak�m no : " << Tak�mno; cout << endl;


        cout << "Tak�mdaki oyuncu say�s�n� giriniz : ";
        cin >> Oyuncusay�s�;  cout << endl;


    }

    void tak�mbilgide�i�tirme(int tak�mno1) {
        cout << "Tak�m ad�n� giriniz : ";
        cin >> Tak�mad�; cout << endl;
        cout << "Tak�m ba�kan� ad� giriniz : ";
        cin >> Tak�mba�kan�ad�;  cout << endl;

        cout << "Tak�m adresi giriniz : ";
        cin >> Tak�maderesi;  cout << endl;
        Tak�mno = tak�mno1;
        cout << "tak�m no : " << Tak�mno; cout << endl;


        cout << "Tak�mdaki oyuncu say�s�n� giriniz : ";
        cin >> Oyuncusay�s�;  cout << endl;

    }
};
class futbolcu {

private:
    string Ad�;
    string Soyad�;
    string Oyundakimevkisi;
    int Piyasade�eri;
    int maa��;
    int Lisansno;
    int Do�utarihi;
    int TCNO;
    int oyuncutak�mno;




public:
    void futbolcubilgigirme(int oyuncuno1) {

    }

    void futbolcubilgide�i�tirme(int oyuncuno1) {

    }


};




int main() {

    setlocale(LC_ALL, "Turkish");

a: // dosyalar�n bidaha a��lmas� i�in ba�a d�n�l�r 

    //  tak�m dosyas� i�in gerekli i�lemnler //
    ofstream tak�mdosya;
    tak�mdosya.open("tak�mdosya.txt", ios::app);
    ifstream Dosyaoku("tak�mdosya.txt");
    ofstream Dosyayaz("Gecici.txt");



    // sadece futbolcular�n oldu�u tak�mnolar� burda kaydedilir 
    ofstream futbolcu;
    futbolcu.open("futbolcu.txt", ios::app);
    ifstream Dosyaoku1("futbolcu.txt");
    ofstream Dosyayaz1("Gecici1.txt");

    // ma� i�lemleri ve ilk 11 ler kay�tlar� 
    ofstream ma�kay�t;
    ma�kay�t.open("ma�kay�t.txt", ios::app);
    ifstream Dosyaoku2("ma�kay�t.txt");
    ofstream Dosyayaz2("Gecici2.txt");

    // puan durumu i�in 
    ofstream puandurumu;
    puandurumu.open("puandurumu.txt", ios::app);
    ifstream Dosyaoku3("puandurumu.txt");
    ofstream Dosyayaz3("Gecici3.txt");


    // oyn�yan oyuncu kayd� i�in 
    ofstream ilk11kay�t;
    ilk11kay�t.open("ilk11kay�t.txt", ios::app);
    ifstream Dosyaoku4("ilk11kay�t.txt");
    ofstream Dosyayaz4("Gecici4.txt");

    // gol atan oyuncular i�in 
    ofstream golkay�t;
    golkay�t.open("golkay�t.txt", ios::app);
    string golatan;

    // de�i�iklik i�in kay�t 
    ofstream de�i�iklikkay�t;
    de�i�iklikkay�t.open("de�i�iklikkay�t.txt", ios::app);
    string de�i�enoyuncu;

    string Tak�mad�;
    string Tak�mba�kan�ad�;
    string Tak�maderesi;
    int Tak�mno;
    int Oyuncusay�s�;

    /// futbolcu bilgileri //
    string futbolcuad�;
    string futbolcusoyad�;
    int futbolculisansno;
    string mevkisi;
    string maa�;
    string piyasade�eri;
    int ay;
    int g�n;
    int y�l;
    int oyuncutak�mno;
    int lisansnokontrol, puan;

    string evtak�m, deplasmantak�m;
    double evtak�mskor, deplasmantakk�mskor;

    tak�m tak�m1, tak�m2, tak�m3, tak�m4, tak�m5, tak�m6;

    string tak�mad�iste;
    int tak�mnoal, tak�mnokontrolal;
    int �e�im;
    int n, m, k;
    int tak�mnokontrol, secimma�i�lemleri, secimma�i�lemleri1, secimma�i�lemleri2, secimma�i�lemleri3;
    bool durum = true; int a; int b;
    string oyuncu1 , oyuncu2 , oyuncu3 , oyuncu4, oyuncu5, oyuncu6, oyuncu7, oyuncu8, oyuncu9, oyuncu10,oyuncu11, oyuncu12, oyuncu13, oyuncu14, oyuncu15, oyuncu16, oyuncu17, oyuncu18, oyuncu19, oyuncu20, oyuncu21, oyuncu22;


    while (durum) {
        do {

            cout << "1. Tak�m ��lemleri" << endl;
            cout << "2. Futbolcu i�lemlerri " << endl;
            cout << "3. Ma� i�lemleri  i�lemlerri " << endl;
            cout << "4. Ugulamay� kapat" << endl;
            cout << "------------------------------------------------" << endl;
            cout << "Se�im ; ";

            cin >> �e�im;
            cout << endl;



        } while (�e�im < 1 or �e�im>4);

        switch (�e�im)
        {


        case 1: {

            while (durum) {
                cout << "1. Tak�m Olu�turma ve dosyaya yazma" << endl;
                cout << "2. Tak�m Sil ve dosyadan silme " << endl;
                cout << "3. Tak�mdaki Futbolcular� Listeleme " << endl;
                cout << "4. Tak�mdaki Bir Futbolcuyu D�zenleme  " << endl;
                cout << "5. Ana men�ye ��k�� " << endl;
                cout << "------------------------------------------------" << endl;
                cout << "Se�im:" << endl;
                cin >> n;
                switch (n) {
                case 1:
                    do
                    {

                        cout << "Tak�m olu�turma ( 1 ile 6 aras�nda bir say� girmeniz la�zm )" << endl;

                        cout << "Ka� numaral� tak�m� olu�turmak istiyorsunuz : ";
                        m = 0;
                        cin >> m;
                    } while (m > 6 or m < 0);
                    if (m == 1) {
                        tak�m1.tak�mbilgigirme(1);
                        Tak�mad� = tak�m1.Tak�mad�; Tak�mba�kan�ad� = tak�m1.Tak�mba�kan�ad�; Tak�maderesi = tak�m1.Tak�maderesi; Tak�mno = tak�m1.Tak�mno; Oyuncusay�s� = tak�m1.Oyuncusay�s�;

                        tak�mdosya << Tak�mad� << ' ' << Tak�mba�kan�ad� << ' ' << Tak�maderesi << ' ' << Tak�mno << ' ' << Oyuncusay�s� << endl;
                        cout << endl;
                    }
                    else if (m == 2) {
                        tak�m2.tak�mbilgigirme(2); Tak�mad� = tak�m2.Tak�mad�; Tak�mba�kan�ad� = tak�m2.Tak�mba�kan�ad�; Tak�maderesi = tak�m2.Tak�maderesi; Tak�mno = tak�m2.Tak�mno; Oyuncusay�s� = tak�m2.Oyuncusay�s�; tak�mdosya << Tak�mad� << ' ' << Tak�mba�kan�ad� << ' ' << Tak�maderesi << ' ' << Tak�mno << ' ' << Oyuncusay�s� << endl;
                    }
                    else if (m == 3) {
                        tak�m3.tak�mbilgigirme(3);    Tak�mad� = tak�m3.Tak�mad�; Tak�mba�kan�ad� = tak�m3.Tak�mba�kan�ad�; Tak�maderesi = tak�m3.Tak�maderesi; Tak�mno = tak�m3.Tak�mno; Oyuncusay�s� = tak�m3.Oyuncusay�s�; tak�mdosya << Tak�mad� << ' ' << Tak�mba�kan�ad� << ' ' << Tak�maderesi << ' ' << Tak�mno << ' ' << Oyuncusay�s� << endl;
                    }
                    else if (m == 4) {
                        tak�m4.tak�mbilgigirme(4);    Tak�mad� = tak�m4.Tak�mad�; Tak�mba�kan�ad� = tak�m4.Tak�mba�kan�ad�; Tak�maderesi = tak�m4.Tak�maderesi; Tak�mno = tak�m4.Tak�mno; Oyuncusay�s� = tak�m4.Oyuncusay�s�; tak�mdosya << Tak�mad� << ' ' << Tak�mba�kan�ad� << ' ' << Tak�maderesi << ' ' << Tak�mno << ' ' << Oyuncusay�s� << endl;
                    }
                    else if (m == 5) {
                        tak�m5.tak�mbilgigirme(5);   Tak�mad� = tak�m5.Tak�mad�; Tak�mba�kan�ad� = tak�m5.Tak�mba�kan�ad�; Tak�maderesi = tak�m5.Tak�maderesi; Tak�mno = tak�m5.Tak�mno; Oyuncusay�s� = tak�m5.Oyuncusay�s�; tak�mdosya << Tak�mad� << ' ' << Tak�mba�kan�ad� << ' ' << Tak�maderesi << ' ' << Tak�mno << ' ' << Oyuncusay�s� << endl;
                    }
                    else if (m == 6) {
                        tak�m6.tak�mbilgigirme(6);  Tak�mad� = tak�m6.Tak�mad�; Tak�mba�kan�ad� = tak�m6.Tak�mba�kan�ad�; Tak�maderesi = tak�m6.Tak�maderesi; Tak�mno = tak�m6.Tak�mno; Oyuncusay�s� = tak�m6.Oyuncusay�s�; tak�mdosya << Tak�mad� << ' ' << Tak�mba�kan�ad� << ' ' << Tak�maderesi << ' ' << Tak�mno << ' ' << Oyuncusay�s� << endl;
                    }


                    break;
                case 2:
                    do {
                        cout << "ka� numaral� Tak�m silinsin istiyorsan�z o tak�m�n numaras�n� yaz�n�z; " << endl;
                        cin >> tak�mnokontrol;
                    } while (tak�mnokontrol < 0 or tak�mnokontrol>6);

                    while (Dosyaoku >> Tak�mad� >> Tak�mba�kan�ad� >> Tak�maderesi >> Tak�mno >> Oyuncusay�s�)
                    {


                        if (tak�mnokontrol == Tak�mno) {

                            cout << " Numaral�  tak�m�n silme i�lemi ba�ar�l� ";


                        }
                        else
                            Dosyayaz << Tak�mad� << ' ' << Tak�mba�kan�ad� << ' ' << Tak�maderesi << ' ' << Tak�mno << ' ' << Oyuncusay�s� << endl;

                    }
                    cout << endl;
                    Dosyayaz.close();
                    Dosyaoku.close();
                    tak�mdosya.close();
                    remove("tak�mdosya.txt");
                    rename("Gecici.txt", "tak�mdosya.txt");

                    goto a;
                   
                    break;


                case 3:
                    do {
                        cout << "Tak�mdaki futbolcular� listeleme " << endl; cout << "Ka� numaral� tak�mdaki futbolcular� g�rmek istiyorunsunz : ";
                        cin >> tak�mnokontrolal;
                    } while (tak�mnokontrolal > 6 or tak�mnokontrolal < 0);
                    while (Dosyaoku1 >> futbolcuad� >> futbolcusoyad� >> futbolculisansno >> mevkisi >> maa� >> piyasade�eri >> g�n >> ay >> y�l >> oyuncutak�mno)
                    {
                        

                        if (tak�mnokontrolal == oyuncutak�mno) {
                            cout << "----------------------------------------------------------------" << endl;
                            cout << "Futbolcu ad� : " << futbolcuad� << endl;
                            cout << "Futbolcu soyad� :" << futbolcusoyad� << endl;
                            cout << "Futbolcu lisansno : " << futbolculisansno << endl;
                            cout << "Futbolcu mevkisi : " << mevkisi << endl;
                            cout << "Futbolcu maa�� : " << maa� << endl;
                            cout << "Futbolcu piyasade�eri : " << piyasade�eri << endl;
                            cout << "Futbolcu do�um tarihi : " << g�n << "." << ay << "." << y�l << endl;
                            cout << "----------------------------------------------------------------" << endl;

                        }


                    }

                    goto a;
                    break;
                case 4:

                    cout << "Tak�mdaki bir futbolcuyu d�zenleme" << endl;
                    cout << "Hnagi futbolcuyu d�zenlemek istiyorsan�z onun lisansnosunu giriniz : ";
                    cin >> lisansnokontrol;

                    while (Dosyaoku1 >> futbolcuad� >> futbolcusoyad� >> futbolculisansno >> mevkisi >> maa� >> piyasade�eri >> g�n >> ay >> y�l >> oyuncutak�mno)
                    {

                        if (lisansnokontrol == futbolculisansno) {
                            cout << "G�ncellemek istedi�iniz Futbolcunun yeni ad�n� giriniz : ";
                            cin >> futbolcuad�; cout << endl;
                            cout << "G�ncellemek istedi�iniz Futbolcunun yeni soyad�n� giriniz : ";
                            cin >> futbolcusoyad�;  cout << endl;
                            cout << "G�ncellemek istedi�iniz Futbolcunun yeni lisansno giriniz : ";
                            cin >> futbolculisansno;  cout << endl;
                            cout << "G�ncellemek istedi�iniz Futbolcunun yeni mevkisini giriniz : ";
                            cin >> mevkisi;  cout << endl;
                            cout << "G�ncellemek istedi�iniz Futbolcunun yeni maa��n� giriniz (TL C�NS�NDEN) : ";
                            cin >> maa�;   cout << endl;
                            cout << "G�ncellemek istedi�iniz Futbolcunun yeni piyasa de�erini giriniz (TL C�NS�NDEN) : ";
                            cin >> piyasade�eri;  cout << endl;
                            do
                            {
                                cout << "G�ncellemek istedi�iniz Futbolcunun do�um g�n�n g�n k�sm�n� giriniz (0 ile 31 aras�nda olmas� laz�m (olmad��� takitrde d�ng�ye tekrar girilcek) ) : ";
                                cin >> g�n;  cout << endl;
                                cout << "G�ncellemek istedi�iniz Futbolcunun do�um g�n�n ay k�sm�n� giriniz (0 ile 12 aras�nda olmas� laz�m (olmad��� takitrde d�ng�ye tekrar girilcek)  ) : ";
                                cin >> ay;  cout << endl;
                                cout << "G�ncellemek istedi�iniz Futbolcunun do�um g�n�n y�l k�sm�n� giriniz  : ";
                                cin >> y�l;  cout << endl;
                            } while ((g�n > 31 or g�n < 0) || (ay > 12 or ay < 0));

                            Dosyayaz1 << futbolcuad� << ' ' << futbolcusoyad� << ' ' << futbolculisansno << ' ' << mevkisi << ' ' << maa� << ' ' << piyasade�eri << ' ' << g�n << ' ' << ay << ' ' << y�l << ' ' << oyuncutak�mno << endl;

                        }
                        else
                            Dosyayaz1 << futbolcuad� << ' ' << futbolcusoyad� << ' ' << futbolculisansno << ' ' << mevkisi << ' ' << maa� << ' ' << piyasade�eri << ' ' << g�n << ' ' << ay << ' ' << y�l << ' ' << oyuncutak�mno << endl;

                    }
                    cout << endl;
                    Dosyayaz1.close();
                    Dosyaoku1.close();
                    futbolcu.close();
                    remove("futbolcu.txt");
                    rename("Gecici1.txt", "futbolcu.txt");

                    goto a;

                    break;
                case 5:
                    cout << "Geri ��k�� se�ildi" << endl;
                    goto a;
                    break;
                default:
                    cout << "Hi�biri se�ilmedi" << endl;
                }
            }
        }case 2: {
            while (durum) {
                cout << "Oyuncu Men�s�  " << endl;
                cout << "1. Oyuncu olu�turma" << endl;
                cout << "2. Oyuncu silme" << endl;
                cout << "3. Oyuncu G�ncelleme" << endl;
                cout << "4. Oyuncu Listeleme" << endl;
                cout << "5. Geri d�n��  " << endl;
                cout << "------------------------------------------------" << endl;
                cout << "Se�im: ";
                do { cin >> n; } while (n > 5 or n < 1);
                switch (n) {
                case 1: {

                    cout << "1. Oyuncu olu�turma �e�ildi " << endl;
                    cout << "Kaydetmek istedi�iniz Futbolcunun ad�n� giriniz : ";
                    cin >> futbolcuad�; cout << endl;
                    cout << "Kaydetmek istedi�iniz Futbolcunun soyad�n� giriniz : ";
                    cin >> futbolcusoyad�;  cout << endl;
                    cout << "Kaydetmek istedi�iniz Futbolcunun lisansno giriniz : ";
                    cin >> futbolculisansno;  cout << endl;
                    cout << "Kaydetmek istedi�iniz Futbolcunun mevkisini giriniz : ";
                    cin >> mevkisi;  cout << endl;
                    cout << "Kaydetmek istedi�iniz Futbolcunun maa��n� giriniz (TL C�NS�NDEN) : ";
                    cin >> maa�;   cout << endl;
                    cout << "Kaydetmek istedi�iniz Futbolcunun piyasa de�erini giriniz (TL C�NS�NDEN) : ";
                    cin >> piyasade�eri;  cout << endl;
                    do
                    {
                        cout << "Kaydetmek istedi�iniz Futbolcunun do�um g�n�n g�n k�sm�n� giriniz (0 ile 31 aras�nda olmas� laz�m (olmad��� takitrde d�ng�ye tekrar girilcek) ) : ";
                        cin >> g�n;  cout << endl;
                        cout << "Kaydetmek istedi�iniz Futbolcunun do�um g�n�n ay k�sm�n� giriniz (0 ile 12 aras�nda olmas� laz�m (olmad��� takitrde d�ng�ye tekrar girilcek)  ) : ";
                        cin >> ay;  cout << endl;
                        cout << "Kaydetmek istedi�iniz Futbolcunun do�um g�n�n y�l k�sm�n� giriniz  : ";
                        cin >> y�l;  cout << endl;
                    } while ((g�n > 31 or g�n < 0) || (ay > 12 or ay < 0));

                    do {
                        cout << "Oyuncuyu hangi tak�ma kaydetmek istiyorsan�z numaras�n� giriniz ";
                        cin >> oyuncutak�mno;
                    } while (oyuncutak�mno > 6 or oyuncutak�mno < 0);


                    futbolcu << futbolcuad� << ' ' << futbolcusoyad� << ' ' << futbolculisansno << ' ' << mevkisi << ' ' << maa� << ' ' << piyasade�eri << ' ' << g�n << ' ' << ay << ' ' << y�l << ' ' << oyuncutak�mno << endl;



                    goto a;
                    cout << endl;
                    break;
                }
                case 2: {
                    cout << "2. Oyuncu Silme �e�ilme" << endl;
                    cout << "Silmek istedi�iniz futbolcunun lisansnosunu giriniz : ";
                    cin >> lisansnokontrol; cout << endl;
                    while (Dosyaoku1 >> futbolcuad� >> futbolcusoyad� >> futbolculisansno >> mevkisi >> maa� >> piyasade�eri >> g�n >> ay >> y�l >> oyuncutak�mno)
                    {

                        if (lisansnokontrol == futbolculisansno) {

                            cout << " silme i�lemi ba�ar�l� ";


                        }
                        else {
                            Dosyayaz1 << futbolcuad� << ' ' << futbolcusoyad� << ' ' << futbolculisansno << ' ' << mevkisi << ' ' << maa� << ' ' << piyasade�eri << ' ' << g�n << ' ' << ay << ' ' << y�l << ' ' << oyuncutak�mno << endl;
                        }

                    }
                    cout << endl;
                    Dosyayaz1.close();
                    Dosyaoku1.close();
                    futbolcu.close();
                    remove("futbolcu.txt");
                    rename("Gecici1.txt", "futbolcu.txt");

                    cout << endl;

                    goto a;
                    break;

                }
                case 3: {
                    cout << "3. Oyuncu G�ncelleme �e�ildi " << endl;
                    cout << "Hnagi futbolcuyu d�zenlemek istiyorsan�z onun lisansnosunu giriniz : ";
                    cin >> lisansnokontrol;
                    cout << endl;
                    while (Dosyaoku1 >> futbolcuad� >> futbolcusoyad� >> futbolculisansno >> mevkisi >> maa� >> piyasade�eri >> g�n >> ay >> y�l >> oyuncutak�mno)
                    {

                        if (lisansnokontrol == futbolculisansno) {
                            cout << "G�ncellemek istedi�iniz Futbolcunun yeni ad�n� giriniz : ";
                            cin >> futbolcuad�; cout << endl;
                            cout << "G�ncellemek istedi�iniz Futbolcunun yeni soyad�n� giriniz : ";
                            cin >> futbolcusoyad�;  cout << endl;
                            cout << "G�ncellemek istedi�iniz Futbolcunun yeni lisansno giriniz : ";
                            cin >> futbolculisansno;  cout << endl;
                            cout << "G�ncellemek istedi�iniz Futbolcunun yeni  mevkisini giriniz : ";
                            cin >> mevkisi;  cout << endl;
                            cout << "G�ncellemek istedi�iniz Futbolcunun yeni maa��n� giriniz (TL C�NS�NDEN) : ";
                            cin >> maa�;   cout << endl;
                            cout << "G�ncellemek istedi�iniz Futbolcunun yeni piyasa de�erini giriniz (TL C�NS�NDEN) : ";
                            cin >> piyasade�eri;  cout << endl;
                            do
                            {
                                cout << "G�ncellemek istedi�iniz Futbolcunun do�um g�n�n g�n k�sm�n� giriniz (0 ile 31 aras�nda olmas� laz�m (olmad��� takitrde d�ng�ye tekrar girilcek) ) : ";
                                cin >> g�n;  cout << endl;
                                cout << "G�ncellemek istedi�iniz Futbolcunun do�um g�n�n ay k�sm�n� giriniz (0 ile 12 aras�nda olmas� laz�m (olmad��� takitrde d�ng�ye tekrar girilcek)  ) : ";
                                cin >> ay;  cout << endl;
                                cout << "G�ncellemek istedi�iniz Futbolcunun do�um g�n�n y�l k�sm�n� giriniz  : ";
                                cin >> y�l;  cout << endl;
                            } while ((g�n > 31 or g�n < 0) || (ay > 12 or ay < 0));

                            Dosyayaz1 << futbolcuad� << ' ' << futbolcusoyad� << ' ' << futbolculisansno << ' ' << mevkisi << ' ' << maa� << ' ' << piyasade�eri << ' ' << g�n << ' ' << ay << ' ' << y�l << ' ' << oyuncutak�mno << endl;

                        }
                        else
                            Dosyayaz1 << futbolcuad� << ' ' << futbolcusoyad� << ' ' << futbolculisansno << ' ' << mevkisi << ' ' << maa� << ' ' << piyasade�eri << ' ' << g�n << ' ' << ay << ' ' << y�l << ' ' << oyuncutak�mno << endl;

                    }
                    cout << endl;
                    Dosyayaz1.close();
                    Dosyaoku1.close();
                    futbolcu.close();
                    remove("futbolcu.txt");
                    rename("Gecici1.txt", "futbolcu.txt");



                    goto a;
                    cout << endl;
                    break;

                }
                case 4: {                cout << "4. Oyuncu Listeleme" << endl;
                    cout << "!!!Tak�m no s�f�r olmas� oyuncunu hi� bir tak�ma kay�tl� olmad���n� belitir !!!" << endl << endl;

                    while (Dosyaoku1 >> futbolcuad� >> futbolcusoyad� >> futbolculisansno >> mevkisi >> maa� >> piyasade�eri >> g�n >> ay >> y�l >> oyuncutak�mno)
                    {

                        cout << "Futbolcu ad�          : " << futbolcuad� << endl;
                        cout << "Futbolcu soyad�       : " << futbolcusoyad� << endl;
                        cout << "Futbolcu lisansno     : " << futbolculisansno << endl;
                        cout << "Futbolcu mevkisi      : " << mevkisi << endl;
                        cout << "Futbolcu maa��        : " << maa� << endl;
                        cout << "Futbolcu piyasade�eri : " << piyasade�eri << endl;
                        cout << "Futbolcu do�um tarihi : " << g�n << "." << ay << "." << y�l << endl;
                        cout << "Futbolcu tak�m no     :  " << oyuncutak�mno;
                        cout << endl << "-------------------------------------------------------------------------" << endl;


                    }


                    goto a;
                    cout << endl;
                    break;

                }
                case 5: {
                    cout << "��k�� se�ildi" << endl << endl;
                    goto a;

                }

                }
        case 3: { cout << "Ma� i�lemleri " << endl;

            do {
                cout << "Ma� i�lemlerinde ne yapmak istyorsunuz " << endl;

                cout << "1. Haftal�k ma� kay�t i�lemleri    :" << endl;
                cout << "2. G�ncel puan durumu g�rme        :" << endl;
                cout << "3. T�m ge�mi� kar��la�ma kay�tlar� :" << endl;
                cout << "4. Geri d�n��  " << endl;
                cout << "�e�im ; ";
                cin >> secimma�i�lemleri;

            } while (secimma�i�lemleri > 4 or secimma�i�lemleri < 0);



            if (secimma�i�lemleri == 1) {
                do {
                    cout << "�lk haftay� m� kay�t yapmak istiyorsunuz (ilk haftay� kay�t yapmadan ilerki haftalara kay�t yapt�rmay�n�z ) " << "   �e�iminiz evet ise 1 hay�r ise 2 bas�n�z : ";
                    cin >> secimma�i�lemleri1;
                } while (secimma�i�lemleri1 < 0 or secimma�i�lemleri1>2);

                // ligte hak kazanan 6 tak�m�n ismini al�caz 

                if (secimma�i�lemleri1 == 1) {
                    cout << "Ligte oynamaya hak kazanan 6 tak�m�n ad�n� giriceksiniz " << endl;
                    for (int r = 1; r <= 6; r++) {
                        cout << r << ". Tak�m�n ad�n� giriniz : ";  cin >> tak�mad�iste;
                        cout << endl << endl; puan = 0;
                        puandurumu << tak�mad�iste << ' ' << puan << endl;

                    }
                    cout << "Ma� sonu�lar� giriceksiniz puan durumu otamatik olarak g�ncellenicek " << endl;



                    cout << "Ev sahibi tak�m�n ad�n� giriniz     : "; cin >> evtak�m;                             cout << endl;
                    cout << "Ev sahibi tak�m�n skorunu giriniz   : "; cin >> evtak�mskor;                         cout << endl;
                    cout << "Deplesman tak�m�n�n ad�n� giriniz   : "; cin >> deplasmantak�m;                      cout << endl;
                    cout << "Deplasman tak�m�n�n skoronu giriniz : "; cin >> deplasmantakk�mskor;                 cout << endl;

                    ma�kay�t << evtak�m << " " << evtak�mskor << "  " << deplasmantak�m << " " << deplasmantakk�mskor << endl;

                   


                    if (evtak�mskor > deplasmantakk�mskor) {
                        while (Dosyaoku3 >> tak�mad�iste >> puan) {
                            if (evtak�m == tak�mad�iste) {
                                puan = puan + 3;
                                Dosyayaz3 << tak�mad�iste << ' ' << puan << endl;
                            }
                            else
                                Dosyayaz3 << tak�mad�iste << ' ' << puan << endl;


                        }
                        Dosyaoku3.close();
                        Dosyayaz3.close();
                        puandurumu.close();
                        remove("puandurumu.txt");
                        rename("Gecici3.txt", "puandurumu.txt");           puandurumu.open("puandurumu.txt", ios::app);     ifstream Dosyaoku3("puandurumu.txt");
                        ofstream Dosyayaz3("Gecici3.txt");




                    }
                    else if (evtak�mskor < deplasmantakk�mskor) {
                        while (Dosyaoku3 >> tak�mad�iste >> puan) {
                            if (deplasmantak�m == tak�mad�iste) {
                                puan = puan + 3;
                                Dosyayaz3 << tak�mad�iste << ' ' << puan << endl;
                            }
                            else {
                                Dosyayaz3 << tak�mad�iste << ' ' << puan << endl;
                            }

                        }
                        Dosyaoku3.close();
                        Dosyayaz3.close();
                        puandurumu.close();
                        remove("puandurumu.txt");
                        rename("Gecici3.txt", "puandurumu.txt");           puandurumu.open("puandurumu.txt", ios::app);     ifstream Dosyaoku3("puandurumu.txt");

                        ofstream Dosyayaz3("Gecici3.txt");


                        

                    }
                    else if (evtak�mskor == deplasmantakk�mskor) {
                        while (Dosyaoku3 >> tak�mad�iste >> puan) {
                            if (evtak�m == tak�mad�iste) {
                                puan = puan + 1;
                                Dosyayaz3 << tak�mad�iste << ' ' << puan << endl;
                            }
                            else if (deplasmantak�m == tak�mad�iste) {
                                puan = puan + 1;
                                Dosyayaz3 << tak�mad�iste << ' ' << puan << endl;
                            }
                            else {
                                Dosyayaz3 << tak�mad�iste << ' ' << puan << endl;
                            }

                        }
                        Dosyaoku3.close();
                        Dosyayaz3.close();
                        puandurumu.close();
                        remove("puandurumu.txt");
                        rename("Gecici3.txt", "puandurumu.txt");          puandurumu.open("puandurumu.txt", ios::app);      ifstream Dosyaoku3("puandurumu.txt");

                        ofstream Dosyayaz3("Gecici3.txt");




                    }
                    // ilk 11 alma 
                    cout << "Ev sahibi tak�m�n ilk 11 giriclek "<<endl;
                    cout << "1. oyuncuyu giriniz ";
                    cin >> oyuncu1; cout << endl;
                    cout << "2. oyuncuyu giriniz ";
                    cin >> oyuncu2; cout << endl;
                    cout << "3. oyuncuyu giriniz ";
                    cin >> oyuncu3; cout << endl;
                    cout << "4. oyuncuyu giriniz ";
                    cin >> oyuncu4; cout << endl;
                    cout << "5. oyuncuyu giriniz ";
                    cin >> oyuncu5; cout << endl;
                    cout << "6. oyuncuyu giriniz ";
                    cin >> oyuncu6; cout << endl;
                    cout << "7. oyuncuyu giriniz ";
                    cin >> oyuncu7; cout << endl;
                    cout << "8. oyuncuyu giriniz ";
                    cin >> oyuncu8; cout << endl;
                    cout << "9. oyuncuyu giriniz ";
                    cin >> oyuncu9; cout << endl;
                    cout << "10. oyuncuyu giriniz ";
                    cin >> oyuncu10; cout << endl;
                    cout << "11. oyuncuyu giriniz ";
                    cin >> oyuncu11; cout << endl;

                    cout << "Deplesman tak�m�n ilk 11 giriclek " << endl;
                    cout << "1. oyuncuyu giriniz ";
                    cin >> oyuncu12; cout << endl;
                    cout << "2. oyuncuyu giriniz ";
                    cin >> oyuncu13; cout << endl;
                    cout << "3. oyuncuyu giriniz ";
                    cin >> oyuncu13; cout << endl;
                    cout << "4. oyuncuyu giriniz ";
                    cin >> oyuncu14; cout << endl;
                    cout << "5. oyuncuyu giriniz ";
                    cin >> oyuncu16; cout << endl;
                    cout << "6. oyuncuyu giriniz ";
                    cin >> oyuncu17; cout << endl;
                    cout << "9. oyuncuyu giriniz ";
                    cin >> oyuncu20; cout << endl;
                    cout << "10. oyuncuyu giriniz ";
                    cin >> oyuncu21; cout << endl;
                    cout << "11. oyuncuyu giriniz ";
                    cin >> oyuncu22; cout << endl;

                    ilk11kay�t <<oyuncu1<<" "<< oyuncu2<<" "<< oyuncu3<<" "<< oyuncu4<<" "<< oyuncu5<<" "<< oyuncu6<<" "<< oyuncu7<<" "<< oyuncu8<<" "<< oyuncu9<<" "<< oyuncu10<<" "<< oyuncu11<<" "<< oyuncu12<<" " << oyuncu13<< " " << oyuncu14<<" "<< oyuncu15<<" "<< oyuncu16<<" "<< oyuncu17<<" "<< oyuncu18<<" "<< oyuncu19<< " " << oyuncu20 <<" "<<oyuncu21<<" "<<oyuncu22<<endl;


                    // gol kay�t ev sahibi tak�m 
                    for (int i = 1; i <= evtak�mskor; i++) {
                        cout << " Evsahibi tak�m�n " << i << ". gol�n� atan oyuncunu ad�n� giriniz ";

                        if (i == evtak�mskor) {
                            cin >> golatan;
                            golkay�t << golatan << endl;
                        }


                        else {
                            cin >> golatan;
                            golkay�t << golatan << "  ";
                        }
                    }



                    for (int i = 1; i <= deplasmantakk�mskor; i++) {
                        cout << " Deplesman tak�m�nn�n " << i << ". gol�n� atan oyuncunun ad�n� giriniz ";

                        if (i == deplasmantakk�mskor) {

                            cin >> golatan;
                            golkay�t << golatan << endl;
                        }

                        else {
                            cin >> golatan;
                            golkay�t << golatan << "  ";
                        }
                    }


                    // de�i�iklik kayd� 
                    cout << endl;
                    cout <<"De�i�iklik kayd� ";

                    for (int i = 1; i <= 6; i++)
                    {    
                        
                         if (i < 4) {
                             cout << "Ev sahibinde de�i�en "<< i <<". oyuncu giriniz ";
                             cin>>de�i�enoyuncu;
                        }

                         else {
                             cout << "Deplesman tak�m�nda  de�i�en " << i-3 << ". oyuncu giriniz ";
                             cin >> de�i�enoyuncu;
                         }
                    }



                    goto a;
                }
                else if (secimma�i�lemleri1 == 2) {
                    cout << "Ev sahibi tak�m�n ad�n� giriniz     : "; cin >> evtak�m;                             cout << endl;
                    cout << "Ev sahibi tak�m�n skorunu giriniz   : "; cin >> evtak�mskor;                         cout << endl;
                    cout << "Deplesman tak�m�n�n ad�n� giriniz   : "; cin >> deplasmantak�m;                      cout << endl;
                    cout << "Deplasman tak�m�n�n skoronu giriniz : "; cin >> deplasmantakk�mskor;                 cout << endl;

                    ma�kay�t << evtak�m << " " << evtak�mskor << " " << deplasmantak�m << "  " << deplasmantakk�mskor << endl;

                    // gol kay�t 

                    if (evtak�mskor > deplasmantakk�mskor) {
                        while (Dosyaoku3 >> tak�mad�iste >> puan) {
                            if (evtak�m == tak�mad�iste) {
                                puan = puan + 3;
                                Dosyayaz3 << tak�mad�iste << ' ' << puan << endl;
                            }
                            else
                                Dosyayaz3 << tak�mad�iste << ' ' << puan << endl;


                        }
                        Dosyaoku3.close();
                        Dosyayaz3.close();
                        puandurumu.close();
                        remove("puandurumu.txt");
                        rename("Gecici3.txt", "puandurumu.txt");           puandurumu.open("puandurumu.txt", ios::app);     ifstream Dosyaoku3("puandurumu.txt");
                        ofstream Dosyayaz3("Gecici3.txt");




                    }
                    else if (evtak�mskor < deplasmantakk�mskor) {
                        while (Dosyaoku3 >> tak�mad�iste >> puan) {
                            if (deplasmantak�m == tak�mad�iste) {
                                puan = puan + 3;
                                Dosyayaz3 << tak�mad�iste << ' ' << puan << endl;
                            }
                            else {
                                Dosyayaz3 << tak�mad�iste << ' ' << puan << endl;
                            }

                        }
                        Dosyaoku3.close();
                        Dosyayaz3.close();
                        puandurumu.close();
                        remove("puandurumu.txt");
                        rename("Gecici3.txt", "puandurumu.txt");           puandurumu.open("puandurumu.txt", ios::app);     ifstream Dosyaoku3("puandurumu.txt");

                        ofstream Dosyayaz3("Gecici3.txt");




                    }
                    else if (evtak�mskor == deplasmantakk�mskor) {
                        while (Dosyaoku3 >> tak�mad�iste >> puan) {
                            if (evtak�m == tak�mad�iste) {
                                puan = puan + 1;
                                Dosyayaz3 << tak�mad�iste << ' ' << puan << endl;
                            }
                            else if (deplasmantak�m == tak�mad�iste) {
                                puan = puan + 1;
                                Dosyayaz3 << tak�mad�iste << ' ' << puan << endl;
                            }
                            else {
                                Dosyayaz3 << tak�mad�iste << ' ' << puan << endl;
                            }

                        }
                        Dosyaoku3.close();
                        Dosyayaz3.close();
                        puandurumu.close();
                        remove("puandurumu.txt");
                        rename("Gecici3.txt", "puandurumu.txt");          puandurumu.open("puandurumu.txt", ios::app);      ifstream Dosyaoku3("puandurumu.txt");

                        ofstream Dosyayaz3("Gecici3.txt");




                    }


                    // ilk 11 alma 
                    cout << "Ev sahibi tak�m�n ilk 11 giriclek " << endl;
                    cout << "1. oyuncuyu giriniz ";
                    cin >> oyuncu1; cout << endl;
                    cout << "2. oyuncuyu giriniz ";
                    cin >> oyuncu2; cout << endl;
                    cout << "3. oyuncuyu giriniz ";
                    cin >> oyuncu3; cout << endl;
                    cout << "4. oyuncuyu giriniz ";
                    cin >> oyuncu4; cout << endl;
                    cout << "5. oyuncuyu giriniz ";
                    cin >> oyuncu5; cout << endl;
                    cout << "6. oyuncuyu giriniz ";
                    cin >> oyuncu6; cout << endl;
                    cout << "7. oyuncuyu giriniz ";
                    cin >> oyuncu7; cout << endl;
                    cout << "8. oyuncuyu giriniz ";
                    cin >> oyuncu8; cout << endl;
                    cout << "9. oyuncuyu giriniz ";
                    cin >> oyuncu9; cout << endl;
                    cout << "10. oyuncuyu giriniz ";
                    cin >> oyuncu10; cout << endl;
                    cout << "11. oyuncuyu giriniz ";
                    cin >> oyuncu11; cout << endl;

                    cout << "Deplesman tak�m�n ilk 11 giriclek " << endl;
                    cout << "1. oyuncuyu giriniz ";
                    cin >> oyuncu12; cout << endl;
                    cout << "2. oyuncuyu giriniz ";
                    cin >> oyuncu13; cout << endl;
                    cout << "3. oyuncuyu giriniz ";
                    cin >> oyuncu13; cout << endl;
                    cout << "4. oyuncuyu giriniz ";
                    cin >> oyuncu14; cout << endl;
                    cout << "5. oyuncuyu giriniz ";
                    cin >> oyuncu16; cout << endl;
                    cout << "6. oyuncuyu giriniz ";
                    cin >> oyuncu17; cout << endl;
                    cout << "9. oyuncuyu giriniz ";
                    cin >> oyuncu20; cout << endl;
                    cout << "10. oyuncuyu giriniz ";
                    cin >> oyuncu21; cout << endl;
                    cout << "11. oyuncuyu giriniz ";
                    cin >> oyuncu22; cout << endl;

                    ilk11kay�t << oyuncu1 << " " << oyuncu2 << " " << oyuncu3 << " " << oyuncu4 << " " << oyuncu5 << " " << oyuncu6 << " " << oyuncu7 << " " << oyuncu8 << " " << oyuncu9 << " " << oyuncu10 << " " << oyuncu11 << " " << oyuncu12 << " " << oyuncu13 << " " << oyuncu14 << " " << oyuncu15 << " " << oyuncu16 << " " << oyuncu17 << " " << oyuncu18 << " " << oyuncu19 << " " << oyuncu20 << " " << oyuncu21 << " " << oyuncu22 << endl;

                    // gol kay�t ev sahibi tak�m 
                    for (int i = 1; i <= evtak�mskor; i++) {
                        cout << " Evsahibi tak�m�n " << i << ". gol�n� atan oyuncunu ad�n� giriniz ";

                        if (i == evtak�mskor) {
                            cin >> golatan;
                            golkay�t << golatan << endl;
                        }


                        else {
                            cin >> golatan;
                            golkay�t << golatan << "  ";
                        }
                    }



                    for (int i = 1; i <= deplasmantakk�mskor; i++) {
                        cout << " Deplesman tak�m�nn�n " << i << ". gol�n� atan oyuncunun ad�n� giriniz ";

                        if (i == deplasmantakk�mskor) {

                            cin >> golatan;
                            golkay�t << golatan << endl;
                        }

                        else {
                            cin >> golatan;
                            golkay�t << golatan << "  ";
                        }
                    }

                    // de�i�iklik kayd� 
                    cout << endl;
                    cout << "De�i�iklik kayd� ";

                    for (int i = 1; i <= 6; i++)
                    {

                        if (i < 4) {
                            cout << "Ev sahibinde de�i�en " << i << ". oyuncu giriniz ";
                            cin >> de�i�enoyuncu;
                            de�i�iklikkay�t << de�i�enoyuncu<<endl;
                        }

                        else {
                            cout << "Deplesman tak�m�nda  de�i�en " << i - 3 << ". oyuncu giriniz ";
                            cin >> de�i�enoyuncu;
                            de�i�iklikkay�t << de�i�enoyuncu<<endl;

                        }
                    }




                    goto a;
                }
            }


            else if (secimma�i�lemleri == 2) {
                cout << "-------------------------------------------------------------------------------" << endl;
                while (Dosyaoku3 >> tak�mad�iste >> puan) {

                    cout << tak�mad�iste << "'nin puan� : " << puan << endl;
                }
                cout << endl;                     goto a;

            }
            else if (secimma�i�lemleri == 3) {
                cout << "Ge�mi� ma�lar�n kay�tlar�n� g�rme " << endl;
                cout << "Ev sahibinin ad� " << setw(10) << "Ev sahibinin skoru " << setw(10) << "Deplesman tak�m�n�n ad� " << setw(10) << "Deplesman tak�m�nn�n skoru "; cout << endl;
                while (Dosyaoku2 >> evtak�m >> evtak�mskor >> deplasmantak�m >> deplasmantakk�mskor) {
                    cout <<"Ev sahibi tak�m : " << evtak�m << "   " << "Skoru : " << evtak�mskor << "        " <<"Deplesman tak�m : " << deplasmantak�m << "   " << deplasmantakk�mskor; cout << endl;
                }
                goto a;

            }
            else if (secimma�i�lemleri == 4) {
                cout << "Geri d�n�� �e�ildi " << endl;

                goto a;

            }

        }
        case 4: {
            cout << "��k�� �e�ildi ";
            goto b;
        }

            }

            goto a;
            return 0;
        }
        }
    }
b:
    return 0;

}
