interface Robot{
    public void setNama(String nama);
    public void setTahunPembuatan(int tahun);
    public void displayData();
}

interface Doraemon{
    static void sayDora(){
        System.out.println("Halo, Saya Dora Mini");
    }

    static void displayKantongAjaib(){
        System.out.println("Saya juga seperti Doraemon yang memiliki kantung ajaib");
    }
}

class DoraMini implements Robot, Doraemon{
    String nama;
    String pemilik;
    int tahun;

    public void setNama(String nama){
        this.nama=nama;
    }

    public void setPemilik(String pemilik){
        this.pemilik=pemilik;
    }
    
    public void setTahunPembuatan(int tahun){
        this.tahun=tahun;
    }

    public void getNama(){
        System.out.println("Nama  : "+ this.nama);
    }

    public void getPemilik(){
        System.out.println("Nama Pemilik : "+ this.pemilik);
    }
    
    public void getTahunPembuatan(){
        System.out.println("Tahun Pembuatan : "+ this.tahun);
    }

    public void displayData(){
        Doraemon.sayDora();
        Doraemon.displayKantongAjaib();
        getNama();
        getPemilik();
        getTahunPembuatan();
    }
}

class mainprogram {
    public static void main(String[] args){   

        DoraMini android = new DoraMini();
        android.setNama("Ayaka");
        android.setPemilik("Ibnu");
        android.setTahunPembuatan(2020);
        android.displayData();
    }
}