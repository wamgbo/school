import java.util.Scanner;

public class main {

    public static void main(String[] args) {
        var s = new Scanner(System.in);
        var poker = new Deck();
        int i = 1;
        poker.shuffle();
        System.out.println();
        try {
            do {
                System.out.println("第" + i + "輪發牌:");
                poker.deal();
                System.out.print("請問是不是要繼續發下一輪?(y/n)");
                i++;
            } while (Character.toLowerCase(s.nextLine().charAt(0)) == 'y' && poker.size() >= 4);
        } catch (StringIndexOutOfBoundsException e) {
        }
        System.out.println("發牌完畢，遊戲結束");
        poker.showDealedCards();
    }
}
