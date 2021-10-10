
/*
 * Modify the code below so that 
 * 
 * 1. So that numbers less than 10 are padded when printed 
 * i.e. 01 : 59 : 59 rather than 1 : 59 : 59
 *
 * 2. So that the time includes miliseconds 
 * e.g. 01 : 59 : 59 : 999
*/

public class Main {

  public static void main(String[] args) {
		Counter hours = new Counter(24, 1);
		Counter mins = new Counter(60, 59);
		Counter sec = new Counter(60, 58);
    Counter ms = new Counter(1000, 998);

		int i = 0;
        while (i < 10) {
            // challenge 1 - numbers less than 10 padded when printed
            String displayHours = (hours.getCount() < 10) ? ('0' + Integer.toString(hours.getCount()))
                    : Integer.toString(hours.getCount());

            String displayMinutes = (mins.getCount() < 10) ? ('0' + Integer.toString(mins.getCount()))
                    : Integer.toString(mins.getCount());

            String displaySeconds = (sec.getCount() < 10) ? ('0' + Integer.toString(sec.getCount()))
                    : Integer.toString(sec.getCount());

            String displayMilliseconds = (ms.getCount() < 10) ? ("00" + Integer.toString(ms.getCount()))
                    : Integer.toString(ms.getCount());

            System.out.println(
                    displayHours + " : " + displayMinutes + " : " + displaySeconds + " : " + displayMilliseconds);

            // challenge 2 - display time including milliseconds
            ms.tick();
            if (ms.getCount() == 0) {
                sec.tick();
                if (sec.getCount() == 0) {
                    mins.tick();
                    if (mins.getCount() == 0) {
                        hours.tick();
                    }
                }
            }

            i++;
		}
  }
}
