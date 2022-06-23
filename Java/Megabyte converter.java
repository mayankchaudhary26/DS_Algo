public class MegaBytesConverter {
 public static void printMegaBytesAndKiloBytes(int kiloBytes){
 if(kiloBytes<0){System.out.println("Invalid Value");}  
 else{
     int conv = kiloBytes;
     int megabytes = (conv/1024);
     int kilobytes = (conv%1024);
     System.out.println(kiloBytes + " KB = "+ megabytes + " MB and "+ kilobytes + " KB");
 }
 }
}
