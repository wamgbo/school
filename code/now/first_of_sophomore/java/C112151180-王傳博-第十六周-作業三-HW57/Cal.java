import java.util.*;

public class Cal         
{
	static void caculate()
	{
		//將輸入的內容切割" "放到input裡
		var s = new Scanner(System.in);
		String temp=s.nextLine();
		String input[]= temp.split(" ");
		int result=0;
		//當出現錯誤時將重新呼叫method
		try{
			switch(input[1].charAt(0)){  
				case '+':	  
				  result = Integer.parseInt(input[0]) + Integer.parseInt(input[2]);
				  System.out.println("運算結果是" + result);	  
				  break;
				case '-':	  
				  result = Integer.parseInt(input[0]) - Integer.parseInt(input[2]);
				  System.out.println("運算結果是" + result);
					  break;
				case 'x':	  
				  result = Integer.parseInt(input[0]) * Integer.parseInt(input[2]);
				  System.out.println("運算結果是" + result);
				  break;         
				case '/':	  
				  result = Integer.parseInt(input[0]) / Integer.parseInt(input[2]); 
				  System.out.println("運算結果是" + result);
				  break;
				default:
					  System.out.println(input[1] + " 是無效的運算符! 無法運算"); 
				}		
		}
		catch (ArrayIndexOutOfBoundsException e){
			System.out.println(e);
			System.out.print("請重新輸入:");
			caculate();
			System.exit(0);
		}
		catch (NumberFormatException e){
			System.out.println(e);
			System.out.print("請重新輸入:");
			caculate();
			System.exit(0);
		}
		catch (ArithmeticException e){
			System.out.println(e);
			System.out.print("請重新輸入:");
			caculate();
			System.exit(0);
		}
		finally
		{
			System.out.println("Program execution completed");
		}
	}
    public static void main(String args[])
    {
		System.out.print("請輸入:");
		caculate();
	} 
}    


