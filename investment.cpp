#include <iostream>
#include "investment.h"

using namespace std;

Investment::Investment() {  // Default constructor
    m_initialInvestmentAmount = 0;         // Default name: NoName indicates name was not set
    m_monthlyDeposit = 0;
    m_years = 0;
    m_annualInterest = 0; 
}

void Investment::SetInitialInvestmentAmount(float t_amount) {
    m_initialInvestmentAmount = t_amount;
}

int Investment::GetInitialInvestmentAmount() {
    return m_initialInvestmentAmount; 
}

void Investment::SetMonthlyDeposit(float t_amount) {
    m_monthlyDeposit = t_amount;
}

int Investment::GetMonthlyDeposit() {
    return m_monthlyDeposit;
}
void Investment::SetAnnualInterest(float t_amount) {
    m_annualInterest = t_amount; 
}

int Investment::GetAnnualInterest() {
    return m_annualInterest;
}

void Investment::SetYears(float t_amount) {
    m_years = t_amount;
}

int Investment::GetYears() {
    return m_years;
}
