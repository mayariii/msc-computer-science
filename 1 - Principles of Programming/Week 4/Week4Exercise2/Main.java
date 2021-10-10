class Main {

  public static void main(String[] args) {
    Main m = new Main();
    m.printCharsInString("This is an example string");
    m.printStringInReverse("This string is reversed");
    m.printStringInUppercase("This is an angry string");
    System.out.print(m.encryptText("hello world", 3));
    System.out.print(m.decryptText("khoor zruog", 3));
  }

  /*
  * Modify the method below so that it prints out each character in the string
  * on a new line.
  */

  public void printCharsInString(String s){
    for (int i = 0; i < s.length(); i++) {
            System.out.println(s.charAt(i));
        }
  }

  /*
  * Modify the method below so that it prints out
  * the string in reverse order
  */

  public void printStringInReverse(String s){
    for (int i = s.length() - 1; i >= 0; i--) {
            System.out.print(s.charAt(i));
        }
        System.out.print("\n");
  }

  /*
  * Modify the method below so that it prints out
  * the string as all uppercase
  */

  public void printStringInUppercase(String s){
    System.out.println(s.toUpperCase());
  }

  /*
  * Implement the method below which encrypts the
  * text passed in as an argument using a 
  * Ceaser cypher.  
  * 
  * https://en.wikipedia.org/wiki/Caesar_cipher
  * 
  * This is illustrated below 
  *
  * input string = "ABC"
  * shift by = 3
  * encrypted text = "DEF"
  */
  public String encryptText(String s, int shiftBy){
    // initialise array to store encrypted message  
    char[] charsEncrypted = new char[s.length()];

    // iterate over plain text passed in an shift each letter by the given key
    for (int i = 0; i < s.length(); i++) {

      // cipher for lowercase letters
      if (s.charAt(i) >= 'a' && s.charAt(i) <= 'z') {
          charsEncrypted[i] = (char) (((s.charAt(i) - 'a' + shiftBy) % 26) + 'a');
      }

      // cipher for uppercase letters
      else if (s.charAt(i) >= 'A' && s.charAt(i) <= 'Z') {
          charsEncrypted[i] = (char) (((s.charAt(i) - 'A' + shiftBy) % 26) + 'A');
      }
      // handle anything else (e.g. punctuation) to stay the same
      else {
          charsEncrypted[i] = s.charAt(i);
      }
  }
    // convert to string
    String sEncrypted = new String(charsEncrypted);
    return sEncrypted + '\n';
  }

  /*
  * Implement the method below which decrypts a
  * Ceaser cypher encrypted message
  *
  */

  public String decryptText(String s, int shiftBy){
    return encryptText(s, 26 - shiftBy);
  }

}
