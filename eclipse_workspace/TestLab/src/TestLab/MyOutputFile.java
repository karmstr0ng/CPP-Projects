package TestLab;

import java.io.*;
import java.io.FileOutputStream;
import java.io.FileInputStream;
import java.io.IOException;
import java.util.Properties;

public class MyOutputFile {
	public static void main(String[] args) {

		File file = new File("c:/Users/kevin/Documents/newfile.txt");
		File outputFile = new File("c:/Users/kevin/Documents/outagain.txt");
		
		int in;
		
		
		

		String content = "This is the text content";

		try (FileOutputStream fop = new FileOutputStream(outputFile)) {
			
			int c;
			
			FileInputStream propFile = new FileInputStream("C:/Users/kevin/Documents/myProperties.txt");
			Properties p = new Properties(System.getProperties());
	        p.load(propFile);
	        System.setProperties(p);
	        
	        System.getProperties().list(System.out);
	        
	        
	        //while ((c = System.getProperties().list(System.out)) != -1)
	        //fop.write(System.getProperties().list(System.out));
	        
	        
	        
			// if file doesn't exists, then create it
			if (!file.exists()) {
				file.createNewFile();
			}

			// get the content in bytes
			byte[] contentInBytes = content.getBytes();

			fop.write(contentInBytes);
			fop.flush();
			fop.close();

			System.out.println("Done");

		} catch (IOException e) {
			e.printStackTrace();
		}
		
	/*try (FileOutputStream fos = new FileOutputStream(outputFile)) {
			if (outputFile.exists()) {
				outputFile.createNewFile();
			}
			int c;
			//while ((c = file.read()) != -1) {
				
			}
			
		/*} catch (IOException e) {
			e.printStackTrace();
		}*/
		
	}
	
}