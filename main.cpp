#include <iostream>
#include <ctime>
#include <cstdlib>
#include <math.h>
using namespace std;


int menuMahasiswa(){
    system("cls");
    int input;
    cout<<"Menu Mahasiswa"<<endl;
    cout<<"======================"<<endl;
    cout<<"1. Lihat daftar mahasiswa"<<endl;
    cout<<"2. Tambah data mahasiswa"<<endl;
    cout<<"3. Ubah data mahasiswa"<<endl;
    cout<<"4. Hapus data mahasiswa"<<endl;
    cout<<"5. Kembali ke menu awal"<<endl;
    cout<<"======================"<<endl;
    cout<<"Pilih [1-5] : ";
    cin>>input;

    return input;
}

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

    int noKelompok = 1;


    int pilMenu;
    char pengulanganMenu;

    // representasi angka 1-5
    enum crud{READ = 1, CREATE, UPDATE, DELETE, FINISH};
    switch(pilihan){

    case 1:

           pilMenu = menuMahasiswa();
           while(pilMenu != FINISH){

            switch(pilMenu){
            case READ:
                cout<<"Daftar Mahasiswa"<<endl;
                break;
            case CREATE:
                cout<<"Tambah data mahasiswa"<<endl;
                break;
            case UPDATE:
                cout<<"Ubah data mahasiswa"<<endl;
                break;
            case DELETE:
                cout<<"Hapus data Mahasiswa"<<endl;
                break;
            default:
                cout<<"Pilihan tidak sesuai"<<endl;
                break;
             }


           // untuk mengulang eksekusi program
           label_continue:

           cout<<"Lanjutkan ? (y/n)";
           cin>>pengulanganMenu;

           if(pengulanganMenu=='y' | pengulanganMenu=='Y'){
                pilMenu = menuMahasiswa();
           }else if(pengulanganMenu=='n' | pengulanganMenu=='N'){
                // break while
                break;
           }else{
                goto label_continue;
            }
           }
            // break case 1
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



        cout<<"Kelompok "<<noKelompok<<"\n";

        loop = 1;
        for(int i = 0; i < jumlahArray; i++){


            cout<<mahasiswa[i]<<endl;

            if(loop == jumlahArray){
                break;
            }

            if(loop % jmlAnggota == 0){
                noKelompok++;
                cout<<endl;
                cout<<"Kelompok "<<noKelompok<<endl;
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
