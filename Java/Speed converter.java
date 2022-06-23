#calculate value in m/hr

public class SpeedConverter {
    public static long toMilesPerHour(double kilometersPerHour){
        if(kilometersPerHour<0){
            return -1;
        }
    
              return Math.round(kilometersPerHour/1.609);
        }
        public static void printConversion(double kilometersPerHour){
            if(kilometersPerHour<0)
            {System.out.println("Invalid Value");}
            else{
            long milesPerHour = 
            System.out.println(kilometersPerHour + " km/h = " + milesPerHour + " mi/h ");
            }}}
