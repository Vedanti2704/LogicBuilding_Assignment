//write a program to display the grade of a student based on marks


class Logic
{
    void DisplayGrade(int marks)
    {
        if(marks >= 90)
        {
            System.out.println("Grade A");
        }
        else if(marks >= 80)
        {
            System.out.println("Grade B");
        }
        else if(marks >= 70)
        {
            System.out.println("Grade C");
        }
        else if(marks >= 60)
        {
            System.out.println("Grade D");
        }
        else if(marks >= 35)
        {
            System.out.println("Grade E");
        }
        else
        {
            System.out.println("Fail");
        }
    }
}

class que92
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.DisplayGrade(82);
    }
}