#ifndef SUBJECT_H
#define SUBJECT_H

#include <iostream>
#include <vector>
using namespace std;

class Subject 
{
private:
     string subName_; 
     vector<int> marks_;
     vector<float> coeffs_; //every index of this vector is related to THIS certain index in marks-vector

     bool initFile(const string& subName); // function which creates file for a certain subject 
public:
     Subject(const string& name); 

     bool putMark(int mark, float coefficient);
     float getAverage();
     float evaluateAverageOnMark(int addMark, float coefficient);

};

#endif
