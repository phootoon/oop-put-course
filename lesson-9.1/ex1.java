interface Sequence{
    String printSeq();
}

class Characters implements Sequence {
    private String sting;
    public Characters(String sting){
        this.sting=sting;
    }
    public String printSeq(){
        return sting;
    }
}

class LowerCased implements Sequence{
    private Sequence seq;
    public LowerCased(Sequence seq){
        this.seq=seq;
    }
    public String printSeq(){
        return seq.printSeq().toLowerCase();
    }
}

class Substring implements Sequence{
    private Sequence seq;
    private int beg, end;

    public Substring(Sequence seq, int beg, int end ){
        this.beg=beg;
        this.end=end;
        this.seq=seq;
    }
    public String printSeq(){
        return seq.printSeq().substring(beg,end);
    }
}

class Concatenation implements Sequence{
    private Sequence seq1;
    private Sequence seq2;
    public Concatenation(Sequence seq1, Sequence seq2)
    {
        this.seq1=seq1;
        this.seq2=seq2;
    }

    public String printSeq(){
        return seq1.printSeq()+seq2.printSeq();
    }
}