#include <iostream>

int main()
{
    std::string doctor, patient;
    std::cin >> patient >> doctor;
    
    int size_doctor = doctor.size()-1;
    int size_patient = patient.size()-1;

    if(size_doctor <= size_patient)
    {
        printf("go\n");
    }
    else
    {
        printf("no\n");
    }
    
    return 0;
}