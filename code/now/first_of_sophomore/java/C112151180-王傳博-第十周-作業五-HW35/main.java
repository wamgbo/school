import java.util.Scanner;
import java.util.Random;;

//發牌類別
class Poker {
    // member:牌組deck[] 計數器count
    private int deck[] = new int[52];
    private int count = 0;

    // 初始化deck 0~51
    Poker() {
        for (int i = 0; i < 52; i++)// 將0~51分別放進deck陣列
            deck[i] = i;
        shuffle();// 洗牌
        assign();// 發牌
    }

    // 每次發四張牌，發完十詢問是否繼續(yes/no)
    void assign() {
        do {
            for (int i = 0; i < 4; i++) {
                System.out.println("第 " + (this.count + 1) + " 張牌是" + getColor(this.deck[this.count]) + " "
                        + getNumber(this.deck[this.count]));
                this.count++;
            }
        } while (hit() == true);

    }

    // 優先判斷count是否已達到上限,再讓使用者輸入是否進行下一步
    boolean hit() {
        Scanner s = new Scanner(System.in);
        if (this.count == this.deck.length) {// 回傳false
            System.out.println("牌已全數發完!");
            return false;
        }
        // 將使用者輸入內容轉換成小寫判斷，y=true,n=false,諾是其他輸入則回傳false
        System.out.println("請問是不是要繼續發下一輪?(y/n)");
        String input = s.next();
        switch (input.toLowerCase()) {
            case "y":
                return true;
            case "yes":
                return true;
            case "n":
                return false;
            case "no":
                return false;
            default:
                return false;
        }
    }

    // 將卡牌(0~51)取%4的餘數，回傳對應花色
    String getColor(int card) {
        String color = null;// 預設null
        switch (card % 4) {
            case 0:
                color = "黑桃";
                return color;
            case 1:
                color = "紅心";
                return color;
            case 2:
                color = "方塊";
                return color;
            case 3:
                color = "梅花";
                return color;
            default:
                return color;
        }
    }

    // 歷變deck並將當前index的內容與隨機index(0~51)的內容做交換。
    void shuffle() {
        for (int i = 0; i < this.deck.length; i++) {
            int j = (int) (Math.random() * 52);// 取的隨機數
            // 交換牌
            int temp = deck[i];
            deck[i] = deck[j];
            deck[j] = temp;
        }
    }

    // 將卡牌(0~51)取%13，回傳對應數字
    String getNumber(int card) {
        switch (card % 13) {
            case 0:
                return "Ace";
            case 10:
                return "Jack";
            case 11:
                return "Queen";
            case 12:
                return "King";
            default:// 1~9則直接回傳
                return Integer.toString(card % 13);
        }
    }
}

public class main {
    public static void main(String args[]) {
        Poker poker = new Poker();
    }
}