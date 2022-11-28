import java.io.*;

public class hey {
    public static void main(String[] args) throws IOException {
        File f = new File("hey.txt");
        f.createNewFile();
        FileWriter fw = new FileWriter(f);
        fw.write("Hello World");
        fw.close();
        FileReader fr = new FileReader(f);
        int i;
        while ((i = fr.read()) != -1) {
            System.out.print((char) i);
        }
        fr.close();
        FileWriter fw1 = new FileWriter(f, true);
        fw1.write("Hello World");
        fw1.close();
        FileReader fr1 = new FileReader(f);
        int i1;
        while ((i1 = fr1.read()) != -1) {
            System.out.print((char) i1);
        }
        fr1.close();
    }
}