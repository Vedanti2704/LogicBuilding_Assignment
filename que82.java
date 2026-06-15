//write a program to check whether a number is a palidrome or not

class Logic
{
    void CheckPalindrome(int num)
    {
        int temp = num;
        int digit = 0;
        int rev = 0;

        while(num != 0)
        {
            digit = num % 10;
            rev = (rev * 10) + digit;
            num = num / 10;
        }

        if(temp == rev)
        {
            System.out.println("Number is Palindrome");
        }
        else
        {
            System.out.println("Number is Not Palindrome");
        }
    }
}

class que82
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.CheckPalindrome(121);
    }
}