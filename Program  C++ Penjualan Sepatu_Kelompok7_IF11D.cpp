#include <iostream>
#include <iomanip>

using namespace std;

// Struktur untuk menyimpan data sepatu
struct Sepatu
{
    string merek;  // Merek sepatu
    string ukuran; // Ukuran sepatu
    string warna;  // Warna sepatu
};

// Konstanta untuk ukuran array
const int MAX_SIZE = 20; // Misalnya, batasi maksimal 20 sepatu

// Kelas untuk mengelola tumpukan/Stack sepatu
class TumpukanSepatu
{
private:
    Sepatu tumpukan[MAX_SIZE]; // Array untuk menyimpan tumpukan sepatu
    int top;                   // Indeks atas tumpukan (top of stack)

public:
    // Konstruktor untuk inisialisasi
    TumpukanSepatu()
    {
        top = -1; // Tumpukan kosong saat awalnya
    }

    // Fungsi untuk menambahkan sepatu ke tumpukan
    void push(Sepatu sepatu)
    {
        if (top >= MAX_SIZE - 1)
        {
            cout << "Tumpukan penuh! Tidak bisa menambahkan sepatu baru." << endl;
            return;
        }
        tumpukan[++top] = sepatu; // Menambahkan sepatu dan menggeser top
    }

    // Fungsi untuk menyisipkan sepatu pada indeks tertentu
    void insert(int index, Sepatu sepatu)
    {
        if (top >= MAX_SIZE - 1)
        {
            cout << "Tumpukan penuh! Tidak bisa menyisipkan sepatu baru." << endl;
            return;
        }

        // Memastikan indeks valid untuk penyisipan
        if (index < 1 || index > top + 2)
        {
            cout << "Indeks tidak valid!" << endl;
            return;
        }

        // Geser elemen untuk membuat ruang untuk sepatu baru
        for (int i = top; i >= index - 1; --i)
        {
            tumpukan[i + 1] = tumpukan[i];
        }

        tumpukan[index - 1] = sepatu; // Memasukkan sepatu pada indeks yang sesuai
        ++top;                        // Menambahkan top setelah penyisipan
    }

    // Fungsi untuk menghapus sepatu dari tumpukan
    Sepatu pop()
    {
        if (top < 0)
        {
            cout << "Tumpukan kosong!" << endl;
            return Sepatu{"", "", ""}; // Mengembalikan sepatu kosong
        }

        Sepatu sepatu = tumpukan[top--]; // Menghapus sepatu dan mengurangi top
        return sepatu;                   // Mengembalikan sepatu yang dihapus
    }

    // Fungsi untuk menghapus sepatu pada indeks tertentu
    void remove(int index)
    {
        if (top < 0)
        {
            cout << "Tumpukan kosong!" << endl;
            return;
        }

        if (index < 1 || index > top + 1)
        {
            cout << "Indeks tidak valid!" << endl;
            return;
        }

        // Menghapus sepatu pada indeks yang sesuai
        for (int i = index - 1; i < top; ++i)
        {
            tumpukan[i] = tumpukan[i + 1];
        }

        --top; // Mengurangi top setelah penghapusan
    }

    // Fungsi untuk menampilkan semua sepatu dalam tumpukan dari atas ke bawah
    void print()
    {
        if (top < 0)
        {
            cout << "Tumpukan kosong!" << endl;
            return;
        }

        // Menampilkan tabel sepatu
        cout << "|--------------------------------------------------------------|" << endl;
        cout << "| No. | Merek Sepatu     | Ukuran Sepatu  |    Warna Sepatu    |" << endl;
        cout << "|--------------------------------------------------------------|" << endl;

        // Perulangan dari atas ke bawah tumpukan
        for (int i = 0; i <= top; ++i)
        {
            Sepatu sepatu = tumpukan[i];
            // Menampilkan isi tabel
            cout << "| " << setw(3) << i + 1 << " | " << setw(15) << sepatu.merek << "  | " << setw(15) << sepatu.ukuran << "| " << setw(15) << sepatu.warna << "    |" << endl;
        }

        cout << "|--------------------------------------------------------------|" << endl;
    }

    // Fungsi untuk mengedit sepatu pada indeks tertentu
    void edit(int index, Sepatu sepatu)
    {
        if (index < 1 || index > top + 1)
        {
            cout << "Indeks tidak valid!" << endl;
            return;
        }

        tumpukan[index - 1] = sepatu; // Mengganti data sepatu pada indeks yang sesuai
    }

    // Fungsi untuk sequential search (mencari sepatu berdasarkan keyword dan tipe pencarian)
    void search(string keyword, string type)
    {
        bool found = false; // Menandakan apakah sepatu ditemukan
        cout << "|--------------------------------------------------------------|" << endl;
        cout << "| No. | Merek Sepatu     | Ukuran Sepatu  |    Warna Sepatu    |" << endl;
        cout << "|--------------------------------------------------------------|" << endl;

        for (int i = top; i >= 0; --i)
        {
            Sepatu sepatu = tumpukan[i];
            // Mengecek apakah sepatu sesuai dengan keyword dan tipe pencarian
            if ((type == "merek" && sepatu.merek == keyword) ||
                (type == "ukuran" && sepatu.ukuran == keyword) ||
                (type == "warna" && sepatu.warna == keyword))
            {
                // Menampilkan sepatu yang ditemukan
                cout << "| " << setw(3) << i + 1 << " | " << setw(15) << sepatu.merek << "  | " << setw(15) << sepatu.ukuran << "| " << setw(15) << sepatu.warna << "    |" << endl;
                found = true; // Menandakan sepatu ditemukan
            }
        }

        // Menampilkan pesan jika sepatu tidak ditemukan
        if (!found)
        {
            cout << "|                  Tidak ada sepatu yang ditemukan!              |" << endl;
        }

        cout << "|--------------------------------------------------------------|" << endl;
    }
};

int main()
{
    TumpukanSepatu tumpukanSepatu; // Membuat objek TumpukanSepatu

    int pilihan;
    do
    {
        // Menampilkan menu utama
        cout << "|====================================================================|" << endl;
        cout << "|                       Menu Tumpukan Sepatu:                        |" << endl;
        cout << "|====================================================================|" << endl;
        cout << "| 1. Tambahkan Sepatu                                                |" << endl;
        cout << "| 2. Sisipkan Sepatu                                                 |" << endl;
        cout << "| 3. Hapus Sepatu                                                    |" << endl;
        cout << "| 4. Tampilkan Sepatu                                                |" << endl;
        cout << "| 5. Edit Sepatu                                                     |" << endl;
        cout << "| 6. Cari Sepatu                                                     |" << endl;
        cout << "| 0. Keluar                                                          |" << endl;
        cout << "|====================================================================|" << endl;

        // Meminta input pilihan
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
        {
            // Menambahkan Sepatu
            Sepatu sepatu;
            cout << "Masukkan merek sepatu: ";
            cin >> sepatu.merek;
            cout << "Masukkan ukuran sepatu: ";
            cin >> sepatu.ukuran;
            cout << "Masukkan warna sepatu: ";
            cin >> sepatu.warna;

            tumpukanSepatu.push(sepatu); // Menambahkan sepatu ke tumpukan
            cout << "Sepatu baru telah ditambahkan!" << endl;
            break;
        }
        case 2:
        {
            // Menyisipkan Sepatu di atas tumpukan
            int index;
            Sepatu sepatu;

            cout << "Masukkan indeks untuk menyisipkan di atas tumpukan (dimulai dari 1): ";
            cin >> index;
            cout << "Masukkan merek sepatu: ";
            cin >> sepatu.merek;
            cout << "Masukkan ukuran sepatu: ";
            cin >> sepatu.ukuran;
            cout << "Masukkan warna sepatu: ";
            cin >> sepatu.warna;

            tumpukanSepatu.insert(index, sepatu); // Menyisipkan di atas tumpukan
            cout << "Sepatu baru telah disisipkan di atas tumpukan!" << endl;
            break;
        }
        case 3:
        {
            // Menghapus Sepatu
            int index;
            cout << "Masukkan indeks untuk dihapus (dimulai dari 1): ";
            cin >> index;

            tumpukanSepatu.remove(index); // Menghapus sepatu dari tumpukan
            cout << "Sepatu telah dihapus!" << endl;
            break;
        }
        case 4:
        {
            // Menampilkan Sepatu
            tumpukanSepatu.print(); // Menampilkan semua sepatu dalam tumpukan
            break;
        }
        case 5:
        {
            // Mengedit Sepatu
            int index;
            Sepatu sepatu;

            cout << "Masukkan indeks untuk diedit (dimulai dari 1): ";
            cin >> index;
            cout << "Masukkan merek sepatu baru: ";
            cin >> sepatu.merek;
            cout << "Masukkan ukuran sepatu baru: ";
            cin >> sepatu.ukuran;
            cout << "Masukkan warna sepatu baru: ";
            cin >> sepatu.warna;

            tumpukanSepatu.edit(index - 1, sepatu); // Ubah indeks menjadi dimulai dari 0
            cout << "Sepatu telah diedit!" << endl;
            break;
        }
        case 6:
        {
            // Mencari Sepatu
            string keyword, type;
            cout << "Masukkan tipe pencarian (merek/ukuran/warna): ";
            cin >> type;
            cout << "Masukkan kata kunci pencarian: ";
            cin >> keyword;

            tumpukanSepatu.search(keyword, type); // Mencari sepatu berdasarkan keyword
            break;
        }
        case 0:
        {
            // Keluar dari program
            cout << "Keluar dari program..." << endl;
            break;
        }
        default:
            // Menampilkan pesan jika pilihan tidak valid
            cout << "Pilihan tidak valid!" << endl;
        }
    } while (pilihan != 0); // Keluar jika pilihan 0

    return 0;
}
