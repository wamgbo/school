import java.util.*;

public class Cal         
{
	static void caculate()
	{
		//�N��J�����e����" "���input��
		var s = new Scanner(System.in);
		String temp=s.nextLine();
		String input[]= temp.split(" ");
		int result=0;
		//��X�{���~�ɱN���s�I�smethod
		try{
			switch(input[1].charAt(0)){  
				case '+':	  
				  result = Integer.parseInt(input[0]) + Integer.parseInt(input[2]);
				  System.out.println("�B�⵲�G�O" + result);	  
				  break;
				case '-':	  
				  result = Integer.parseInt(input[0]) - Integer.parseInt(input[2]);
				  System.out.println("�B�⵲�G�O" + result);
					  break;
				case 'x':	  
				  result = Integer.parseInt(input[0]) * Integer.parseInt(input[2]);
				  System.out.println("�B�⵲�G�O" + result);
				  break;         
				case '/':	  
				  result = Integer.parseInt(input[0]) / Integer.parseInt(input[2]); 
				  System.out.println("�B�⵲�G�O" + result);
				  break;
				default:
					  System.out.println(input[1] + " �O�L�Ī��B���! �L�k�B��"); 
				}		
		}
		catch (ArrayIndexOutOfBoundsException e){
			System.out.println(e);
			System.out.print("�Э��s��J:");
			caculate();
			System.exit(0);
		}
		catch (NumberFormatException e){
			System.out.println(e);
			System.out.print("�Э��s��J:");
			caculate();
			System.exit(0);
		}
		catch (ArithmeticException e){
			System.out.println(e);
			System.out.print("�Э��s��J:");
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
		System.out.print("�п�J:");
		caculate();
	} 
}    


