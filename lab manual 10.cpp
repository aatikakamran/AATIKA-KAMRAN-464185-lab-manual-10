#include<iostream>
#include<vector>
#include <string>
#include <cmath>
using namespace std;
//
//int main()
//{
//	int value,i;
//	vector<int> x;
//	for(int i=0;i<5;i++) {
//		cout<<"enter element of vector "<<endl;
//		cin>>value;
//		x.push_back(value);
//		
//	}
//	cout<<endl;
//	cout<<"vector: "<<endl;
//	for(int i=0;i<5;i++) {
//		cout<<x.at(i)<<" , ";
//	}
//	x.erase(x.begin()+4);
//	x.insert(x.begin()+4,5);
//	cout<<endl<<"new vector after removing element from 5th position and entering 5 is "<<endl;
//	for(int i=0;i<5;i++) {
//		cout<<x.at(i)<<" , ";
//	}
//
//         
//return 0;
//}




//
//
//double calculateMean(const std::vector<int> &grades) {
//    int sum = 0;
//    for (size_t i = 0; i < grades.size(); i++) {
//        sum += grades[i];
//    }
//    return static_cast<double>(sum) / grades.size();
//}
//
//int calculateMedian(std::vector<int> grades) {
//    size_t n = grades.size();
//    for (size_t i = 0; i < n - 1; i++) {
//        for (size_t j = 0; j < n - i - 1; j++) {
//            if (grades[j] > grades[j + 1]) {
//                int temp = grades[j];
//                grades[j] = grades[j + 1];
//                grades[j + 1] = temp;
//            }
//        }
//    }
//    return (n % 2 == 0) ? (grades[n / 2 - 1] + grades[n / 2]) / 2 : grades[n / 2];
//}
//
//int calculateMode(const std::vector<int> &grades) {
//    int maxFreq = 0, mode = 0;
//
//    for (size_t i = 0; i < grades.size(); i++) {
//        int repeat = 0;
//        for (size_t j = 0; j < grades.size(); j++) {
//            if (grades[i] == grades[j]) {
//                repeat++;
//            }
//        }
//        if (repeat > maxFreq) {
//            maxFreq = repeat;
//            mode = grades[i];
//        }
//    }
//    return mode;
//}
//
//void displayStudentsWithModeGrade(const std::vector<std::string> &names, const std::vector<int> &grades, int mode) {
//    std::cout << "Students with grades equal to mode: ";
//    for (size_t i = 0; i < grades.size(); i++) {
//        if (grades[i] == mode) {
//            std::cout << names[i] << ", ";
//        }
//    }
//    std::cout << std::endl;
//}
//
//int main() {
//    std::vector<std::string> names;
//    std::vector<int> grades;
//    int num, input;
//    std::string name;
//
//    std::cout << "Enter number of students: ";
//    std::cin >> num;
//
//    for (int i = 0; i < num; i++) {
//        std::cout << "Enter student name: ";
//        std::cin >> name;
//        names.push_back(name);
//
//        std::cout << "Enter grade in %: ";
//        std::cin >> input;
//        grades.push_back(input);
//    }
//
//    double mean = calculateMean(grades);
//    std::cout << "Mean: " << mean << std::endl;
//
//    int median = calculateMedian(grades);
//    std::cout << "Median: " << median << std::endl;
//
//    int mode = calculateMode(grades);
//    std::cout << "Mode: " << mode << std::endl;
//
//    displayStudentsWithModeGrade(names, grades, mode);
//
//    return 0;
//}




//
//class Triangle {
//public:
//    int length1;
//    int length2;
//    int length3;
//
//    Triangle() : length1(6), length2(8), length3(10) {}
//
//    int getPerimeter() {
//        return length1 + length2 + length3;
//    }
//
//    double getArea() {
//        double s = getPerimeter() / 2.0;
//        return sqrt(s * (s - length1) * (s - length2) * (s - length3));
//    }
//};
//
//int main() {
//    Triangle tri;
//    int perimeter;
//    double area;
//
//    perimeter = tri.getPerimeter();
//    area = tri.getArea();
//
//    std::cout << "Area is: " << area << std::endl;
//    std::cout << "Perimeter is: " << perimeter << std::endl;
//
//    return 0;
//}



struct Employee {
    string name;
    double salary;
    int hoursPerDay;
};

int main() {
    const int numEmployees = 10;
    Employee employees[numEmployees];

    // Input employee details
    for (int i = 0; i < numEmployees; ++i) {
        cout << "Enter name of employee " << i + 1 << ": ";
        cin >> employees[i].name;

        cout << "Enter salary for employee " << i + 1 << ": ";
        cin >> employees[i].salary;

        cout << "Enter hours of work per day for employee " << i + 1 << ": ";
        cin >> employees[i].hoursPerDay;

        cout << endl;

        // Adjust salaries based on hours worked per day
        if (employees[i].hoursPerDay >= 12) {
            employees[i].salary += 150;
        } else if (employees[i].hoursPerDay >= 10) {
            employees[i].salary += 100;
        } else if (employees[i].hoursPerDay >= 8) {
            employees[i].salary += 50;
        }
    }

    // Display employee details with final salaries
    cout << "Employee Details:" << endl;
    for (int i = 0; i < numEmployees; ++i) {
        cout << "Name: " << employees[i].name << ", Final Salary: $" << employees[i].salary << endl;
    }

    return 0;
}


