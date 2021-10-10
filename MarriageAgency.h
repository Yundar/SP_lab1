#ifndef MARRIAGEAGENCY_H
#define MARRIAGEAGENCY_H

#include <string>

class MarriageAgencyClients {
public:
    MarriageAgencyClients() = default;
    ~MarriageAgencyClients() = default;

private:
    std::string mCode;
    std::string mPIB;
    std::string mSex;
    int mBirthday; // only year
    int mAge;
    int mHeight;
    int mWeight;
    int mChildrensNum;
    std::string mMaritalStatus;
    std::string mBadHabits;
    std::string mHobby;
    std::string mDescription;
    std::string mZodiacSign;
    std::string mRelationshipCode;
    std::string mNationalityCode;
    std::string mAddress;
    std::string mPhoneNumber;
    std::string mPassportData;
    std::string mPartnerInfo;

public:
    void setCode(std::string mCode);
    void setPIB(std::string mPIB);
    void setSex(std::string mSex);
    void setBirthday(int mBirthday);
    void setAge(int mAge);
    void setHeight(int mHeight);
    void setWeight(int mWeight);
    void setChildrensNum(int mChildrensNum);
    void setMaritalStatus(std::string mMaritalStatus);
    void setBadHabits(std::string mBadHabits);
    void setHobby(std::string mHobby);
    void setDescription(std::string mDescription);
    void setZodiacSign(std::string mZodiacSign);
    void setRelationshipCode(std::string mRelationshipCode);
    void setNationalityCode(std::string mNationalityCode);
    void setAddress(std::string mAddress);
    void setPhoneNumber(std::string mPhoneNumber);
    void setPassportData(std::string mPassportData);
    void setPartnerInfo(std::string mPartnerInfo);

    std::string getCode();
    std::string getPIB();
    std::string getSex();
    int getBirthday();
    int getAge();
    int getHeight();
    int getWeight();
    int getChildrensNum();
    std::string getMaritalStatus();
    std::string getBadHabits();
    std::string getHobby();
    std::string getDescription();
    std::string getZodiacSign();
    std::string getRelationshipCode();
    std::string getNationalityCode();
    std::string getAddress();
    std::string getPhoneNumber();
    std::string getPassportData();
    std::string getPartnerInfo();

    int calculateAge();
    
};

#endif // MARRIAGEAGENCY_H
