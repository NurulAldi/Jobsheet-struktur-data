
<img src="asset/praktikum struktur data.png">

## 【 Tentang Repository 】
<img align="left" alt="Coding" width="60" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/0d1d6e1a-91a2-4a33-8bc8-3a80fbcb54d4">

Repository ini bertujuan untuk menyediakan berbagai contoh program yang diimplementasikan menggunakan bahasa pemrograman C. Program-program ini dibuat berdasarkan latihan-latihan yang bersumber dari modul, sehingga dapat membantu dalam memahami konsep dan penerapan bahasa C.

## <a id="informasi-dosen"></a>【 Dosen Pengampu 】
<img align="left" width="160" src="https://github.com/SirGhazian/praktikum-struktur-data-UNP/assets/142916107/58bffcd0-9983-4a84-9fc6-857c625cb609">

**Randi Proska Sandra, S.Pd, M.Sc** </br>
`Lecturer in Informatics` </br></br>
Randi completed his graduate degree at the Graduate Institute of Network Learning Technology, National Central University, Taiwan. He is a lecturer in the Informatics Bachelor Program at Universitas Negeri Padang, with interests in learning analytics, UI/UX design, software engineering project management, AI-supported educational technologies, and educational data mining. He has training from Microsoft, INTEL, AWS, and the Python Institute, and is a Google Certified Educator and Adobe Creative Educator.


## 【 Biodata Mahasiswa 】
<table>
<tr>
<td>
<b><pre>
<h3>
Nama                : Nurul Aldi
NIM                 : 23343048
Program Studi       : Informatika
Mata Kuliah         : Praktikum Struktur Data
Kode Kelas          : INF1.62.2014
Dosen Pengampu      : Randi Proska Sandra, M.Sc
</h3>
</pre></b>
</td>
</tr>
</table> <br>
Untuk bantuan dan pertanyaan, silahkan hubungi sosial media saya berikut ini : <br><br>
<p>
<a href="mailto:aldiprm48@gmail.com"><img img src="https://img.shields.io/badge/gmail-%23EA4335.svg?style=plastic&logo=gmail&logoColor=white" alt="Gmail"/></a> &nbsp;
<a href="https://wa.me/081282304058"><img src="https://img.shields.io/badge/whatsapp-%2325D366.svg?style=plastic&logo=whatsapp&logoColor=white" alt="Whatsapp"/></a> &nbsp;
<a href="https://www.linkedin.com/in/nurul-aldi-60b072265/"><img src="https://img.shields.io/badge/linkedin-%230A66C2.svg?style=plastic&logo=linkedin&logoColor=white" alt="LinkedIn"/></a> &nbsp;
<a href="https://www.instagram.com/aldiiii102/?hl=en"><img src="https://img.shields.io/badge/instagram-%23E4405F.svg?style=plastic&logo=instagram&logoColor=white" alt="Instagram"/></a>
</p>



## 【 Daftar Jobsheet 】
✦ [Jobsheet 1 -- Pengenalan Struktur Data](#jobsheet-01) <br>
✦ [Jobsheet 2 -- Array, Pointer, Structure](#jobsheet-02) <br>
✦ [Jobsheet 3 -- Single Linked List](#jobsheet-03) <br>
✦ [Jobsheet 4 -- Doubly Linked List](#jobsheet-04) <br>
✦ [Jobsheet 5 -- Circular Doubly Linked List](#jobsheet-05) <br>
✦ [Jobsheet 6 -- Stack](#jobsheet-06) <br>
✦ [Jobsheet 7 -- Queue](#jobsheet-07) <br>
✦ [Jobsheet 8 -- Bubble Sort and Insertion Sort](#jobsheet-08) <br>
✦ [Jobsheet 9 -- Selection Sort and Merge Sort](#jobsheet-09) <br>
✦ [Jobsheet 10 -- Shell Sort and Quick Sort](#jobsheet-10) <br>
✦ [Jobsheet 11 -- Linear Search and Binary Search](#jobsheet-11) <br>
✦ [Jobsheet 12 -- Tree](#jobsheet-12) <br>
✦ [Jobsheet 13 -- Graphs](#jobsheet-13) 

<h2><img src="asset/Jobsheet 1.png" id="jobsheet-01"></h2>

### ⭒ Struktur data

Struktur data adalah cara menyimpan, mengambil, dan menyusun data. Struktur data memungkinkan data yang ada di komputer lebih mudah diakses dan diperbarui.
Fondasi setiap program komputer adalah data dan algoritma. Dengan algoritma, program komputer bisa menggunakan data secara efektif. Sementara struktur data ibarat kontainer yang menyimpan banyak data dengan layout tertentu. Tiap jenis struktur data memiliki layout masing-masing. <br>

<img src="asset/struktur-data.jpeg">

<br><br> di atas merupakan contoh-contoh struktur data yang paling umum digunakan dan diketahui <br>

----


<h2><img src="asset/Jobsheet 2.png" id="jobsheet-02"></h2>

### ⭒ Array
Array merupakan kumpulan nilai dengan tipe data yang sama, yang dimana masing masing elemen di dalam array ini diberikan indeks, elemen yang terdapat pada array dapat diakses menggunakan indeks dari elemen yang terkait. <br>

**Contoh:**
```
int arr[5];          // Deklarasi array integer dengan 5 elemen
int arr2[5] = {1, 2, 3, 4, 5};  // Deklarasi dan inisialisasi array
```

### ⭒ Pointer
Pointer merupakan variabel yang berisi alamat memory dari variable yang memiliki nilai tertentu. Deklarasi variable pointer mirip dengan variabel biasa hanya saja ditambahkan tanda "*" yang disebut <b>asterisk</b> di depan nama variabel tersebut, tanda asterisk ini juga dapat digunakan untuk mengakses nilai dari variabel yang telah ditunjuk oleh variabel pointer. <br>

**Contoh:**
```
int x = 10;
int *ptr = &a; // Pointer ptr menyimpan alamat memori dari variabel x
```

### ⭒ Struct
Struct adalah kumpulan variabel bertipe data berbeda-beda yang terletak di dalam satu nama objek, programmer perlu menentukan terlebih dahulu tipe data dari variabel yang ada di dalam struct sebelum mendeklarasikan struct, setelah itu struct dapat dideklarasikan menggunakan keyword "struct" atau "typedef struct". 

**Contoh:**
```
struct Person {
    char name[50];
    int age;
    float height;
};
```


<br>

----



<h2><img src="asset/Jobsheet 3.png" id="jobsheet-03"></h2>

### ⭒ Single Linked List
 
Linked list merupakan salah satu struktur data yang memorinya dialokasikan secara dinamis, Linked list sendiri adalah sebuah data yang berupa simpul beralamat yang saling bertaut, setiap simpul bisa menyimpan data dalam tipe char, int, string dan tipe lainnya.<br>

<img src="asset/Single-linked-list.png">

**Contoh:**
```
new_node->data = new_data;
new_node->next = (*head_ref);
(*head_ref) = new_node;
```

----



<h2><img src="asset/Jobsheet 4.png" id="jobsheet-04"></h2>


### ⭒ Double Linked List
Double Linked List merupakan linked list dengan dua pointer, jika linked list biasa/single linked list umumnya memiliki satu pointer untuk ke linked list selanjutnya, maka, double linked list memiliki dua pointer yang mana satu pointer lainnya ditujukan ke linked list sebelumnya.<br>


<img src="asset/Double-linked-list.png">

Double Linked List memiliki beberapa kelebihan lainnya jika dibandingkan dengan single linked list, yaitu : <br>
⭒ Operasi penghapusan lebih efisien menggunakan pointer yang menunjuk ke simpul yang akan dihapus. <br>
⭒ Dapat melakukan proses insert() yang lebih efisien dibandingkan single linked list.<br>


**Contoh:**
```
struct Node {
    int data;           // Data yang disimpan pada node
    struct Node* prev;  // Pointer ke node sebelumnya
    struct Node* next;  // Pointer ke node berikutnya
};
```

----



<h2><img src="asset/Jobsheet 5.png" id="jobsheet-05"></h2>
 
Circular Linked List dapat berupa single linked list atau double linked list tetapi circular linked list ini tidak mempunyai TAIL, sehingga pointer selanjutnya dari elemen terakhir mengarah kembali ke HEAD, jika circular linked list digunakan dalam bentuk double linked list, pointer sebelumnya dari HEAD akan menunjuk ke elemen terakhir. Hal inilah yang menyebabkan namanya menjadi Circular Linked List. <br>

<img src="asset/Circular-linked-list.png">

**Contoh:**
```
// deklarasi node menggunakan fungsi buatNode()
Node* satu = buatNode(3);
Node* dua = buatNode(5);
Node* tiga = buatNode(9);

// Connect nodes
satu->next = dua;
dua->next = tiga;
tiga->next = satu; // node terakhir terhubung dengan node pertama
```

----



<h2><img src="asset/Jobsheet 6.png" id="jobsheet-06"></h2>

### ⭒ Stack
 
Stack merupakan kumpulan data, dimana data tersebut diletakkan di atas data yang lainnya. Oleh karena itu, stack menggunakan konsep <b>LIFO (Last In First Out)</b>, LIFO merupakan sebuah konsep pengaturan data dimana data yang paling terakhir masuk ke dalam stack adalah data yang pertama kali dikeluarkan dari stack. <br>

<img src="asset/ill-stack.png">

Stack dapat dibuat dalam bentuk ouble Linked List ataupun Linked List, meskipun penggunaan stack dalam bentuk array dianggap kurang tepat karena array memiliki sifat statis sedangkan elemen stack sangat bervariasi dan dinamis, tetapi hal itu masih memungkinkan. Stack dengan array dapat dibuat dalam dua bentuk yaitu Single Stack dan Double Stack <br>

**Fungsi Utama:**
- `push()`: Menambahkan elemen baru ke puncak stack.
- `pop()`: Menghapus dan mengembalikan elemen teratas dari stack.
- `peek()`: Mengembalikan elemen teratas tanpa menghapusnya dari stack.
- `isEmpty()`: Memeriksa apakah stack kosong.
- `isFull()`: Memeriksa apakah stack penuh (jika menggunakan array dengan kapasitas tetap).


----



<h2><img src="asset/Jobsheet 7.png" id="jobsheet-07"></h2>

### ⭒ Queue
 
Queue adalah kumpulan data yang mana data di dalamnya berbaris layaknya sebuah antrian, karena itulah Queue ini menggunkan konsep yang disebut dengan <b>FIFO (First In First Out)</b>, FIFO merupakan sebuah konsep pengaturan data dimana data yang paling awal masuk adalah yang paling awal keluar dari Queue. <br>

<img src="asset/ill-queue.png">

Queue memiliki dua pointer yang menunjuk ke elemen pertama <b>FRONT</b> dan elemen terakhir <b>REAR</b> dari Queue, ketika menginisialisasi Queue, nilai FRONT dan REAR ditetapkan menjadi -1, lalu sebelum sebuah data masuk ke dalam Queue, maka nilai dari kedua variabel tersebut ditambah menjadi 0, sehingga sebuah data awal tersebut ditempatkan di indeks 0. Jika ada tambahan data yang masuk ke Queue, yang bertambah selanjutnya adalah hanya REAR saja, sedangkan FRONT akan tetap berada di data pertama.<br>

----



<h2><img src="asset/Jobsheet 8.png" id="jobsheet-08"></h2>

### ⭒ Bubble Sort
 
Bubble Sort adalah salah satu algoritma pengurutan sederhana yang bekerja dengan cara membandingkan dan menukar elemen-elemen yang berdekatan satu sama lain jika tidak berada dalam urutan yang benar. Bubble Sort membandingkan dua elemen yang berdekatan dan menukarnya jika urutannya salah. Proses ini diulang untuk setiap pasangan elemen dalam array hingga tidak ada lagi pertukaran yang dilakukan, menandakan bahwa array sudah terurut.  <br>

<img src="asset/bb-sort.png">

### ⭒ Insertion Sort

Insertion Sort adalah algoritma pengurutan yang bekerja dengan cara membandingkan setiap elemen dalam array dengan elemen-elemen sebelumnya, lalu memasukkan elemen tersebut ke posisi yang tepat dalam array yang sudah terurut. Insertion Sort bekerja seperti saat kita menyusun kartu di tangan, di mana kita membandingkan kartu yang akan dimasukkan dengan kartu-kartu yang sudah diurutkan sebelumnya. <br>


<img src="asset/insertion.png">

----



<h2><img src="asset/Jobsheet 9.png" id="jobsheet-09"></h2>

### ⭒ Selection Sort
 
Selection Sort adalah sebuah algoritma pengurutan data yang mengurutkan data dengan cara mencari elemen terkecil pada sebuah list data yang belum terurut, lalu meletakkan elemen terkecil tersebut di paling depan dari sebuah list data. <br><br>
Cara kerja Selection Sort : elemen pertama dari urutan ditetapkan menjadi element terkecil dan dimasukkan ke dalam variabel <b>"minimum"</b>, lalu variabel minimum dibandingkan dengan elemen kedua, jika elemen kedua lebih kecil dari "minimum" maka elemen kedua yang akan menjadi minimum, begitu seterusnya hingga akhir dari urutan, setelah setiap perulangan, "minimum" diletakkan di paling depan urutan list data. <br>

<img src="asset/Selection-Sort.png">


### ⭒ Merge Sort

Merge sort adalah salah satu algoritma pengurutan yang paling efisien. Hal ini didasarkan pada strategi memecah belah dan menaklukkan. Pengurutan gabungan terus-menerus memotong daftar menjadi beberapa subdaftar hingga masing-masing hanya memiliki satu item, lalu menggabungkan subdaftar tersebut ke dalam daftar yang diurutkan.

<img src="asset/Merge-Sort.png">

----


<h2><img src="asset/Jobsheet 10.png" id="jobsheet-10"></h2>

### ⭒ Shell Sort

Shell Sort adalah sebuah algoritma pengurutan data dengan pengurutan elemen pertama memiliki jarak interval dengan elemen yang akan dibandingkan, jarak interval diantara elemen akan semakin mengecil seiring semakin banyaknya pengulangan pengurutan yang dilakukan, Shell sort memiliki beberapa formula pengurutan, yaitu : 
<ul>
1.Shell's original sequence : N/2, N/4, ..., 1 <br>2.Knuth's increments : 1, 4, 13, ..., (3k-1)/2. <br>3.Sedgewick's increments : 1, 8, 23, 77, 281, 1073, 4193, 16577...4j+1+ 3·2j+ 1.<br>
</ul>

<img src="asset/shell-sort.png">

### ⭒ Quick Sort

Quick Sort merupakan sebuah algrotiman pengurutan data yang menggunakan algoritma divide dan conquer. Algoritma ini mengambil sebuah elemen sebagai pivot dan memisahkan array yang ada disekitar pivot.Kunci dari proses quick sort adalah <b>partisi()</b>. <br>

<img src="asset/Quick-Sort-Algorithm.png">

----



<h2><img src="asset/Jobsheet 11.png" id="jobsheet-11"></h2>


 ### ⭒ Linear Search
 
Linear Search adalah algoritma yang mencari data dimulai dari indeks paling awal hingga indeks paling akhir dari list data, apabila ditemukan data yang sesuai dengan data yang dicari pada list data, maka pencarian akan dihentikan dan diberikan nilai return true. <br>

<img src="asset/Linear.png">

 ### ⭒ Binary Search

Binary Search merupakan sebuah algoritma pencarian yang memiliki syarat bahwa list data tempat pencarian akan dilakukan harus dalam keadaan terurut terlebih dahulu, jika tidak, pencarian tidak akan dapat dilakukan menggunakan binary search. <br>

<img src="asset/binary.png">

----



<h2><img src="asset/Jobsheet 12.png" id="jobsheet-12"></h2>

 ### ⭒ Tree
 
Tree adalah struktur data yang berbentuk hierarki, Tree dapat dijelajahi dengan berbagai cara, tidak seperti linked list, queues, stack, atau array yang hanya memiliki satu jalan untuk membaca data, setiap tree adalah kombinasi dari sebuah simpul dengan 2 sub-tree. Sebuah simpul struct yang mengarah ke kanan atau ke kiri mungkin memiliki anak di kanan atau kirinya yang dinamakan sub-tree bukan sub-node/simpul.<br>

<img src="asset/Tree.png">

Tree Traversal adalah mengunjungi semua simpul yang terdapat pada tree, aktivitas mengunjungi semua simpul ini bisa saja bertujuan untuk mencari nilai tertinggi dari tree tersebut atau menambah nilai data pada tiap simpul yang terdapat pada tree. Berdasarkan urutan penjelajahannya, tree traversal terbagi 3 yaitu : <ul>1.Inorder Traversal. <br> 2.Preorder Traversal. <br> 3.Postorder Traversal. </ul> <br>

**Contoh:**
```
struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
};
```
Pada contoh di atas, data adalah nilai yang disimpan pada simpul, right adalah pointer yang menunjuk ke right child dan left adalah pointer yang menunjuk ke left child

----



<h2><img src="asset/Jobsheet 13.png" id="jobsheet-13"></h2>

 ### ⭒ Graph

Graph adalah jenis struktur data umum yang susunan datanya tidak berdekatan satu sama lain (non-linier). Graph terdiri dari kumpulan simpul berhingga untuk menyimpan data dan antara dua buah simpul terdapat hubungan saling keterkaitan.

<img src="asset/graf.png">

 ### ⭒ Depth First Search
 
Depth First Search adalah sebuah algoritma pencarian rekusif untuk mencari semua titik yang ada pada sebuah graph atau pohon. Tujuan dari algoritma ini adalah untuk menandai setiap vertex/tiitk yang belum dikunjungi sambil menghindari vertex yang telah dikunjungi. Proses pencarian pada DFS dilakukan pada semua sub tree dari satu cabang root terlebih dahulu sebelum menelusuri node node yang selevel. <br>

<img src="asset/DFS.png">

 ### ⭒ Breadth First Search

Breadth First Search adalah algoritma yang melakukan pencariannya secara melebar tidak seperti Depth First Search yang melakukan pencarian sampai ke titik terdalam sebuah cabangnya terlebih dahulu, tree pada algoritma ini terbagi atas beberapa level, simpul root atau simpul paling atas adalah level 0, dan sub tree dari simpul tersebut adalah level 1, lalu sub tree dari simpul level 1 adalah level 2, begitu seterusnya. Algoritma ini akan melakukan pencari melalui level level tersebut secara berurutan dimulai dari level 0 lalu level 1 dan seterusnya. <br>

<img src="asset/BFS.png">
