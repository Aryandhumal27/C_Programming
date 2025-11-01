// 2. Write a program to display the grade of a student based on marks. 

class Logic
{
    void displayGrade(int iMarks)
    {
        if((iMarks <= 100) && (iMarks > 80))
        {
            System.out.println("Grade A");
        }
        else if((iMarks <= 80) && (iMarks > 60))
        {
            System.out.println("Grade B");
        }
        else if((iMarks <= 60) && (iMarks >= 35))
        {
            System.out.println("Grade c");
        }
        else
        {
            System.out.println("Fail");
        }
    }

}
class program19_2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.displayGrade(82);
    }
}