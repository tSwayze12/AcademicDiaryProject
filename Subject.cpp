#include "Subject.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Subject::Subject(const string &name) : subName_(name) {
  if (initFile(subName_) == false) {
    cout << "An unexpected error has occured\n";
  } else {
    initFile(subName_);
  }
}

bool Subject ::initFile(const string &subName) {
  ofstream fileInput;
  fileInput.open(subName + ".txt", ofstream::app);

  if (!fileInput.is_open()) {
    return false;
  }

  return true;
}

bool Subject::putMark(int mark, float coefficient) {
  if (mark <= 0 or mark > 5) {
    return false;
  }

  if (coefficient < 0.3 || coefficient > 3) {
    return false;
  }
  marks_.push_back(mark);
  coeffs_.push_back(coefficient);

  fstream ofs;
  ofs.open(subName_ + ".txt", ofstream::app);

  if (ofs.is_open() == false) {
    return false;
  }

  ofs << mark << "\n" << coefficient << "\n";
  return true;
}

float Subject ::getAverage() const {
  double coeffSum = 0;
  double sumOf = 0;
  double average = 0;

  for (int i = 0; i < marks_.size(); i++) {
    coeffSum += coeffs_[i];
    sumOf += marks_[i] * coeffs_[i];
  }

  return sumOf / coeffSum;
}

float Subject ::evaluateAverageOnMark(int addMark, float coefficient) const {
  double coeffSum = 0;
  double sumOf = 0;
  double average = 0;

  for (int i = 0; i < marks_.size(); i++) {
    coeffSum += coeffs_[i];
    sumOf += marks_[i] * coeffs_[i];
  }

  coeffSum += coefficient;
  sumOf += addMark * coefficient;

  return sumOf / coeffSum;
}

void Subject::showmarks() const {
  for (int i = 0; i < marks_.size(); i++) {
    cout << "[mark: " << marks_[i] << " coef: " << coeffs_[i] << " index "
         << i + 1 << " ]\t";
  }
}

void Subject::readmarks() {
  ifstream ifs;
  ifs.open(subName_ + ".txt");
  unsigned countstr = 0;
  string str;
  while (!ifs.eof()) {
    getline(ifs, str);
    countstr++;
  }
  countstr--;

  ifs.close();

  ifstream readingf;
  readingf.open(subName_ + ".txt");

  string strtoconvert;
  for (int i = 0; i < countstr; i++) {
    if (i % 2 == 0) {
      getline(readingf, strtoconvert);
      marks_.push_back(stod(strtoconvert));
    } else {
      getline(readingf, strtoconvert);
      coeffs_.push_back(stod(strtoconvert));
    }
  }
}

void Subject::deleteMark(int markid) {
  marks_.erase(marks_.begin() + markid - 1, marks_.begin() + markid);
  coeffs_.erase(coeffs_.begin() + markid - 1, coeffs_.begin() + markid);

  ofstream ofs;
  ofs.open(subName_ + ".txt");

  for (int i = 0; i < coeffs_.size(); i++) {
    ofs << marks_[i] << endl << coeffs_[i] << endl;
  }
}
