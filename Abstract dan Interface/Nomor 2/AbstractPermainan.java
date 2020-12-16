abstract class Permainan {
    String namaPemain;
    int levelPemain;

    public void setnamaPemain(String namaPemain){
        this.namaPemain = namaPemain;
    }

    public void setLevelPemain(int levelPemain){
        this.levelPemain = levelPemain;
    }

    String getnamaPemain(){
        return this.namaPemain;
    }

    int getlevelPemain(){
        return this.levelPemain;
    }

    public void jalankan(){
        System.out.println("Nama Pemain : "+ getnamaPemain());
        if(this.levelPemain <= 20){
            System.out.println("Level Pemain : "+ getlevelPemain());
            System.out.println("Tingkat Pemain : Normal");
        }
        else if (this.levelPemain > 20 && this.levelPemain <= 80){
            System.out.println("Level Pemain : "+ getlevelPemain());
            System.out.println("Tingkat Pemain : Medium");
        }
        else if (this.levelPemain > 80 && this.levelPemain <= 100){
            System.out.println("Level Pemain : "+ getlevelPemain());
            System.out.println("Tingkat Pemain : Hard");
        }
        else{
            System.out.println("Level Pemain terlalu OP");
        }
    }

    public abstract int hitungSkor(int hit, int miss);
}

class PermainanArcade extends Permainan{
    @Override
    public int hitungSkor(int hit, int miss){
        return hit*3 - miss*1;
    }
}

class PermainanStrategy extends Permainan{
    @Override
    public int hitungSkor(int hit, int miss){
        return hit*5;
    }
}

class app{
    public static void main(String[] args){   
        
        PermainanArcade Player1 = new PermainanArcade();
        Player1.setnamaPemain("Keqing");
        Player1.setLevelPemain(75);
        Player1.jalankan();
        System.out.println("Hit Pemain : "+ Player1.hitungSkor(10, 5));

        System.out.println("===============================");

        PermainanStrategy Player2 = new PermainanStrategy();
        Player2.setnamaPemain("Klee");
        Player2.setLevelPemain(85);
        Player2.jalankan();
        System.out.println("Hit Pemain : "+ Player2.hitungSkor(10, 5));
    }
}

