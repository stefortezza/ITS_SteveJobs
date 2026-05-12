public class Parking {
    private int maxParking = 10;
    private Car[] cars = new Car[maxParking];
    private int count = 0;

    public void enterCar(Car car) {
        if (count >= maxParking) {
            System.out.println("Parking full!");
            return;
        }


        for (int i = 0; i < count; i++) {
            if (cars[i].getPlate().equals(car.getPlate())) {
                System.out.println("Car already inside!");
                return;
            }
        }

        cars[count] = car;
        count++;
        System.out.println("Car entered: " + car.getPlate());
    }

    public void exitCar(String plate) {
        int index = -1;

        for (int i = 0; i < count; i++) {
            if (cars[i].getPlate().equals(plate)) {
                index = i;
                break;
            }
        }

        if (index != -1) {
            for (int i = index; i < count - 1; i++) {
                cars[i] = cars[i + 1];
            }
            cars[count - 1] = null;
            count--;

            System.out.println("Car exited: " + plate);
        } else {
            System.out.println("Car not found!");
        }
    }

    public int getCarsCount() {
        return count;
    }

    public int getParkingFree() {
        return maxParking - count;
    }

    public void printStatus() {
        System.out.println("Cars inside: " + getCarsCount());
        System.out.println("Free spots: " + getParkingFree());
    }
}