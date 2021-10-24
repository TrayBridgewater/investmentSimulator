#ifndef INVESTMENT_H
#define INVESTMENT_H

class Investment {
public:
    void SetInitialInvestmentAmount(float t_initialInvestmentAmount);
    int GetInitialInvestmentAmount();
    void SetMonthlyDeposit(float t_amount); 
    int GetMonthlyDeposit();
    void SetAnnualInterest(float t_amount);
    int GetAnnualInterest(); 
    void SetYears(float t_amount);
    int GetYears();
    Investment(); //constructor
private:
    float m_initialInvestmentAmount;
    float m_monthlyDeposit;
    float m_annualInterest;
    float m_years; 
};

#endif