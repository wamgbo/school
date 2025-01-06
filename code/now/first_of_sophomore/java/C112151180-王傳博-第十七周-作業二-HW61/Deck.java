import java.util.ArrayList;
import java.util.Scanner;

public class Deck {
    private ArrayList<Card> cards = new ArrayList<>();
    private ArrayList<Card> dealedCards = new ArrayList<>();

    public Deck() {
        String suits[] = { "梅花", "紅心", "黑桃", "方塊" };
        for (int i = 0; i < 52; i++) {
            Card card = new Card(i % 13 + 1, suits[i / 13]);
            cards.add(card);
        }
    }

    public void setting() {
        int index1 = (int) (Math.random() * 52);
        int index2 = (int) (Math.random() * 52);
        Card temp = cards.get(index1);
        cards.set(index1, cards.get(index2));
        cards.set(index2, temp);
    }

    public void showProfile(ArrayList<Card> temp) {
        for (var p : temp) {
            p.showProfile();
            System.out.print(",");
        }
    }

    public void shuffle() {
        System.out.print("撲克牌初始化完成，當前撲克牌順序為:\n");
        showProfile(cards);
        for (int i = 0; i < 52; i++) {
            setting();
        }
        System.out.println("\n");
        System.out.println("洗牌完成，當前撲克牌順序為:");
        showProfile(cards);
    }

    public void deal() {
        int index;
        boolean indexCheck = false;
        if (cards.size() < 4) {
            System.out.println("牌數不足，無法發牌");
            return;
        }
        for (int i = 0; i < 4; i++) {
            index = (int) (Math.random() * 52);
            System.out.print("第 " + (i + 1) + " 張牌是");
            do {
                try {
                    cards.get(index).showProfile();
                    dealedCards.add(cards.get(index));
                    cards.remove(index);
                    indexCheck = false;
                } catch (IndexOutOfBoundsException e) {
                    index = (int) (Math.random() * 52);
                    indexCheck = true;
                }
            } while (indexCheck);
            System.out.println();
        }
    }

    public void showDealedCards() {
        System.out.print("發牌順序:");
        showProfile(dealedCards);
    }

    public int size() {
        return cards.size();
    }
}
