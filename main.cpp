#include <iostream>
#include <ctime>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{

    const int jumlahArray = 40;
    int jmlAnggota, loop;
    srand(time(0));
    string mahasiswa[jumlahArray] = {
        "Naeli Fitria Rokhamawati",
        "Deva Apriana",
        "Najmi Alwan",
        "Devin Ayu Putri Damayanti",
        "Naufal Dzakiy Izuddin",
        "Naufal Hilmy Mahdy",
        "Dewa Adji Kusuma",
        "Naufal Rizqi Arinanda",
        "Dicky Bayu Setiawan",
        "Neo Mauizan Ali Fitrah",
        "Niayu Angrespati",
        "Nihlatun Hasanah",
        "Diki Wahyudi",
        "Dimas Mulyo Agib Pratama",
        "Dito Febrianto",
        "Ekarini Lathifah",
        "Eko Sudarwanto",
        "Eksa Dwi Mada",
        "Nisa Nasywatus Sholichah",
        "Erika Agung Satria",
        "Novalita Mursia Nugroho",
        "Faatihah Nuursrayu",
        "Novandi Hidayat",
        "Fadil Rifki Pratama",
        "Fahreza Hendrawan",
        "Nur Habibie Iftah Kurniawan",
        "Fa'iq Bayu Ramadhanu",
        "Nuralmahdi",
        "Nuriyah Wulandari",
        "Faiza Rachma",
        "Ocha Putri Nugroho",
        "Farah Zhafirah Adrytona",
        "Panca Wibawa",
        "Farhan Adhyasta",
        "Farkhan Kurniatsani",
        "Panggih Dwi Alamsyah",
        "Farras Zahy Fitrian Pramudya",
        "Paundra Febrian Wijaya",
        "Febiana Nurhaeni Angelika Lumban Gaol",
        "Prakas Aji Pratama"
    };
    int pilihan;
    cout << "                                       PROGRAM PEMBUATAN KELOMPOK                                \n" << endl;
    cout << "                                         1. Daftar Mahasiswa                                     " <<endl;
    cout << "                                         2. Buat Kelompok                                        \n" <<endl;
    cout << "                                        Masukkan pilihan Anda: ";
    cin >> pilihan;

    int no = 1;

    switch(pilihan){
    case 1:
        cout<<endl;
        cout<<"                                       Daftar Mahasiswa"<<endl;


        for(int i= 0; i < jumlahArray; i++){
            cout<<no<<". "<<mahasiswa[i]<<"\n";
            no++;
        }

        break;
    case 2:

        cout<<"                                        Mau berapa anggota per kelompok : ";
        cin>>jmlAnggota;

        //mahasiswa 6
        //jika jmlKel 2 maka anggota 3
        //jika jml 3 maka anggota 2

        // misal 7 / 4 = 1.75 berarti 2



        for(int i = 0; i < jumlahArray; i++){
            int angkaRandom = rand() % jumlahArray;

            // tuker nilai variabel
            string temp = mahasiswa[i];
            mahasiswa[i] = mahasiswa[angkaRandom];
            mahasiswa[angkaRandom ] = temp;
        }



        cout<<"Kelompok "<<no<<"\n";

        loop = 1;
        for(int i = 0; i < jumlahArray; i++){


            cout<<mahasiswa[i]<<endl;


            if(i == jumlahArray-1){
                break;
            }

            if(loop % jmlAnggota == 0){
                no++;
                cout<<endl;
                cout<<"Kelompok "<<no<<endl;
            }
            //if(i == jmlAnggota-1){
              //   no++;
                //cout<<"Kelompok "<<no;
            //}

           loop++;
        }
        break;
    default:
        cout<<"pilihan yang anda masukkan tidak ada";
        break;
    }


    return 0;
}
