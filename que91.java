//write a program to check whether a a given year is a lea year or not

class Logic
{
    void CheckLeapYear(int year)
    {
       if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        {
            System.out.println(year + " is a Leap Year");
        }
        else
        {
            System.out.println("this year is Not a Leap Year");
        }
    }
}

class que91
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.CheckLeapYear(2024);
    }
}