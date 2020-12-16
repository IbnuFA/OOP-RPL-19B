abstract class Robot{
    protected String nama;
    protected String pemilik;
    protected int tahun;
    
    public void setNama(String nama){
        this.nama = nama;
    }
    
    public void setPemilik(String pemilik){
        this.pemilik = pemilik;
    }
    
    public void setTahun(int tahun){
        this.tahun = tahun;
    }
    
    String getNama(){
        return this.nama;
    }
    
    String getPemilik(){
        return this.pemilik;
    }
    
    int getTahun(){
        return this.tahun;
    }
    
    public void displayData(){
        System.out.println("Nama Pemilik : "+ getPemilik());
        System.out.println("Nama  : "+ getNama());
        System.out.println("Tahun Pembuatan : "+ getTahun());
    }
}

class DoraMini extends Robot {
    public void sayDora(){
        System.out.println("Halo, Saya Dora Mini");
    }
    
    public void displayData(){
        System.out.println("Nama Pemilik : "+ this.getPemilik());
        System.out.println("Nama  : "+ this.getNama());
        System.out.println("Tahun Pembuatan : "+ this.getTahun());
    }

    public static void main(String[] args){   
        DoraMini coba = new DoraMini();
        coba.sayDora();
        coba.setNama("Dora");
        coba.setPemilik("Ibnu");
        coba.setTahun(2020);
        coba.displayData();
    }
}