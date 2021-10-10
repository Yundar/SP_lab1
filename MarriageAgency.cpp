#include <iostream>
#include "MarriageAgency.h"

using namespace std;

void MarriageAgencyClients::setCode(string newCode){
    mCode = newCode;
}
void MarriageAgencyClients::setPIB(string newPIB){
    mPIB = newPIB;
}
void MarriageAgencyClients::setSex(string newSex){
    mSex = newSex;
}
void MarriageAgencyClients::setBirthday(int newBirthday){
    mBirthday = newBirthday;
}
void MarriageAgencyClients::setAge(int newAge){
    mAge = newAge;
}
void MarriageAgencyClients::setHeight(int newHeight){
    mHeight = newHeight;
}
void MarriageAgencyClients::setWeight(int newWeight){
    mWeight = newWeight;
}
void MarriageAgencyClients::setChildrensNum(int newChildrensNum){
    mChildrensNum = newChildrensNum;
}
void MarriageAgencyClients::setMaritalStatus(string newMaritalStatus){
    mMaritalStatus = newMaritalStatus;
}
void MarriageAgencyClients::setBadHabits(string newBadHabits){
    mBadHabits = newBadHabits;
}
void MarriageAgencyClients::setHobby(string newHobby){
    mHobby = newHobby;
}
void MarriageAgencyClients::setDescription(string newDescription){
    mDescription = newDescription;
}
void MarriageAgencyClients::setZodiacSign(string newZodiacSign){
    mZodiacSign = newZodiacSign;
}
void MarriageAgencyClients::setRelationshipCode(string newRelationshipCode){
    mRelationshipCode = newRelationshipCode;
}
void MarriageAgencyClients::setNationalityCode(string newNationalityCode){
    mNationalityCode = newNationalityCode;
}
void MarriageAgencyClients::setAddress(string newAddress){
    mAddress = newAddress;
}
void MarriageAgencyClients::setPhoneNumber(string newPhoneNumber){
    mPhoneNumber = newPhoneNumber;
}
void MarriageAgencyClients::setPassportData(string newPassportData){
    mPassportData = newPassportData;
}
void MarriageAgencyClients::setPartnerInfo(string newPartnerInfo){
    mPartnerInfo = newPartnerInfo;
}

string MarriageAgencyClients::getCode(){
    return mCode;
}
string MarriageAgencyClients::getPIB(){
    return mPIB;
}
string MarriageAgencyClients::getSex(){
    return mSex;
}
int MarriageAgencyClients::getBirthday(){
    return mBirthday;
}
int MarriageAgencyClients::getAge(){
    return mAge;
}
int MarriageAgencyClients::getHeight(){
    return mHeight;
}
int MarriageAgencyClients::getWeight(){
    return mWeight;
}
int MarriageAgencyClients::getChildrensNum(){
    return mChildrensNum;
}
string MarriageAgencyClients::getMaritalStatus(){
    return mMaritalStatus;
}
string MarriageAgencyClients::getBadHabits(){
    return mBadHabits;
}
string MarriageAgencyClients::getHobby(){
    return mHobby;
}
string MarriageAgencyClients::getDescription(){
    return mDescription;
}
string MarriageAgencyClients::getZodiacSign(){
    return mZodiacSign;
}
string MarriageAgencyClients::getRelationshipCode(){
    return mRelationshipCode;
}
string MarriageAgencyClients::getNationalityCode(){
    return mNationalityCode;
}
string MarriageAgencyClients::getAddress(){
    return mAddress;
}
string MarriageAgencyClients::getPhoneNumber(){
    return mPhoneNumber;
}
string MarriageAgencyClients::getPassportData(){
    return mPassportData;
}
string MarriageAgencyClients::getPartnerInfo(){
    return mPartnerInfo;
}

int MarriageAgencyClients::calculateAge(){
    int currentYear = 2021;
    mAge = currentYear - getBirthday();
    return mAge;
}