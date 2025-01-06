import java.io.*;

public class main {
    public static void main(String[] args) throws IOException {
        int a;
        BufferedReader buf = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("請輸入您的年齡:");
        //諾偵測到非數字輸入顯示錯誤
        try {
            a = Integer.parseInt(buf.readLine());
            System.out.println("您的年齡為:" + a);
        } catch (NumberFormatException e) {
            System.out.println(e);
        } finally {
            System.out.println("程式結束");
        }
    }
}