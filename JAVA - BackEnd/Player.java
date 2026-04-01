public class Player {

    String name;
    String surname;
    int number;

    public Player(){}

    public Player(String name, String surname, int number) {
        this.name = name;
        this.surname = surname;
        this.number = number;
    }

    public String getAbbString() {
        return name.substring(0, 1).toUpperCase() +
                surname.substring(0, 1).toLowerCase() +
                number;
    }


    public String newMethod() {
        return "🇮🇹 " +
                this.number + " " +
                this.surname.toUpperCase() + " " +
                this.name.substring(0,1).toUpperCase() + ".";
    }
}