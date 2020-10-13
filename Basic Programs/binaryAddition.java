import java.util.*;

public class binaryAddition{

    //given two binary string print their addition without using any inbuilt functions.

    public static void main(String[] args){
    	Scanner scanner = new Scanner(System.in);
        
	String num1 = scanner.next();
        String num2 = scanner.next();
	
	System.out.println("Addition of " + num1 + " and "+num2 +" = " + addBinary(num1,num2));
    }

    public static String addBinary(String a, String b) {
     
        int num1 = a.length();
        int num2 = b.length();
        
	/*
	*start adding the numbers from the end along with 
	*the carry
	*/

        int i = num1 - 1;
        int j = num2 - 1;
        
        int carry = 0;

        StringBuilder sb = new StringBuilder();
        
        while(true)
        {
            
            char ca = a.charAt(i);
            char cb = b.charAt(j);
            
	   //convert the character to its int form

            int numa = ca == '1' ? 1 : 0;
            int numb = cb == '1' ? 1 : 0;
            
            int res = numa+numb+carry;
            
	  /*
	  *if the sum is 3,carry is 1 and 1 is appened
	  *if the sum is 2,carry is 1 and 0 is appened
	  *if the sum is 1,carry is 0 and 1 is appened
	  */
            if(res == 3)
            {
                sb.append('1');
                carry = 1;
            }
            else
            {
                sb.append((res&1));
                carry = res == 2 ? 1 : 0; 
            }
            
            i--;
            j--;
            
	  //if both i and j is less than zero,then the given both strings are of equal length and break the loop

            if(i < 0 && j < 0)
                break;
            
	 //if one of i or j is less than zero,then add the remaining numbers with the carry and append accordingly
            if(i < 0)
            {
                while(j>=0)
                {
                    cb = b.charAt(j);
            
                    numa = 0;
                    numb = cb == '1' ? 1 : 0;
            
                    res = numa+numb+carry;
            
                    if(res == 3)
                    {
                        sb.append('1');
                        carry = 1;
                    }
                    else
                    {
                        sb.append((res&1));
                        carry = res == 2 ? 1 : 0; 
                    }
                    j--;
                }
                break;
            }
            
            if(j < 0)
            {
                while(i>=0)
                {
                    ca = a.charAt(i);
            
                    numa = ca == '1' ? 1 : 0;
                    numb = 0;
            
                    res = numa+numb+carry;
            
                    if(res == 3)
                    {
                        sb.append('1');
                        carry = 1;
                    }
                    else
                    {
                        sb.append((res&1));
                        carry = res == 2 ? 1 : 0; 
                    }
                    i--;
                }
                break;
            }
        }
        
	//if the carry is not zero,the one is appened and return the reverse of the string
        if(carry != 0)
            sb.append(1);
        
        return sb.reverse().toString();
    }
}