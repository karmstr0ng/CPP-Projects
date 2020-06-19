package TestLab;

import java.io.*;
import java.io.FileOutputStream;
import java.io.FileInputStream;
import java.io.IOException;

public class FileStreamsReadnWrite {

	public static void main(String[] args) {
		try {
            File stockInputFile = new File("C:/Users/Kevin/Documents/stockIn.txt");
            File stockOutputFile = new File("C:/Users/Kevin/Documents/StockOut.txt");

            /*
             * Constructor of FileInputStream throws FileNotFoundException if
             * the argument File does not exist.
             */

            FileInputStream fis = new FileInputStream(stockInputFile);
            FileOutputStream fos = new FileOutputStream(stockOutputFile);
            int count;

            while ((count = fis.read()) != -1) {
                  fos.write(count);
            }
            fis.close();
            fos.close();
     } catch (FileNotFoundException e) {
            System.err.println("FileStreamsReadnWrite: " + e);
     } catch (IOException e) {
            System.err.println("FileStreamsReadnWrite: " + e);
     }

	}

}
