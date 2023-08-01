class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        //Brute Force  
        vector<double>ConvertedTempValues;
        double KelvinTemp=celsius+273.15;
        double FahrenheitTemp=celsius *  1.80 + 32.00;
        ConvertedTempValues.push_back(KelvinTemp);
        ConvertedTempValues.push_back(FahrenheitTemp);
        return ConvertedTempValues;
    }
};