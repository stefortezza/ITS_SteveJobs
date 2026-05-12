import java.time.LocalDate;
import java.time.format.DateTimeFormatter;

public class Player {

    String name;
    String surname;
    int number;
    String dateOfBth;

    public Player() {
    }

    public Player(String name, String surname, int number, String dateOfBth) {
        this.setName(name);
        this.setSurname(surname);
        this.number = number;
        setDateOfBth(dateOfBth);
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
                this.name.substring(0, 1).toUpperCase() + ".";
    }

    public void setName(String name) {
        this.name = this.capitalize(name);
    }

    public void setNumber(int number) {
        if (number > 0 && number < 100) {
            this.number = number;

        } else {
            System.out.println("ERRORE." + number);
        }
    }

    public void setSurname(String surname) {
        this.surname = this.capitalize(surname);
    }

    public String getName() {
        return name;
    }

    public String getSurname() {
        return surname;
    }

    public int getNumber() {
        return number;
    }

    public String getDateOfBth() {
        return dateOfBth;
    }

    public void setDateOfBth(String dateOfBth) {
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("yyyyMMdd");

        LocalDate localDate = LocalDate.parse(dateOfBth, formatter);

        if (localDate.isAfter(LocalDate.now())) {
            System.out.println("Errore: la data è nel futuro");
            return;
        }

        this.dateOfBth = dateOfBth;

    }

    private String capitalize(String base) {
        if (base.length() > 0) {
            return base.substring(0, 1).toUpperCase() + base.substring(1).toLowerCase();
        }
        return base;
    }

    @Override
    public String toString() {
        return "Player{" +
                "name='" + name + '\'' +
                ", surname='" + surname + '\'' +
                ", number=" + number +
                ", dateOfBth='" + dateOfBth + '\'' +
                '}';
    }
}