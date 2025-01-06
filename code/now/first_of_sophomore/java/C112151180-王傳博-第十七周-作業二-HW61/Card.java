public class Card {
    private Integer card_number;
    private String suits;

    public void showProfile() {
        System.out.print(this.card_number + this.suits);
    }

    public Card(Integer card_number, String suits) {
        this.card_number = card_number;
        this.suits = suits;
    }
}
