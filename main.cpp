#include <iostream>
#include "MarriageAgency.cpp"

int main(){
    MarriageAgencyClients newClientsStack;
    MarriageAgencyClients *newClientsHeap = new MarriageAgencyClients();

    newClientsStack.setCode("AC3105");
    newClientsStack.setPIB("Zubenko Mihail Petrovich");
    newClientsStack.setSex("MI-28H");
    newClientsStack.setBirthday(1989);
    newClientsStack.setAge(32);
    newClientsStack.setHeight(179);
    newClientsStack.setWeight(81);
    newClientsStack.setChildrensNum(0);
    newClientsStack.setMaritalStatus("not married");
    newClientsStack.setBadHabits("None");
    newClientsStack.setHobby("Piano");
    newClientsStack.setDescription("Something");
    newClientsStack.setZodiacSign("Cancer");
    newClientsStack.setRelationshipCode("2215A");
    newClientsStack.setNationalityCode("F35Z");
    newClientsStack.setAddress("New Orlean");
    newClientsStack.setPhoneNumber("0112233456");
    newClientsStack.setPassportData("FXA1234Q");
    newClientsStack.setPartnerInfo("Something about partner");
    std::cout << newClientsStack.calculateAge() << "years old" << std::endl;

    newClientsHeap->setCode("AB1256");
    newClientsHeap->setPIB("Grach Yana Viktorivna");
    newClientsHeap->setSex("Female");
    newClientsHeap->setBirthday(1993);
    newClientsHeap->setAge(20);
    newClientsHeap->setHeight(165);
    newClientsHeap->setWeight(60);
    newClientsHeap->setChildrensNum(0);
    newClientsHeap->setMaritalStatus("not married");
    newClientsHeap->setBadHabits("None");
    newClientsHeap->setHobby("Music, books");
    newClientsHeap->setDescription("Something");
    newClientsHeap->setZodiacSign("Taurus");
    newClientsHeap->setRelationshipCode("3512C");
    newClientsHeap->setNationalityCode("F35Z");
    newClientsHeap->setAddress("New Orlean");
    newClientsHeap->setPhoneNumber("0667788943");
    newClientsHeap->setPassportData("FZC6544H");
    newClientsHeap->setPartnerInfo("Something about partner");
    std::cout << newClientsHeap->calculateAge() << "years old" << std::endl;

    delete newClientsHeap;

    return 0;
}