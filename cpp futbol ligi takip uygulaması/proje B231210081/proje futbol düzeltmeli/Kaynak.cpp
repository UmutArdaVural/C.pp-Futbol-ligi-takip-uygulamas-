/****************************************************************************
**				        	SAKARYA ÜNÝVERSÝTESÝ
**			         BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ
**				     BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ
**				     PROGRAMLAMAYA GÝRÝÞÝ DERSÝ
**
**				PROJE NUMARASI…...: 1 
**				ÖÐRENCÝ ADI...............: UMUT ARDA VURAL
**				ÖÐRENCÝ NUMARASI.: B231210081
**				DERS GRUBU…………: A 
****************************************************************************/


#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>

using namespace std;

class takým {

private:

public:
    string Takýmadý;
    string Takýmbaþkanýadý;
    string Takýmaderesi;
    int Takýmno;
    int Oyuncusayýsý;



    ~takým() {

    }


    void  takýmbilgigirme(int takýmno1) {


        cout << "Takým adýný giriniz : ";
        cin >> Takýmadý; cout << endl;
        cout << "Takým baþkaný adý giriniz : ";
        cin >> Takýmbaþkanýadý;  cout << endl;

        cout << "Takým adresi giriniz : ";
        cin >> Takýmaderesi;  cout << endl;
        Takýmno = takýmno1;
        cout << "takým no : " << Takýmno; cout << endl;


        cout << "Takýmdaki oyuncu sayýsýný giriniz : ";
        cin >> Oyuncusayýsý;  cout << endl;


    }

    void takýmbilgideðiþtirme(int takýmno1) {
        cout << "Takým adýný giriniz : ";
        cin >> Takýmadý; cout << endl;
        cout << "Takým baþkaný adý giriniz : ";
        cin >> Takýmbaþkanýadý;  cout << endl;

        cout << "Takým adresi giriniz : ";
        cin >> Takýmaderesi;  cout << endl;
        Takýmno = takýmno1;
        cout << "takým no : " << Takýmno; cout << endl;


        cout << "Takýmdaki oyuncu sayýsýný giriniz : ";
        cin >> Oyuncusayýsý;  cout << endl;

    }
};
class futbolcu {

private:
    string Adý;
    string Soyadý;
    string Oyundakimevkisi;
    int Piyasadeðeri;
    int maaþý;
    int Lisansno;
    int Doðutarihi;
    int TCNO;
    int oyuncutakýmno;




public:
    void futbolcubilgigirme(int oyuncuno1) {

    }

    void futbolcubilgideðiþtirme(int oyuncuno1) {

    }


};




int main() {

    setlocale(LC_ALL, "Turkish");

a: // dosyalarýn bidaha açýlmasý için baþa dönülür 

    //  takým dosyasý için gerekli iþlemnler //
    ofstream takýmdosya;
    takýmdosya.open("takýmdosya.txt", ios::app);
    ifstream Dosyaoku("takýmdosya.txt");
    ofstream Dosyayaz("Gecici.txt");



    // sadece futbolcularýn olduðu takýmnolarý burda kaydedilir 
    ofstream futbolcu;
    futbolcu.open("futbolcu.txt", ios::app);
    ifstream Dosyaoku1("futbolcu.txt");
    ofstream Dosyayaz1("Gecici1.txt");

    // maç iþlemleri ve ilk 11 ler kayýtlarý 
    ofstream maçkayýt;
    maçkayýt.open("maçkayýt.txt", ios::app);
    ifstream Dosyaoku2("maçkayýt.txt");
    ofstream Dosyayaz2("Gecici2.txt");

    // puan durumu için 
    ofstream puandurumu;
    puandurumu.open("puandurumu.txt", ios::app);
    ifstream Dosyaoku3("puandurumu.txt");
    ofstream Dosyayaz3("Gecici3.txt");


    // oynýyan oyuncu kaydý için 
    ofstream ilk11kayýt;
    ilk11kayýt.open("ilk11kayýt.txt", ios::app);
    ifstream Dosyaoku4("ilk11kayýt.txt");
    ofstream Dosyayaz4("Gecici4.txt");

    // gol atan oyuncular için 
    ofstream golkayýt;
    golkayýt.open("golkayýt.txt", ios::app);
    string golatan;

    // deðiþiklik için kayýt 
    ofstream deðiþiklikkayýt;
    deðiþiklikkayýt.open("deðiþiklikkayýt.txt", ios::app);
    string deðiþenoyuncu;

    string Takýmadý;
    string Takýmbaþkanýadý;
    string Takýmaderesi;
    int Takýmno;
    int Oyuncusayýsý;

    /// futbolcu bilgileri //
    string futbolcuadý;
    string futbolcusoyadý;
    int futbolculisansno;
    string mevkisi;
    string maaþ;
    string piyasadeðeri;
    int ay;
    int gün;
    int yýl;
    int oyuncutakýmno;
    int lisansnokontrol, puan;

    string evtakým, deplasmantakým;
    double evtakýmskor, deplasmantakkýmskor;

    takým takým1, takým2, takým3, takým4, takým5, takým6;

    string takýmadýiste;
    int takýmnoal, takýmnokontrolal;
    int þeçim;
    int n, m, k;
    int takýmnokontrol, secimmaçiþlemleri, secimmaçiþlemleri1, secimmaçiþlemleri2, secimmaçiþlemleri3;
    bool durum = true; int a; int b;
    string oyuncu1 , oyuncu2 , oyuncu3 , oyuncu4, oyuncu5, oyuncu6, oyuncu7, oyuncu8, oyuncu9, oyuncu10,oyuncu11, oyuncu12, oyuncu13, oyuncu14, oyuncu15, oyuncu16, oyuncu17, oyuncu18, oyuncu19, oyuncu20, oyuncu21, oyuncu22;


    while (durum) {
        do {

            cout << "1. Takým Ýþlemleri" << endl;
            cout << "2. Futbolcu iþlemlerri " << endl;
            cout << "3. Maç iþlemleri  iþlemlerri " << endl;
            cout << "4. Ugulamayý kapat" << endl;
            cout << "------------------------------------------------" << endl;
            cout << "Seçim ; ";

            cin >> þeçim;
            cout << endl;



        } while (þeçim < 1 or þeçim>4);

        switch (þeçim)
        {


        case 1: {

            while (durum) {
                cout << "1. Takým Oluþturma ve dosyaya yazma" << endl;
                cout << "2. Takým Sil ve dosyadan silme " << endl;
                cout << "3. Takýmdaki Futbolcularý Listeleme " << endl;
                cout << "4. Takýmdaki Bir Futbolcuyu Düzenleme  " << endl;
                cout << "5. Ana menüye çýkýþ " << endl;
                cout << "------------------------------------------------" << endl;
                cout << "Seçim:" << endl;
                cin >> n;
                switch (n) {
                case 1:
                    do
                    {

                        cout << "Takým oluþturma ( 1 ile 6 arasýnda bir sayý girmeniz laýzm )" << endl;

                        cout << "Kaç numaralý takýmý oluþturmak istiyorsunuz : ";
                        m = 0;
                        cin >> m;
                    } while (m > 6 or m < 0);
                    if (m == 1) {
                        takým1.takýmbilgigirme(1);
                        Takýmadý = takým1.Takýmadý; Takýmbaþkanýadý = takým1.Takýmbaþkanýadý; Takýmaderesi = takým1.Takýmaderesi; Takýmno = takým1.Takýmno; Oyuncusayýsý = takým1.Oyuncusayýsý;

                        takýmdosya << Takýmadý << ' ' << Takýmbaþkanýadý << ' ' << Takýmaderesi << ' ' << Takýmno << ' ' << Oyuncusayýsý << endl;
                        cout << endl;
                    }
                    else if (m == 2) {
                        takým2.takýmbilgigirme(2); Takýmadý = takým2.Takýmadý; Takýmbaþkanýadý = takým2.Takýmbaþkanýadý; Takýmaderesi = takým2.Takýmaderesi; Takýmno = takým2.Takýmno; Oyuncusayýsý = takým2.Oyuncusayýsý; takýmdosya << Takýmadý << ' ' << Takýmbaþkanýadý << ' ' << Takýmaderesi << ' ' << Takýmno << ' ' << Oyuncusayýsý << endl;
                    }
                    else if (m == 3) {
                        takým3.takýmbilgigirme(3);    Takýmadý = takým3.Takýmadý; Takýmbaþkanýadý = takým3.Takýmbaþkanýadý; Takýmaderesi = takým3.Takýmaderesi; Takýmno = takým3.Takýmno; Oyuncusayýsý = takým3.Oyuncusayýsý; takýmdosya << Takýmadý << ' ' << Takýmbaþkanýadý << ' ' << Takýmaderesi << ' ' << Takýmno << ' ' << Oyuncusayýsý << endl;
                    }
                    else if (m == 4) {
                        takým4.takýmbilgigirme(4);    Takýmadý = takým4.Takýmadý; Takýmbaþkanýadý = takým4.Takýmbaþkanýadý; Takýmaderesi = takým4.Takýmaderesi; Takýmno = takým4.Takýmno; Oyuncusayýsý = takým4.Oyuncusayýsý; takýmdosya << Takýmadý << ' ' << Takýmbaþkanýadý << ' ' << Takýmaderesi << ' ' << Takýmno << ' ' << Oyuncusayýsý << endl;
                    }
                    else if (m == 5) {
                        takým5.takýmbilgigirme(5);   Takýmadý = takým5.Takýmadý; Takýmbaþkanýadý = takým5.Takýmbaþkanýadý; Takýmaderesi = takým5.Takýmaderesi; Takýmno = takým5.Takýmno; Oyuncusayýsý = takým5.Oyuncusayýsý; takýmdosya << Takýmadý << ' ' << Takýmbaþkanýadý << ' ' << Takýmaderesi << ' ' << Takýmno << ' ' << Oyuncusayýsý << endl;
                    }
                    else if (m == 6) {
                        takým6.takýmbilgigirme(6);  Takýmadý = takým6.Takýmadý; Takýmbaþkanýadý = takým6.Takýmbaþkanýadý; Takýmaderesi = takým6.Takýmaderesi; Takýmno = takým6.Takýmno; Oyuncusayýsý = takým6.Oyuncusayýsý; takýmdosya << Takýmadý << ' ' << Takýmbaþkanýadý << ' ' << Takýmaderesi << ' ' << Takýmno << ' ' << Oyuncusayýsý << endl;
                    }


                    break;
                case 2:
                    do {
                        cout << "kaç numaralý Takým silinsin istiyorsanýz o takýmýn numarasýný yazýnýz; " << endl;
                        cin >> takýmnokontrol;
                    } while (takýmnokontrol < 0 or takýmnokontrol>6);

                    while (Dosyaoku >> Takýmadý >> Takýmbaþkanýadý >> Takýmaderesi >> Takýmno >> Oyuncusayýsý)
                    {


                        if (takýmnokontrol == Takýmno) {

                            cout << " Numaralý  takýmýn silme iþlemi baþarýlý ";


                        }
                        else
                            Dosyayaz << Takýmadý << ' ' << Takýmbaþkanýadý << ' ' << Takýmaderesi << ' ' << Takýmno << ' ' << Oyuncusayýsý << endl;

                    }
                    cout << endl;
                    Dosyayaz.close();
                    Dosyaoku.close();
                    takýmdosya.close();
                    remove("takýmdosya.txt");
                    rename("Gecici.txt", "takýmdosya.txt");

                    goto a;
                   
                    break;


                case 3:
                    do {
                        cout << "Takýmdaki futbolcularý listeleme " << endl; cout << "Kaç numaralý takýmdaki futbolcularý görmek istiyorunsunz : ";
                        cin >> takýmnokontrolal;
                    } while (takýmnokontrolal > 6 or takýmnokontrolal < 0);
                    while (Dosyaoku1 >> futbolcuadý >> futbolcusoyadý >> futbolculisansno >> mevkisi >> maaþ >> piyasadeðeri >> gün >> ay >> yýl >> oyuncutakýmno)
                    {
                        

                        if (takýmnokontrolal == oyuncutakýmno) {
                            cout << "----------------------------------------------------------------" << endl;
                            cout << "Futbolcu adý : " << futbolcuadý << endl;
                            cout << "Futbolcu soyadý :" << futbolcusoyadý << endl;
                            cout << "Futbolcu lisansno : " << futbolculisansno << endl;
                            cout << "Futbolcu mevkisi : " << mevkisi << endl;
                            cout << "Futbolcu maaþý : " << maaþ << endl;
                            cout << "Futbolcu piyasadeðeri : " << piyasadeðeri << endl;
                            cout << "Futbolcu doðum tarihi : " << gün << "." << ay << "." << yýl << endl;
                            cout << "----------------------------------------------------------------" << endl;

                        }


                    }

                    goto a;
                    break;
                case 4:

                    cout << "Takýmdaki bir futbolcuyu düzenleme" << endl;
                    cout << "Hnagi futbolcuyu düzenlemek istiyorsanýz onun lisansnosunu giriniz : ";
                    cin >> lisansnokontrol;

                    while (Dosyaoku1 >> futbolcuadý >> futbolcusoyadý >> futbolculisansno >> mevkisi >> maaþ >> piyasadeðeri >> gün >> ay >> yýl >> oyuncutakýmno)
                    {

                        if (lisansnokontrol == futbolculisansno) {
                            cout << "Güncellemek istediðiniz Futbolcunun yeni adýný giriniz : ";
                            cin >> futbolcuadý; cout << endl;
                            cout << "Güncellemek istediðiniz Futbolcunun yeni soyadýný giriniz : ";
                            cin >> futbolcusoyadý;  cout << endl;
                            cout << "Güncellemek istediðiniz Futbolcunun yeni lisansno giriniz : ";
                            cin >> futbolculisansno;  cout << endl;
                            cout << "Güncellemek istediðiniz Futbolcunun yeni mevkisini giriniz : ";
                            cin >> mevkisi;  cout << endl;
                            cout << "Güncellemek istediðiniz Futbolcunun yeni maaþýný giriniz (TL CÝNSÝNDEN) : ";
                            cin >> maaþ;   cout << endl;
                            cout << "Güncellemek istediðiniz Futbolcunun yeni piyasa deðerini giriniz (TL CÝNSÝNDEN) : ";
                            cin >> piyasadeðeri;  cout << endl;
                            do
                            {
                                cout << "Güncellemek istediðiniz Futbolcunun doðum günün gün kýsmýný giriniz (0 ile 31 arasýnda olmasý lazým (olmadýðý takitrde döngüye tekrar girilcek) ) : ";
                                cin >> gün;  cout << endl;
                                cout << "Güncellemek istediðiniz Futbolcunun doðum günün ay kýsmýný giriniz (0 ile 12 arasýnda olmasý lazým (olmadýðý takitrde döngüye tekrar girilcek)  ) : ";
                                cin >> ay;  cout << endl;
                                cout << "Güncellemek istediðiniz Futbolcunun doðum günün yýl kýsmýný giriniz  : ";
                                cin >> yýl;  cout << endl;
                            } while ((gün > 31 or gün < 0) || (ay > 12 or ay < 0));

                            Dosyayaz1 << futbolcuadý << ' ' << futbolcusoyadý << ' ' << futbolculisansno << ' ' << mevkisi << ' ' << maaþ << ' ' << piyasadeðeri << ' ' << gün << ' ' << ay << ' ' << yýl << ' ' << oyuncutakýmno << endl;

                        }
                        else
                            Dosyayaz1 << futbolcuadý << ' ' << futbolcusoyadý << ' ' << futbolculisansno << ' ' << mevkisi << ' ' << maaþ << ' ' << piyasadeðeri << ' ' << gün << ' ' << ay << ' ' << yýl << ' ' << oyuncutakýmno << endl;

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
                    cout << "Geri Çýkýþ seçildi" << endl;
                    goto a;
                    break;
                default:
                    cout << "Hiçbiri seçilmedi" << endl;
                }
            }
        }case 2: {
            while (durum) {
                cout << "Oyuncu Menüsü  " << endl;
                cout << "1. Oyuncu oluþturma" << endl;
                cout << "2. Oyuncu silme" << endl;
                cout << "3. Oyuncu Güncelleme" << endl;
                cout << "4. Oyuncu Listeleme" << endl;
                cout << "5. Geri dönüþ  " << endl;
                cout << "------------------------------------------------" << endl;
                cout << "Seçim: ";
                do { cin >> n; } while (n > 5 or n < 1);
                switch (n) {
                case 1: {

                    cout << "1. Oyuncu oluþturma þeçildi " << endl;
                    cout << "Kaydetmek istediðiniz Futbolcunun adýný giriniz : ";
                    cin >> futbolcuadý; cout << endl;
                    cout << "Kaydetmek istediðiniz Futbolcunun soyadýný giriniz : ";
                    cin >> futbolcusoyadý;  cout << endl;
                    cout << "Kaydetmek istediðiniz Futbolcunun lisansno giriniz : ";
                    cin >> futbolculisansno;  cout << endl;
                    cout << "Kaydetmek istediðiniz Futbolcunun mevkisini giriniz : ";
                    cin >> mevkisi;  cout << endl;
                    cout << "Kaydetmek istediðiniz Futbolcunun maaþýný giriniz (TL CÝNSÝNDEN) : ";
                    cin >> maaþ;   cout << endl;
                    cout << "Kaydetmek istediðiniz Futbolcunun piyasa deðerini giriniz (TL CÝNSÝNDEN) : ";
                    cin >> piyasadeðeri;  cout << endl;
                    do
                    {
                        cout << "Kaydetmek istediðiniz Futbolcunun doðum günün gün kýsmýný giriniz (0 ile 31 arasýnda olmasý lazým (olmadýðý takitrde döngüye tekrar girilcek) ) : ";
                        cin >> gün;  cout << endl;
                        cout << "Kaydetmek istediðiniz Futbolcunun doðum günün ay kýsmýný giriniz (0 ile 12 arasýnda olmasý lazým (olmadýðý takitrde döngüye tekrar girilcek)  ) : ";
                        cin >> ay;  cout << endl;
                        cout << "Kaydetmek istediðiniz Futbolcunun doðum günün yýl kýsmýný giriniz  : ";
                        cin >> yýl;  cout << endl;
                    } while ((gün > 31 or gün < 0) || (ay > 12 or ay < 0));

                    do {
                        cout << "Oyuncuyu hangi takýma kaydetmek istiyorsanýz numarasýný giriniz ";
                        cin >> oyuncutakýmno;
                    } while (oyuncutakýmno > 6 or oyuncutakýmno < 0);


                    futbolcu << futbolcuadý << ' ' << futbolcusoyadý << ' ' << futbolculisansno << ' ' << mevkisi << ' ' << maaþ << ' ' << piyasadeðeri << ' ' << gün << ' ' << ay << ' ' << yýl << ' ' << oyuncutakýmno << endl;



                    goto a;
                    cout << endl;
                    break;
                }
                case 2: {
                    cout << "2. Oyuncu Silme þeçilme" << endl;
                    cout << "Silmek istediðiniz futbolcunun lisansnosunu giriniz : ";
                    cin >> lisansnokontrol; cout << endl;
                    while (Dosyaoku1 >> futbolcuadý >> futbolcusoyadý >> futbolculisansno >> mevkisi >> maaþ >> piyasadeðeri >> gün >> ay >> yýl >> oyuncutakýmno)
                    {

                        if (lisansnokontrol == futbolculisansno) {

                            cout << " silme iþlemi baþarýlý ";


                        }
                        else {
                            Dosyayaz1 << futbolcuadý << ' ' << futbolcusoyadý << ' ' << futbolculisansno << ' ' << mevkisi << ' ' << maaþ << ' ' << piyasadeðeri << ' ' << gün << ' ' << ay << ' ' << yýl << ' ' << oyuncutakýmno << endl;
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
                    cout << "3. Oyuncu Güncelleme þeçildi " << endl;
                    cout << "Hnagi futbolcuyu düzenlemek istiyorsanýz onun lisansnosunu giriniz : ";
                    cin >> lisansnokontrol;
                    cout << endl;
                    while (Dosyaoku1 >> futbolcuadý >> futbolcusoyadý >> futbolculisansno >> mevkisi >> maaþ >> piyasadeðeri >> gün >> ay >> yýl >> oyuncutakýmno)
                    {

                        if (lisansnokontrol == futbolculisansno) {
                            cout << "Güncellemek istediðiniz Futbolcunun yeni adýný giriniz : ";
                            cin >> futbolcuadý; cout << endl;
                            cout << "Güncellemek istediðiniz Futbolcunun yeni soyadýný giriniz : ";
                            cin >> futbolcusoyadý;  cout << endl;
                            cout << "Güncellemek istediðiniz Futbolcunun yeni lisansno giriniz : ";
                            cin >> futbolculisansno;  cout << endl;
                            cout << "Güncellemek istediðiniz Futbolcunun yeni  mevkisini giriniz : ";
                            cin >> mevkisi;  cout << endl;
                            cout << "Güncellemek istediðiniz Futbolcunun yeni maaþýný giriniz (TL CÝNSÝNDEN) : ";
                            cin >> maaþ;   cout << endl;
                            cout << "Güncellemek istediðiniz Futbolcunun yeni piyasa deðerini giriniz (TL CÝNSÝNDEN) : ";
                            cin >> piyasadeðeri;  cout << endl;
                            do
                            {
                                cout << "Güncellemek istediðiniz Futbolcunun doðum günün gün kýsmýný giriniz (0 ile 31 arasýnda olmasý lazým (olmadýðý takitrde döngüye tekrar girilcek) ) : ";
                                cin >> gün;  cout << endl;
                                cout << "Güncellemek istediðiniz Futbolcunun doðum günün ay kýsmýný giriniz (0 ile 12 arasýnda olmasý lazým (olmadýðý takitrde döngüye tekrar girilcek)  ) : ";
                                cin >> ay;  cout << endl;
                                cout << "Güncellemek istediðiniz Futbolcunun doðum günün yýl kýsmýný giriniz  : ";
                                cin >> yýl;  cout << endl;
                            } while ((gün > 31 or gün < 0) || (ay > 12 or ay < 0));

                            Dosyayaz1 << futbolcuadý << ' ' << futbolcusoyadý << ' ' << futbolculisansno << ' ' << mevkisi << ' ' << maaþ << ' ' << piyasadeðeri << ' ' << gün << ' ' << ay << ' ' << yýl << ' ' << oyuncutakýmno << endl;

                        }
                        else
                            Dosyayaz1 << futbolcuadý << ' ' << futbolcusoyadý << ' ' << futbolculisansno << ' ' << mevkisi << ' ' << maaþ << ' ' << piyasadeðeri << ' ' << gün << ' ' << ay << ' ' << yýl << ' ' << oyuncutakýmno << endl;

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
                    cout << "!!!Takým no sýfýr olmasý oyuncunu hiç bir takýma kayýtlý olmadýðýný belitir !!!" << endl << endl;

                    while (Dosyaoku1 >> futbolcuadý >> futbolcusoyadý >> futbolculisansno >> mevkisi >> maaþ >> piyasadeðeri >> gün >> ay >> yýl >> oyuncutakýmno)
                    {

                        cout << "Futbolcu adý          : " << futbolcuadý << endl;
                        cout << "Futbolcu soyadý       : " << futbolcusoyadý << endl;
                        cout << "Futbolcu lisansno     : " << futbolculisansno << endl;
                        cout << "Futbolcu mevkisi      : " << mevkisi << endl;
                        cout << "Futbolcu maaþý        : " << maaþ << endl;
                        cout << "Futbolcu piyasadeðeri : " << piyasadeðeri << endl;
                        cout << "Futbolcu doðum tarihi : " << gün << "." << ay << "." << yýl << endl;
                        cout << "Futbolcu takým no     :  " << oyuncutakýmno;
                        cout << endl << "-------------------------------------------------------------------------" << endl;


                    }


                    goto a;
                    cout << endl;
                    break;

                }
                case 5: {
                    cout << "Çýkýþ seçildi" << endl << endl;
                    goto a;

                }

                }
        case 3: { cout << "Maç iþlemleri " << endl;

            do {
                cout << "Maç iþlemlerinde ne yapmak istyorsunuz " << endl;

                cout << "1. Haftalýk maç kayýt iþlemleri    :" << endl;
                cout << "2. Güncel puan durumu görme        :" << endl;
                cout << "3. Tüm geçmiþ karþýlaþma kayýtlarý :" << endl;
                cout << "4. Geri dönüþ  " << endl;
                cout << "Þeçim ; ";
                cin >> secimmaçiþlemleri;

            } while (secimmaçiþlemleri > 4 or secimmaçiþlemleri < 0);



            if (secimmaçiþlemleri == 1) {
                do {
                    cout << "Ýlk haftayý mý kayýt yapmak istiyorsunuz (ilk haftayý kayýt yapmadan ilerki haftalara kayýt yaptýrmayýnýz ) " << "   Þeçiminiz evet ise 1 hayýr ise 2 basýnýz : ";
                    cin >> secimmaçiþlemleri1;
                } while (secimmaçiþlemleri1 < 0 or secimmaçiþlemleri1>2);

                // ligte hak kazanan 6 takýmýn ismini alýcaz 

                if (secimmaçiþlemleri1 == 1) {
                    cout << "Ligte oynamaya hak kazanan 6 takýmýn adýný giriceksiniz " << endl;
                    for (int r = 1; r <= 6; r++) {
                        cout << r << ". Takýmýn adýný giriniz : ";  cin >> takýmadýiste;
                        cout << endl << endl; puan = 0;
                        puandurumu << takýmadýiste << ' ' << puan << endl;

                    }
                    cout << "Maç sonuçlarý giriceksiniz puan durumu otamatik olarak güncellenicek " << endl;



                    cout << "Ev sahibi takýmýn adýný giriniz     : "; cin >> evtakým;                             cout << endl;
                    cout << "Ev sahibi takýmýn skorunu giriniz   : "; cin >> evtakýmskor;                         cout << endl;
                    cout << "Deplesman takýmýnýn adýný giriniz   : "; cin >> deplasmantakým;                      cout << endl;
                    cout << "Deplasman takýmýnýn skoronu giriniz : "; cin >> deplasmantakkýmskor;                 cout << endl;

                    maçkayýt << evtakým << " " << evtakýmskor << "  " << deplasmantakým << " " << deplasmantakkýmskor << endl;

                   


                    if (evtakýmskor > deplasmantakkýmskor) {
                        while (Dosyaoku3 >> takýmadýiste >> puan) {
                            if (evtakým == takýmadýiste) {
                                puan = puan + 3;
                                Dosyayaz3 << takýmadýiste << ' ' << puan << endl;
                            }
                            else
                                Dosyayaz3 << takýmadýiste << ' ' << puan << endl;


                        }
                        Dosyaoku3.close();
                        Dosyayaz3.close();
                        puandurumu.close();
                        remove("puandurumu.txt");
                        rename("Gecici3.txt", "puandurumu.txt");           puandurumu.open("puandurumu.txt", ios::app);     ifstream Dosyaoku3("puandurumu.txt");
                        ofstream Dosyayaz3("Gecici3.txt");




                    }
                    else if (evtakýmskor < deplasmantakkýmskor) {
                        while (Dosyaoku3 >> takýmadýiste >> puan) {
                            if (deplasmantakým == takýmadýiste) {
                                puan = puan + 3;
                                Dosyayaz3 << takýmadýiste << ' ' << puan << endl;
                            }
                            else {
                                Dosyayaz3 << takýmadýiste << ' ' << puan << endl;
                            }

                        }
                        Dosyaoku3.close();
                        Dosyayaz3.close();
                        puandurumu.close();
                        remove("puandurumu.txt");
                        rename("Gecici3.txt", "puandurumu.txt");           puandurumu.open("puandurumu.txt", ios::app);     ifstream Dosyaoku3("puandurumu.txt");

                        ofstream Dosyayaz3("Gecici3.txt");


                        

                    }
                    else if (evtakýmskor == deplasmantakkýmskor) {
                        while (Dosyaoku3 >> takýmadýiste >> puan) {
                            if (evtakým == takýmadýiste) {
                                puan = puan + 1;
                                Dosyayaz3 << takýmadýiste << ' ' << puan << endl;
                            }
                            else if (deplasmantakým == takýmadýiste) {
                                puan = puan + 1;
                                Dosyayaz3 << takýmadýiste << ' ' << puan << endl;
                            }
                            else {
                                Dosyayaz3 << takýmadýiste << ' ' << puan << endl;
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
                    cout << "Ev sahibi takýmýn ilk 11 giriclek "<<endl;
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

                    cout << "Deplesman takýmýn ilk 11 giriclek " << endl;
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

                    ilk11kayýt <<oyuncu1<<" "<< oyuncu2<<" "<< oyuncu3<<" "<< oyuncu4<<" "<< oyuncu5<<" "<< oyuncu6<<" "<< oyuncu7<<" "<< oyuncu8<<" "<< oyuncu9<<" "<< oyuncu10<<" "<< oyuncu11<<" "<< oyuncu12<<" " << oyuncu13<< " " << oyuncu14<<" "<< oyuncu15<<" "<< oyuncu16<<" "<< oyuncu17<<" "<< oyuncu18<<" "<< oyuncu19<< " " << oyuncu20 <<" "<<oyuncu21<<" "<<oyuncu22<<endl;


                    // gol kayýt ev sahibi takým 
                    for (int i = 1; i <= evtakýmskor; i++) {
                        cout << " Evsahibi takýmýn " << i << ". golünü atan oyuncunu adýný giriniz ";

                        if (i == evtakýmskor) {
                            cin >> golatan;
                            golkayýt << golatan << endl;
                        }


                        else {
                            cin >> golatan;
                            golkayýt << golatan << "  ";
                        }
                    }



                    for (int i = 1; i <= deplasmantakkýmskor; i++) {
                        cout << " Deplesman takýmýnnýn " << i << ". golünü atan oyuncunun adýný giriniz ";

                        if (i == deplasmantakkýmskor) {

                            cin >> golatan;
                            golkayýt << golatan << endl;
                        }

                        else {
                            cin >> golatan;
                            golkayýt << golatan << "  ";
                        }
                    }


                    // deðiþiklik kaydý 
                    cout << endl;
                    cout <<"Deðiþiklik kaydý ";

                    for (int i = 1; i <= 6; i++)
                    {    
                        
                         if (i < 4) {
                             cout << "Ev sahibinde deðiþen "<< i <<". oyuncu giriniz ";
                             cin>>deðiþenoyuncu;
                        }

                         else {
                             cout << "Deplesman takýmýnda  deðiþen " << i-3 << ". oyuncu giriniz ";
                             cin >> deðiþenoyuncu;
                         }
                    }



                    goto a;
                }
                else if (secimmaçiþlemleri1 == 2) {
                    cout << "Ev sahibi takýmýn adýný giriniz     : "; cin >> evtakým;                             cout << endl;
                    cout << "Ev sahibi takýmýn skorunu giriniz   : "; cin >> evtakýmskor;                         cout << endl;
                    cout << "Deplesman takýmýnýn adýný giriniz   : "; cin >> deplasmantakým;                      cout << endl;
                    cout << "Deplasman takýmýnýn skoronu giriniz : "; cin >> deplasmantakkýmskor;                 cout << endl;

                    maçkayýt << evtakým << " " << evtakýmskor << " " << deplasmantakým << "  " << deplasmantakkýmskor << endl;

                    // gol kayýt 

                    if (evtakýmskor > deplasmantakkýmskor) {
                        while (Dosyaoku3 >> takýmadýiste >> puan) {
                            if (evtakým == takýmadýiste) {
                                puan = puan + 3;
                                Dosyayaz3 << takýmadýiste << ' ' << puan << endl;
                            }
                            else
                                Dosyayaz3 << takýmadýiste << ' ' << puan << endl;


                        }
                        Dosyaoku3.close();
                        Dosyayaz3.close();
                        puandurumu.close();
                        remove("puandurumu.txt");
                        rename("Gecici3.txt", "puandurumu.txt");           puandurumu.open("puandurumu.txt", ios::app);     ifstream Dosyaoku3("puandurumu.txt");
                        ofstream Dosyayaz3("Gecici3.txt");




                    }
                    else if (evtakýmskor < deplasmantakkýmskor) {
                        while (Dosyaoku3 >> takýmadýiste >> puan) {
                            if (deplasmantakým == takýmadýiste) {
                                puan = puan + 3;
                                Dosyayaz3 << takýmadýiste << ' ' << puan << endl;
                            }
                            else {
                                Dosyayaz3 << takýmadýiste << ' ' << puan << endl;
                            }

                        }
                        Dosyaoku3.close();
                        Dosyayaz3.close();
                        puandurumu.close();
                        remove("puandurumu.txt");
                        rename("Gecici3.txt", "puandurumu.txt");           puandurumu.open("puandurumu.txt", ios::app);     ifstream Dosyaoku3("puandurumu.txt");

                        ofstream Dosyayaz3("Gecici3.txt");




                    }
                    else if (evtakýmskor == deplasmantakkýmskor) {
                        while (Dosyaoku3 >> takýmadýiste >> puan) {
                            if (evtakým == takýmadýiste) {
                                puan = puan + 1;
                                Dosyayaz3 << takýmadýiste << ' ' << puan << endl;
                            }
                            else if (deplasmantakým == takýmadýiste) {
                                puan = puan + 1;
                                Dosyayaz3 << takýmadýiste << ' ' << puan << endl;
                            }
                            else {
                                Dosyayaz3 << takýmadýiste << ' ' << puan << endl;
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
                    cout << "Ev sahibi takýmýn ilk 11 giriclek " << endl;
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

                    cout << "Deplesman takýmýn ilk 11 giriclek " << endl;
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

                    ilk11kayýt << oyuncu1 << " " << oyuncu2 << " " << oyuncu3 << " " << oyuncu4 << " " << oyuncu5 << " " << oyuncu6 << " " << oyuncu7 << " " << oyuncu8 << " " << oyuncu9 << " " << oyuncu10 << " " << oyuncu11 << " " << oyuncu12 << " " << oyuncu13 << " " << oyuncu14 << " " << oyuncu15 << " " << oyuncu16 << " " << oyuncu17 << " " << oyuncu18 << " " << oyuncu19 << " " << oyuncu20 << " " << oyuncu21 << " " << oyuncu22 << endl;

                    // gol kayýt ev sahibi takým 
                    for (int i = 1; i <= evtakýmskor; i++) {
                        cout << " Evsahibi takýmýn " << i << ". golünü atan oyuncunu adýný giriniz ";

                        if (i == evtakýmskor) {
                            cin >> golatan;
                            golkayýt << golatan << endl;
                        }


                        else {
                            cin >> golatan;
                            golkayýt << golatan << "  ";
                        }
                    }



                    for (int i = 1; i <= deplasmantakkýmskor; i++) {
                        cout << " Deplesman takýmýnnýn " << i << ". golünü atan oyuncunun adýný giriniz ";

                        if (i == deplasmantakkýmskor) {

                            cin >> golatan;
                            golkayýt << golatan << endl;
                        }

                        else {
                            cin >> golatan;
                            golkayýt << golatan << "  ";
                        }
                    }

                    // deðiþiklik kaydý 
                    cout << endl;
                    cout << "Deðiþiklik kaydý ";

                    for (int i = 1; i <= 6; i++)
                    {

                        if (i < 4) {
                            cout << "Ev sahibinde deðiþen " << i << ". oyuncu giriniz ";
                            cin >> deðiþenoyuncu;
                            deðiþiklikkayýt << deðiþenoyuncu<<endl;
                        }

                        else {
                            cout << "Deplesman takýmýnda  deðiþen " << i - 3 << ". oyuncu giriniz ";
                            cin >> deðiþenoyuncu;
                            deðiþiklikkayýt << deðiþenoyuncu<<endl;

                        }
                    }




                    goto a;
                }
            }


            else if (secimmaçiþlemleri == 2) {
                cout << "-------------------------------------------------------------------------------" << endl;
                while (Dosyaoku3 >> takýmadýiste >> puan) {

                    cout << takýmadýiste << "'nin puaný : " << puan << endl;
                }
                cout << endl;                     goto a;

            }
            else if (secimmaçiþlemleri == 3) {
                cout << "Geçmiþ maçlarýn kayýtlarýný görme " << endl;
                cout << "Ev sahibinin adý " << setw(10) << "Ev sahibinin skoru " << setw(10) << "Deplesman takýmýnýn adý " << setw(10) << "Deplesman takýmýnnýn skoru "; cout << endl;
                while (Dosyaoku2 >> evtakým >> evtakýmskor >> deplasmantakým >> deplasmantakkýmskor) {
                    cout <<"Ev sahibi takým : " << evtakým << "   " << "Skoru : " << evtakýmskor << "        " <<"Deplesman takým : " << deplasmantakým << "   " << deplasmantakkýmskor; cout << endl;
                }
                goto a;

            }
            else if (secimmaçiþlemleri == 4) {
                cout << "Geri dönüþ þeçildi " << endl;

                goto a;

            }

        }
        case 4: {
            cout << "Çýkýþ þeçildi ";
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
