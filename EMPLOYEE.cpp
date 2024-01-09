#include <iostream>

using namespace std;

class Employee {
public:
   virtual double calculatePay() = 0;  // Pure virtual function to make Employee an abstract class
};

class Manager : public Employee {
public:
   Manager(double salary, double bonus) : salary(salary), bonus(bonus) {}

   double calculatePay() override {
       return salary + bonus;
   }

private:
   double salary, bonus;
};

class Engineer : public Employee {
public:
   Engineer(double salary, double hourly_rate, double hours_worked) : salary(salary), hourly_rate(hourly_rate), hours_worked(hours_worked) {}

   double calculatePay() override {
       return salary + hourly_rate * hours_worked;
   }

private:
   double salary, hourly_rate, hours_worked;
};

int main() {
   Manager manager(50000, 10000);
   Engineer engineer(40000, 25, 40);

   Employee* employees[] = {&manager, &engineer};

   for (Employee* employee : employees) {
       cout << "Pay for " << typeid(*employee).name() << ": $" << employee->calculatePay() << endl;
   }

   return 0;
}
