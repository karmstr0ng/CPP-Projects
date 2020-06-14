package TestLab;

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.util.Properties;

public class MyProperties {

	public static void main(String[] args) {

		try {
            // set up new properties object from file "myProperties.txt"
        FileInputStream propFile = new FileInputStream("C:/Users/kevin/Documents/myProperties.txt");
        Properties p = new Properties(System.getProperties());
        p.load(propFile);

            // set the system properties
        System.setProperties(p);
        System.getProperties().list(System.out);    // display new properties
    } catch (java.io.FileNotFoundException e) {
        System.err.println("Can't find myProperties.txt.");
    } catch (java.io.IOException e) {
        System.err.println("I/O failed.");
    }

	}

}