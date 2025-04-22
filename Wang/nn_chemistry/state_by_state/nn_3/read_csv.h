#include <sstream>
struct DataPoint 
{
    float temperature;
    float pressure;
    Species massfractions;
};

// Function to read CSV file into std::array
std::vector<DataPoint> readDataFromFile(const std::string& filename) 
{
    std::vector<DataPoint> data;
    std::ifstream file(filename);
    if (!file.is_open()) 
    {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return data;
    }

    std::string line;
    while (std::getline(file, line)) 
    {
        std::stringstream ss(line);
        DataPoint dp;
        std::string value;
        
        // Read time
        std::getline(ss, value, ',');
        dp.temperature = std::stod(value);
        
        // Read temperature
        std::getline(ss, value, ',');
        dp.pressure = std::stod(value);
        
        // Read species concentrations into a fixed-size array
        for (size_t i = 0; i < 10; i++) //Read in 10 species
        {
            if (!std::getline(ss, value, ',')) 
            {
                std::cerr << "Error: Insufficient species data in row!" << std::endl;
                return {};
            }
            dp.massfractions[i] = std::stod(value);
        }

        data.push_back(dp);
    }
    file.close();
    return data;
}
/*
use:
    std::string filename = "fastest.csv"; 
    std::vector<DataPoint> dataset = readDataFromFile(filename);

    if (dataset.empty()) {
        std::cerr << "No data loaded!" << std::endl;
        return 1;
    }

    // Example: Process the first data point
    for (size_t i = 0; i < dataset.size(); ++i)
    {
        const DataPoint& dp = dataset[i];
        
        Species massfractions = dp.massfractions;
        double temperature_ = dp.temperature;
        double pressure_ = dp.pressure;
*/
