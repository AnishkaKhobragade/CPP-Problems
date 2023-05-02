#include <iostream>
#include <string>

using namespace std;

class PersonData {
    private: 
        string lastName;
        string firstName;
        string address;
        string city;
        string state;
        string zip;
        string phone; 
    
    public:
        //accessor funcions
        string getLastName() const{
            return lastName;
        }
        string getFirstName() const{
            return firstName;
        }
        string getAddress() const{
            return address;
        }
        string getCity() const{
            return city;
        }
        string getState() const{
            return state;
        }
        string getZip() const{
            return zip;
        }
        string getPhone() const{
            return phone;
        }
        //mutator functions
        void setLastName(const string& lname){
            lastName = lname;
        }
        void setFirstName(const string& fname){
            firstName = fname;
        }
        void setAddress(const string& add){
            address = add;
        }
        void setCity(const string& c){
            city = c;
        }
        void setState(const string& s){
            state = s;
        }
        void setZip(const string& z){
            zip = z;
        }
        void setPhone(const string& p){
            phone = p;
        }
        
};

class CustomerData: public PersonData{
    private:
        int customerNumber;
        bool mailingList;
    public:
        //accessor functions
        int getCustomerNumber() const{
            return customerNumber;
        }
        bool getMailingList() const{
            return mailingList;
        }
        //mutator functions
        void setCustomerNumber(int num){
            customerNumber = num;
        }
        void setMailingList(bool mailList){
            mailingList = mailList;
        }
};

int main()
{
    CustomerData customer;
    customer.setLastName("A");
    customer.setFirstName("K");
    customer.setAddress("CS Street");
    customer.setCity("Somecity");
    customer.setState("CA");
    customer.setZip("123456");
    customer.setPhone("123-456-7890");
    customer.setCustomerNumber(123456);
    customer.setMailingList(true);
    
    cout << "Customer data: "<<endl;
    cout << "Last Name: " << customer.getLastName() << endl;
    cout << "First Name: " << customer.getFirstName() << endl;
    cout << "Address: " << customer.getAddress() << endl;
    cout << "City: " << customer.getCity() << endl;
    cout << "State: " << customer.getState() << endl;
    cout << "ZIP: " << customer.getZip() << endl;
    cout << "Phone Number: " << customer.getPhone() << endl;
    cout << "Customer Number: " << customer.getCustomerNumber() << endl;
    cout << "Mailing List: " << customer.getMailingList() << endl;
    return 0;
}
