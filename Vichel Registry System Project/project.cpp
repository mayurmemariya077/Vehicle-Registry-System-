



#include <iostream>
#include <string>

using namespace std;


class Vehicle
{

protected:

    int vehicleID;
    string manufacturer;
    string model;
    int year;

    static int totalVehicles;

public:

    Vehicle()
    {
        vehicleID = 0;
        manufacturer = "";
        model = "";
        year = 0;
        totalVehicles++;

    }

    Vehicle(int id, string manu, string mod, int yr)
    {
        vehicleID = id;
        manufacturer = manu;
        model = mod;
        year = yr;
        totalVehicles++;

    }

    virtual ~Vehicle()
    {
    }


    int getVehicleID()

    {
        return vehicleID;

    }


    void setVehicleID(int id)

    {
        vehicleID = id;

    }

    virtual void display()
    {

        cout << "\nVehicle ID : " << vehicleID;
        cout << "\nManufacturer : " << manufacturer;
        cout << "\nModel : " << model;
        cout << "\nYear : " << year;

    }

    static int getTotalVehicles()

    {

        return totalVehicles;
    }
};

int Vehicle::totalVehicles = 0;

class Car : public Vehicle
{

protected:
    string fuelType;

public:
    Car() : Vehicle()
    {

        fuelType = "";

    }

    Car(int id, string manu, string mod, int yr, string fuel)
        : Vehicle(id, manu, mod, yr)
    {

        fuelType = fuel;

    }

    void display()
    {
        Vehicle::display();

        cout << "\nFuel Type : " << fuelType << endl;

    }
};

class ElectricCar : public Car


{
protected:
    int batteryCapacity;

public:

    ElectricCar() : Car()
    {
        batteryCapacity = 0;
    }



    ElectricCar(int id, string manu, string mod, int yr,
                string fuel, int battery)
        : Car(id, manu, mod, yr, fuel)
    {
        batteryCapacity = battery;
    }



    void display()
    {
        Car::display();
        cout << "Battery Capacity : "
             << batteryCapacity << " kWh" << endl;
    }




};

class SportsCar : public ElectricCar
{
private:
    int topSpeed;


public:
    SportsCar() : ElectricCar()

    {

        topSpeed = 0;

    }

    SportsCar(int id, string manu, string mod, int yr,
              string fuel, int battery, int speed)
        : ElectricCar(id, manu, mod, yr, fuel, battery)
    {
        topSpeed = speed;
    }

    void display()
    {

        ElectricCar::display();
        cout << "Top Speed : " << topSpeed << " km/h" << endl;


    }
};

class Aircraft
{
protected:
    int flightRange;

public:
    Aircraft()
    {

        flightRange = 0;

    }

    Aircraft(int range)
    {

        flightRange = range;

    }
};

class FlyingCar : public Car, public Aircraft

{
public:
    FlyingCar()
    {
    }

    FlyingCar(int id, string manu, string mod, int yr,
              string fuel, int range)
        : Car(id, manu, mod, yr, fuel),
          Aircraft(range)
    {
    }

    void display()
    {
        Car::display();
        cout << "Flight Range : "
             << flightRange << " km" << endl;
    }




};

class Sedan : public Car


{
public:
    Sedan(int id, string manu, string mod, int yr, string fuel)
        : Car(id, manu, mod, yr, fuel)
    {
    }

    void display()
    {
        cout << "\n----- Sedan -----";
        Car::display();
    }


};

class SUV : public Car
{


public:
    SUV(int id, string manu, string mod, int yr, string fuel)
        : Car(id, manu, mod, yr, fuel)
    {
    }

    void display()
    {
        cout << "\n----- SUV -----";
        Car::display();
    }



};

class VehicleRegistry
{


private:
    Vehicle *vehicles[100];
    int count;

public:
    VehicleRegistry()
    {
        count = 0;
    }

    void addVehicle(Vehicle *v)
    {
        vehicles[count++] = v;
    }

    void displayVehicles()
    {
        if (count == 0)
        {
            cout << "\nNo Vehicles Found!\n";
            return;
        }

        for (int i = 0; i < count; i++)
        {
            cout << "\n------------------------";
            vehicles[i]->display();
            cout << "\n------------------------\n";
        }
    }

    void searchVehicle(int id)
    {
        for (int i = 0; i < count; i++)
        {
            if (vehicles[i]->getVehicleID() == id)
            {
                cout << "\nVehicle Found:\n";
                vehicles[i]->display();
                return;
            }
        }

        cout << "\nVehicle Not Found!\n";
    }



};

int main()
{

    VehicleRegistry registry;

    int choice;

    do
    {
        cout << "\n\n===== VEHICLE REGISTRY SYSTEM =====";
        cout << "\n1. Add Car";
        cout << "\n2. Add Electric Car";
        cout << "\n3. Add Sports Car";
        cout << "\n4. Add Flying Car";
        cout << "\n5. Add Sedan";
        cout << "\n6. Add SUV";
        cout << "\n7. View All Vehicles";
        cout << "\n8. Search Vehicle By ID";
        cout << "\n9. Total Vehicles";
        cout << "\n0. Exit";

        cout << "\nEnter Choice : ";
        cin >> choice;

        int id, year;
        string manufacturer, model, fuel;
        int battery, speed, range;

        switch (choice)
        {
        case 1:
            cout << "ID : ";
            cin >> id;
            cout << "Manufacturer : ";
            cin >> manufacturer;
            cout << "Model : ";
            cin >> model;
            cout << "Year : ";
            cin >> year;
            cout << "Fuel Type : ";
            cin >> fuel;

            registry.addVehicle(
                new Car(id, manufacturer, model, year, fuel));
            break;



        case 2:
            cout << "ID : ";
            cin >> id;
            cout << "Manufacturer : ";
            cin >> manufacturer;
            cout << "Model : ";
            cin >> model;
            cout << "Year : ";
            cin >> year;
            cout << "Fuel Type : ";
            cin >> fuel;
            cout << "Battery Capacity : ";
            cin >> battery;

            registry.addVehicle(
                new ElectricCar(id, manufacturer, model,
                                year, fuel, battery));
            break;


        case 3:
            cout << "ID : ";
            cin >> id;
            cout << "Manufacturer : ";
            cin >> manufacturer;
            cout << "Model : ";
            cin >> model;
            cout << "Year : ";
            cin >> year;
            cout << "Fuel Type : ";
            cin >> fuel;
            cout << "Battery Capacity : ";
            cin >> battery;
            cout << "Top Speed : ";
            cin >> speed;

            registry.addVehicle(
                new SportsCar(id, manufacturer, model,
                              year, fuel, battery, speed));
            break;




        case 4:
            cout << "ID : ";
            cin >> id;
            cout << "Manufacturer : ";
            cin >> manufacturer;
            cout << "Model : ";
            cin >> model;
            cout << "Year : ";
            cin >> year;
            cout << "Fuel Type : ";
            cin >> fuel;
            cout << "Flight Range : ";
            cin >> range;

            registry.addVehicle(
                new FlyingCar(id, manufacturer, model,
                              year, fuel, range));
            break;





        case 5:
            cout << "ID : ";
            cin >> id;
            cout << "Manufacturer : ";
            cin >> manufacturer;
            cout << "Model : ";
            cin >> model;
            cout << "Year : ";
            cin >> year;
            cout << "Fuel Type : ";
            cin >> fuel;

            registry.addVehicle(
                new Sedan(id, manufacturer, model, year, fuel));
            break;



        case 6:
            cout << "ID : ";
            cin >> id;
            cout << "Manufacturer : ";
            cin >> manufacturer;
            cout << "Model : ";
            cin >> model;
            cout << "Year : ";
            cin >> year;
            cout << "Fuel Type : ";
            cin >> fuel;

            registry.addVehicle(
                new SUV(id, manufacturer, model, year, fuel));
            break;

        case 7:
            registry.displayVehicles();
            break;


            
        case 8:
            cout << "Enter Vehicle ID : ";
            cin >> id;
            registry.searchVehicle(id);
            break;

        case 9:
            cout << "\nTotal Vehicles : "
                 << Vehicle::getTotalVehicles()
                 << endl;
            break;

        case 0:
            cout << "\nProgram Ended!";
            break;

        default:
            cout << "\nInvalid Choice!";
        }

    } while (choice != 0);



    return 0;


}