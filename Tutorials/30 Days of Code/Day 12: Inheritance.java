class Student extends Person{
	private int[] testScores;

    /*	
    *   Class Constructor
    *   
    *   @param firstName - A string denoting the Person's first name.
    *   @param lastName - A string denoting the Person's last name.
    *   @param id - An integer denoting the Person's ID number.
    *   @param scores - An array of integers denoting the Person's test scores.
    */
    // Write your constructor here
    Student(String firstName, String lastName, int identification, int[] scores){
      super(firstName, lastName, identification);
      this.testScores=scores;
    }
    /*	
    *   Method Name: calculate
    *   @return A character denoting the grade.
    */
    // Write your method here
    public char calculate(){
      Float a=0.0f;
      for(int i=0; i<testScores.length; i++){
        a+=testScores[i];
      }
      a/=testScores.length;
      if(a>=90 && a<=100)
        return 'O';
      else if(a>=80 && a<90)
        return 'E';
      else if(a>=70 && a<80)
        return 'A';
      else if(a>=55 && a<70)
        return 'P';
      else if(a>=40 && a<55)
        return 'D';
      else
        return 'T';
    }
}
