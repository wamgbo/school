

public class Cal         
{
    public static void main(String args[])
    {
		int result=0;  
		try{
			switch(args[1].charAt(0)){  
			case '+':	  
			  result = Integer.parseInt(args[0]) + Integer.parseInt(args[2]);
			  System.out.println("�B�⵲�G�O" + result);	  
			  break;
			case '-':	  
			  result = Integer.parseInt(args[0]) - Integer.parseInt(args[2]);
			  System.out.println("�B�⵲�G�O" + result);
				  break;
			case 'x':	  
			  result = Integer.parseInt(args[0]) * Integer.parseInt(args[2]);
			  System.out.println("�B�⵲�G�O" + result);
			  break;         
			case '/':	  
			  result = Integer.parseInt(args[0]) / Integer.parseInt(args[2]); 
			  System.out.println("�B�⵲�G�O" + result);
			  break;
			default:
				  System.out.println(args[1] + " �O�L�Ī��B���! �L�k�B��"); 
			}
		}
		catch (ArrayIndexOutOfBoundsException e){
			System.out.println(e);
		}
		catch (NumberFormatException e){
			System.out.println(e);
		}
		catch (ArithmeticException e){
			System.out.println(e);
		}
		finally
		{
			System.out.println("Program execution completed");
		}
	} 
}    


